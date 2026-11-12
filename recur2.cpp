#include <iostream>
#include <string.h>
using namespace std;
string reveseaString(string s,int i,int h){
    if(i>=h){
        return s ;
    }
  char temp;
  temp=s[i];
  s[i]=s[h];
  s[h]=temp;
    return reveseaString(s,i+1,h-1);
}
string remove(string s,char target,int i){
    if(s[i]=='/0'){
        return 0;
    }
    if (s[i]==target)
    {
        char f=s[i];
    //    delete f;
       return s;
    }
    
    return remove(s,target,i+1);
};
int main() {
    
    return 0;
}