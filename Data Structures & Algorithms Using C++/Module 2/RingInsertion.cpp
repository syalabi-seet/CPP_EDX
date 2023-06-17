#include <iostream>
using namespace std;

class Node 
{
    public:
        int data;
        Node* next;
};

class LinkedList
{
    public:
        // Pointer reference to head and tail of doubly linked list
        Node* head, *tail; 

        // Default parameterless constructor
        LinkedList()
        {
            head = NULL;
        }

        // Member function declaration
        void insertAtFront(int); 
        void display();
};

// Member function definition out of class declaration
void LinkedList::insertAtFront(int value)
{
    // Create new node from value
    Node* newNode = new Node();

    // Put in value into data
    newNode->data = value;

    // Make new node next as head
    newNode->next = head;

    // Make new node as head
    head = newNode;
}

void LinkedList::display()
{
    // Get temp pointer
    Node* current = head;

    while (current != NULL)
    {
        // Print out data value of current node (head)
        cout << current->data << " ";

        // Replace head pointer to next node
        current = current->next;
    }
}

int main()
{
    char choice;
    int value;
    LinkedList rod;
    do
    {
        cout << "\nEnter the ring number:\n";
        cin >> value;

        rod.insertAtFront(value);

        cout << "Do you want to add another ring? Enter y/n \n";
        cin >> choice;
    }
    while (choice == 'y');
    cout << "The ring numbers in the rod are: \n";
    rod.display();
    return 0;
}