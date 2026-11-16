#include <iostream>
using namespace std;

class stack {
    int a[10];
    int n = 10;
    int top = -1;

public:

    void push(int x) {
        if (top == n - 1) {
            cout << "Stack is full" << endl;
            return;
        }

        top++;
        a[top] = x;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        int val = a[top];
        top--;
        return val;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == n - 1;
    }

    void printStack() {
        for (int i = 0; i <= top; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    stack m;
    int x;
for (int  i = 0; i < 10; i++)
{cout<<"enter the number "<<i+1;
 cin>>x;
 m.push(x);
}
m.printStack();
    m.pop();
    m.printStack();
    

    return 0;
}