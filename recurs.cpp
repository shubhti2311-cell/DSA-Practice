#include <iostream>
using namespace std;
// int sum(int n){if (n==0)
// {
//     return 0;
// }
// return n+sum(n-1);
// };
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * power(x, n - 1);
};
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
        return 1;

    return fibo(n - 1) + fibo(n - 2);
};

int digi(int n)
{
    if (n == 0)
    {
        return 0;
    }

    // return n%10+digi(n/10);
    return 1 + digi(n / 10);
}
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 10 + sum(n / 10);
};
int reverse(int n,int rev=0)
{
    
int original=n;
    if (n==0)
    {
       if (rev==original)
       {
        return true;
       }else{
        return false;
       }
       
    }
     rev=rev*10+n%10;
   
    reverse(n/10,rev)  ;
}
int main()
{
    // cout << "the sum " << sum(3) << endl;
    // cout << power(2, 5) << endl;
    // cout << power(3, 3) << endl;
    // cout << "The Sum of digits of 21345 is " << sum(21345);
    cout<<"the reverse of 1234 is "<<reverse(1234);
    return 0;
}



