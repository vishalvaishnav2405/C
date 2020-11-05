#include <iostream>

using namespace std;

int main() {
    int n,r;
    cout<<"Enter the number : ";
    cin>> n;
    r=n%2;
    if(r==0)
    cout<<n<<" is the number is even";
    else
    cout<<n<<" is the number is odd";
    return 0;
}    
