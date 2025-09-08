//WAP to showing referance by referance 
#include<iostream>
using namespace std;
int &max(int &x,int &y){
    if(x>y)
{
    return(x);
}
else {
    return(y);
}
}
int main(){
    int x,y;
    cout<<"Enter the vlaue of x and y :"<<endl;
    cin>>x>>y;
    max(x,y)=-3;
    cout<<"The value of x is : "<<x<<endl;
    cout<<"The value of y is : "<<y<<endl;
    return 0;
}