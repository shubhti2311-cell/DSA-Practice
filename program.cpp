#include <iostream>
using namespace std;
class num2;
class num1
{
    int num = 40;

public:
    friend int greaterNum(num1 s1, num2 s2);
};
class num2
{
    int num = 50;

public:
    friend int greaterNum(num1 s1, num2 s2);
};
int greaterNum(num1 s1, num2 s2){
    if (s1.num>s2.num)
    {
       return s1.num;
    }
    return s2.num;
    
}
int main()
{ 
num1 o1;
num2 o2;
cout<<greaterNum(o1,o2);
    return 0;
}