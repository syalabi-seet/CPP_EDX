#include <iostream>
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
        Node* head;
        LinkedList()
        {
            head = NULL;
        }
        void append(int);
        void display();
        int countTheKey(int);
};

void LinkedList::append(int value)
{
    // Initialize new node
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    // Check if empty list
    if (head == NULL)
    {
        head = newNode;
    }
    else 
    {
        // Traverse to last node
        Node* current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }

        // Change last node to new node
        current->next = newNode;
    }
}

void LinkedList::display()
{
    Node* current = head;
    cout << "The list is: ";
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }    
}

int LinkedList::countTheKey(int key)
{
    int count{0};    
    Node* current = head;
    while (current != NULL)
    {
        if (current->data == key)
        {
            count++;
        }
        current = current->next;
    }
    return count;
}

int main()
{
    int N, value, key;
    cout << "\nEnter the size of the list: ";    
    cin >> N;

    LinkedList lst;
    if (N > 0)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> value;
            lst.append(value);
        }
        cout << "\n";
        lst.display();
        cout << "\nEnter the number: ";
        cin >> key;
        cout << key << " occurs " << lst.countTheKey(key) << " times.\n";
    }
    else
    {
        cout << "\nInvalid Input";
    }
    return 0;
}