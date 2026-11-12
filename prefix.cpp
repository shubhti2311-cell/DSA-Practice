#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Stack
{
    string arr[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(string x)
    {
        if (top == 99)
        {
            cout << "Stack Overflow";
            return;
        }

        arr[++top] = x;
    }

    string pop()
    {
        if (top == -1)
        {
            return "";
        }

        return arr[top--];
    }

    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    string prefix;
    cout << "Enter Prefix Expression: ";
    cin >> prefix;

    Stack st;

    for (int i = prefix.length() - 1; i >= 0; i--)
    {
        char ch = prefix[i];

        if (isalnum(ch))
        {
            st.push(string(1, ch));
        }
        else
        {
            string op1 = st.pop();
            string op2 = st.pop();

            string exp = "(" + op1 + ch + op2 + ")";

            st.push(exp);
        }
    }

    cout << "Infix Expression: " << st.pop();

    return 0;
}