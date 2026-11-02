#include <iostream>
using namespace std;
bool powerof2(int n){

    if (n<1)
    {
       return true;
    }
    
    if (n%2!=0)
    {
        return false;
    }
   return powerof2(n/2);
}
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n==0)
        {
            return true;
        }
        
        if(n==1){
            return true;
        }
        if(n%2!=0){
            return false;
        
        }
        return isPowerOfTwo(n/2);
       
};};
int main() {
    cout<<powerof2(6);
    return 0;
}