//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.
//If required, you can add additional functions or header files.
#include <iostream>
#include <string.h>
using namespace std;
#define MAXSIZE 5

class Stack {   
    private:       
        int top;  

    public: 
       char box[MAXSIZE][10]; 
       Stack() { 
           top = -1; 
        } 
       void push(char bkNo[]); 
       void pop();
       void display();
};

void Stack::push(char bkNo[]) { 
    //Write your code here
    if (top >= MAXSIZE - 1)
    {
        cout << "The box is full" << endl;
        return;
    }
    strcpy(box[++top], bkNo);
}

void Stack::pop() { 
    //Write your code here
    if (top <= -1)
    {
        cout << "The box is empty" << endl;
        return;
    }
    cout << "The book is deleted from the box: " << box[top] << endl;
    top--;
} 

void Stack::display(){
    //Write your code here

    if (top <= -1)
    {
        cout << "The box is empty" << endl;
        return;
    }

    cout << "The books in the box: ";
    for (int i = top; i >= 0; i--)
    {
        cout << box[i] << " ";
    }
}

int main(){
    Stack stk;
    char bkNo[10];
    int choice;
    do{
        cout<<"\n1. Insert a book in the box";
        cout<<"\n2. Delete a book from the box";
        cout<<"\n3. Display book box";
        cout<<"\n4. Exit";
        
        cout<<"\nEnter your choice: ";
        cin>>choice;
        
        switch(choice) {
            case 1:
                cout<<"Enter the book no.:";
                cin>>bkNo;
                stk.push(bkNo);
                break;
            case 2:
                stk.pop();
                break;   
            case 3:
                stk.display();
                break;
            case 4:
                return 0;
            default:
                cout<<"Invalid option\n";
        }
    }while(true);    
    return 0;
}