#include <iostream>
using namespace std;

class Stack
{
    int size, top1, top2;
    int *a;

public:

    // Constructor
    Stack(int n)
    {
        size = n;
        a = new int[n];

        top1 = -1;
        top2 = n;
    }

    // Push into Stack 1
    void push1(int x)
    {
        if (top1 + 1 == top2)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        top1++;
        a[top1] = x;
    }

    // Push into Stack 2
    void push2(int x)
    {
        if (top1 + 1 == top2)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        top2--;
        a[top2] = x;
    }

    // Pop from Stack 1
    int pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack 1 Underflow" << endl;
            return -1;
        }

        int pop = a[top1];
        top1--;

        return pop;
    }

    // Pop from Stack 2
    int pop2()
    {
        if (top2 == size)
        {
            cout << "Stack 2 Underflow" << endl;
            return -1;
        }

        int pop = a[top2];
        top2++;

        return pop;
    }

    // Peek Stack 1
    int peek1()
    {
        if (top1 == -1)
        {
            cout << "Stack 1 is Empty" << endl;
            return -1;
        }

        return a[top1];
    }

    // Peek Stack 2
    int peek2()
    {
        if (top2 == size)
        {
            cout << "Stack 2 is Empty" << endl;
            return -1;
        }

        return a[top2];
    }

    // Check Stack 1 Empty
    bool isEmpty1()
    {
        return top1 == -1;
    }

    // Check Stack 2 Empty
    bool isEmpty2()
    {
        return top2 == size;
    }

    // Destructor
    ~Stack()
    {
        delete[] a;
    }
};

int main()
{
    Stack s1(5);

    s1.push1(10);
    s1.push1(20);

    s1.push2(100);
    s1.push2(200);

    cout << "Stack 1 Top: " << s1.peek1() << endl;
    cout << "Stack 2 Top: " << s1.peek2() << endl;

    cout << "Stack 1 Pop: " << s1.pop1() << endl;
    cout << "Stack 2 Pop: " << s1.pop2() << endl;

    cout << "Stack 1 Top: " << s1.peek1() << endl;
    cout << "Stack 2 Top: " << s1.peek2() << endl;

    return 0;
}