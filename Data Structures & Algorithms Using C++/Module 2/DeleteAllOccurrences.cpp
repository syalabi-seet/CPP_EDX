#include <iostream>
#include <cstdlib>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

class LinkedList
{
    public:
        Node *head;
        LinkedList() { 
            head = NULL; 
        }
        void append(int value);
        void deleteAllOccurrences(int key);
        void display();
};

void LinkedList::append(int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;            
        }
        current->next = newNode;
    }
}

void LinkedList::deleteAllOccurrences(int key)
{
    if (head == NULL) // Empty list or only 1 node
    {
        return;
    }

    // Delete nodes first iteration
    Node* nodeToDelete;
    while (head != NULL && head->data == key)
    {
        nodeToDelete = head;
        head = head->next;
        free(nodeToDelete);
    }

    // Delete and adjust links
    Node* current = head;
    while (current->next != NULL)
    {
        if (current->next->data == key)
        {
            nodeToDelete = current->next;
            current->next = current->next->next;
            free(nodeToDelete);
        }
        else
        {
            current = current->next;
        }
    }
}

void LinkedList::display()
{
    Node *current = head;
    cout << "\nThe list after deletion: ";
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}

int main()
{
    int N;
    cout << "\nEnter the size of the list: ";
    cin >> N;

    int value;
    LinkedList lst;
    for (int i = 0; i < N; i++)
    {
        cin >> value;
        lst.append(value);
    }

    int delValue;
    cout << "\nEnter the element to be deleted: ";
    cin >> delValue;

    lst.deleteAllOccurrences(delValue);
    lst.display();
    return 0;
}
