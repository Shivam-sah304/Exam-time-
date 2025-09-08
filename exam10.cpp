//WAP to convert base to class type
#include<iostream>
using namespace std;
class Conversion{
    float m;
    public:
    Conversion(){
        m=0;

    }
    Conversion(float cm){
        m=cm/100;

    }
    void display(){
        cout<<"The equivalent value in m is "<<m<<endl;

    }

};
int main(){
    float cm;
    cout<<"Enter the value of cm "<<endl;
    cin>>cm;
    Conversion c1;
    c1=cm;
    c1.display();
    return 0;
    
}