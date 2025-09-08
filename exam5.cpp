/* WAP to find area and perimeter  using pass by reference */

#include<iostream>
using namespace std;
void area(int & l,int &b,int &a,int &p){
    p=2*(l+b);
    a=l*b;

}
int main(){
    int l,b,a,p;
    cout<<"Enter the vlaue of length and breath of rectangle : "<<endl;
    cin>>l>>b;
    area(l,b,a,p);
    cout<<"The area of the rectangle is : "<<a<<endl;
    cout<<"The perimeter of the rectangle is : "<<p<<endl;
    return 0;

}

