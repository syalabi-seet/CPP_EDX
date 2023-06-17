#include <iostream>
using namespace std;
#define MAX 50

class Stack
{
    private:
        int top;
    
    public:
        int stack[MAX];
        Stack()
        {
            top = -1;
        }
        void push(int data);
        int findMiddle();
        int pop();
};

void Stack::push(int data)
{
    if (top >= MAX-1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    stack[++top] = data;
}

int Stack::pop()
{
    if (top <= -1)
    {
        cout << "Stack Underflow" << endl;
        return 0;
    }
    return stack[top--];
}

int Stack::findMiddle()
{
    int middle = top / 2;
    return stack[middle];
}

int main()
{
    int N;
    Stack s;
    cout << "\nEnter the number of elements to be pushed into the stack:" << endl;
    cin >> N;

    if (N > 0 && N <= 50)
    {
        int e;
        for (int i = 0; i < N; i++)
        {
            cout << "Enter element " << i + 1 << ":" << endl;
            cin >> e;
            s.push(e);
        }
        cout << "The middle element is: " << s.findMiddle() << endl;
        cout << "The popped element is: " << s.pop() << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    return 0;
}