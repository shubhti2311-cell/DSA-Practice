#include <iostream>
#include<list>
using namespace std;
class stack{
    list<int> l1;
    public:
   void push(int x){
    l1.push_front(x);
   }
   void pop(){
     l1.pop_front();
   }
int top(){
    return l1.front();
}
int size(){
    return l1.size();
}
};

int main() {
    stack m1;
    int n,x;
    cout<<"enter the number of element you have in stack "<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    { cout<<"enter the number "<<i+1<<endl;
       cin>>x;
       m1.push(x);
    }
    for (int  i = 0; i < n; i++)
    {cout<<m1.top()<<" ";
        m1.pop();
    
    }
  
    
    return 0;
}