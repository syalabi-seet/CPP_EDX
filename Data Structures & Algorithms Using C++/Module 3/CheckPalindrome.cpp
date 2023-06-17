//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include<iostream>
using namespace std;

class Node {     
    public:
        int data;
        Node *next;
};

class Stack{ 
    public:
        Node *top;
        Stack(){ 
            top = NULL;
        }
        void push(int data);
        int pop();
};

void Stack::push(int data){
    //Write your code here
    Node* newNode = new Node();
    newNode->data = data;
    
    if (top == NULL) {
        newNode->next = NULL;
    }
    else {
        newNode->next = top;
    }
    top = newNode;
}

int Stack::pop(){
    //Write your code here 
    Node* current;
    if (top == NULL) {
        cout << "Stack underflow" << endl;
        return 0;
    }
    current = top;
    top = top->next;
    cout << "Popped element:" << current->data << endl;
    return current->data;  //Change this return value according to the problem description
}

int checkPalindrome(Stack stk, int arr[],int size) {
    //Write your code here
    int currentNumber = stk.top->data;
    for (int i = 0; i < size / 2; i++) {
        if (stk.pop() != stk.top->data) {
            return 0;
        }
    }
    return 1;   //Change this return value according to the problem description
}

      
int main(){
    Stack stk;
    int size,i,data;
        
    cin>>size;
    if(size<2){
        cout<<"Invalid input";
        return 0;
    }
    
    int arr[size];
    for(i=0; i<size; i++){
        cin>>data;
        arr[i]=data;
        stk.push(data);
    }
    
    //Write your code here for calling the 'checkPalindrome()' method
    // cout << checkPalindrome(stk, arr, size) << endl; 
    checkPalindrome(stk, arr, size);
    return 0;
 }