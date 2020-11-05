#include <iostream>

using namespace std;

int main() {
    int n,o,p;
    cout<<"enter the first number : ";
    cin>>n;
    cout<<"enter the second number : ";
    cin>>o;
    cout<<"enter the third number : ";
    cin>>p;
    
    if((n>o && n>p))
      cout<<"largest nomber : "<<n;
      
      else if ((o>n && o>p))
       cout<<"largest number : "<<o;
       
       else
       cout<<"largest number : "<<p;
    
       
    return 0;   
}