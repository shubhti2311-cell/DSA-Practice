// #include <iostream>
// using namespace std;

// class Stack {
//     int arr[5];
//     int top;

// public:

//     Stack() {
//         top = -1;
//     }

//     // PUSH
//     void push(int x) {

//         if (top == 4) {
//             cout << "Stack Overflow\n";
//             return;
//         }

//         top++;
//         arr[top] = x;
//     }

//     // POP
//     void pop() {

//         if (top == -1) {
//             cout << "Stack Underflow\n";
//             return;
//         }

//         top--;
//     }

//     // TOP
//     int peek() {

//         if (top == -1) {
//             cout << "Stack is Empty\n";
//             return -1;
//         }

//         return arr[top];
//     }

//     // SIZE
//     int size() {
//         return top + 1;
//     }

//     // EMPTY
//     bool isEmpty() {
//         return top == -1;
//     }
// };

// int main() {

//     Stack st;

//     st.push(10);
//     st.push(20);
//     st.push(30);

//     cout << st.peek() << endl;
//     cout << st.size() << endl;

//     st.pop();

//     cout << st.peek() << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// template <typename T>
// class stack
// {
//     T a[5];
//     int top;

// public:
//     stack()
//     {
//         top = -1;
//     }

//     void push(T x)
//     {
//         if (top == 4)
//         {
//             cout << " Stack Overflow " << endl;
//             return;
//         }
//         top++;
//         a[top] == x;
//         return;
//     }
//     T pop()
//     {
//         if (top == -1)
//         {
//             cout << " Stack Underflow " << endl;
//         }

//         T pop = a[top];
//         top--;

//         return top;
//     }
//     T peek()
//     {
//         return a[top];
//     }
//     int Size()
//     {
//         return (top + 1);
//     }
//     bool isEmpty()
//     {
//         return top == -1;
//     }
// };
// int main()
// {
//     stack<int> a;
//     int x;
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> x;
//         a.push(x);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         a.pop();
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack {
    Node* top;

public:

    Stack() {
        top = nullptr;
    }

    void push(int x) {

        Node* temp = new Node(x);

        temp->next = top;
        top = temp;
    }

    void pop() {

        if (top == nullptr) {
            cout << "Stack Underflow\n";
            return;
        }

        Node* temp = top;
        top = top->next;

        delete temp;
    }

    int peek() {

        if (top == nullptr)
            return -1;

        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};