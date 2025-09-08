//WAP to show the example of class to class type conversion
#include<iostream>
#include<cmath>
using namespace std;
class rectangle;
class polar{
    int r,angle;
    public:
    void input(){
        cout<<"Enter the value of r and angle : "<<endl;
        cin>>r>>angle;
    }
    int returnr(){
        return r;
    }
    int returna(){
        return angle ;

    }

};
class rectangle{
    float x,y,rand;
    public:
    rectangle(){
        x=0;
        y=0;
        rand=0;
    }
    
    rectangle(polar p){
        rand=(p.returna()*(3.14))/180;
        x=p.returnr()*cos(rand);
        y=p.returnr()*sin(rand);
    }
    void display(){
        cout<<"The value of x is : "<<x<<endl;
        cout<<"The value of y is : "<<y<<endl;
    }
};
int main(){
    polar p1;
    rectangle r1;
    p1.input();
    r1=p1;
    
    r1.display();
    return 0;
}