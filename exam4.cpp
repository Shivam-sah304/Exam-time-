//WAP to show example of function overloading
#include<iostream>
using  namespace std;

int add(int a,int b){
    return(a+b);
}
int add(int a,int b, int c){
    return(a+b+c);

}
int add(float a, float b ){
    return(a+b);
}
int main(){
    int a,b,c;
    float e,f;
    cout<<"Enter three integer value : "<<endl;
    cin>>a>>b>>c;
    cout<<"The sum of first and last number is : "<<add(a,c)<<endl;
    cout<<"The sum of all integer is : "<<add(a,b,c)<<endl;
    cout<<"Enter the value two float : "<<endl;
    cin>>e>>f;
    cout<<"The sum of the float is : "<<add(e,f)<<endl;
    return 0;



}
