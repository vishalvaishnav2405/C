#include<iostream>
#include<string>
using namespace std;

class Car {
    public:
    string brand;
    string model;
    int year;
};

int main(){
    Car myObj1;
    myObj1.brand="Mercedes ";
    myObj1.model=" Amg SLS ";
    myObj1.year= 2015;
    Car myObj2;
    myObj2.brand="Lamborgini ";
    myObj2.model=" Urus ";
    myObj2.year= 2018;
    cout<<myObj1.brand<<""<<myObj1.model<<""<<myObj1.year<<"\n";
    cout<<myObj2.brand<<""<<myObj2.model<<""<<myObj2.year<<"\n";
    return 0;
}    
    