//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include <iostream>
using namespace std;
#define MAX 5

class Queue {
    public:
        int front, rear;
        int personQueue[MAX];
        Queue() {
            front = rear = -1; 
        }
        bool isFull() {
            return (rear == MAX - 1);
        }
        bool isEmpty() {
            return (front == -1 && rear == -1);
        }
        void enQueue(int codeNumber);
        void deQueue();
        void display();
};

void Queue::enQueue(int codeNumber)  {      
    //Write your code here
    if (isFull()) {
        cout << "The queue is full" << endl;
        return;
    }
    else if (isEmpty()) {
        front = rear = 0;
    }
    else {
        rear++;
    }
    personQueue[rear] = codeNumber;
}

void Queue:: deQueue() {
    //Write your code here
    if (isEmpty()) {
        cout << "The queue is empty" << endl;
        return;
    } 
    else {
        int item = personQueue[front];
        if (front==rear){
            front = rear = -1;
        }
        else {
            front++;
        }
        cout << "The person removed from the Queue: " << item << endl;
    }
}

void Queue::display(){
    //Write your code here
    if (isEmpty()) {
        cout << "The queue is empty" << endl;
        return;
    }
    cout << "The persons in the queue: ";
    for (int i = front; i <= rear; i++) {
        cout << personQueue[i] << " ";
    }
}
    

int main() {
    Queue q;
    int codeNumber;
    int choice;
    do{
        cout<<"\n1.Add a person to the Queue";
        cout<<"\n2.Remove a person from the Queue";
        cout<<"\n3.Display all the code numbers";
        cout<<"\n4.Exit";
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch(choice) {
            case 1:
                cout<<"\nEnter the code no. of the person:";
                cin>>codeNumber;
                q.enQueue(codeNumber);
                break;
            
            case 2:
                q.deQueue();
                break;
           
            case 3:
                q.display();
                break;
            
            case 4:
                return 0;
                
            default:
                cout<<"Invalid option\n";
        }
        
    }while(true);
    
    return 0;
}
           
   