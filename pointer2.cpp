#include <iostream>
using namespace std;
void movezeros(int a[], int n)
{
    int first = 0, sec = 1, temp;
    while (sec != n )
    {
       
        if (a[first]==0)
        {
            temp = a[first];
            a[first] = a[sec];
            a[sec] = temp;
             first++;
             sec++;
        }
        else if(a[first]==0&& a[sec]==0){
           sec++;

        }
        
        
       
    }
    int i = 0;
    while (i != n)
    {
        cout << a[i] << " ";
        i++;
    }
}

int main()
{
    int n = 5;
    int b[n] ={1, 2, 0, 3, 0};
    movezeros(b, n);
    return 0;
}