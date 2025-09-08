//Wap showing example of inline function
#include <iostream>
using namespace std;
const float pi=3.14;
//here we are using inline keyword in inline function
inline void area(float r){
    float a=pi*r*r;
    cout<<"The area of the circle is : "<<a<<endl;
    
}
int main(){
    int r;
    cout<<"Enter the value of the radius of circle : "<<endl;
    cin>>r;
    area(r);
    return 0;
}

