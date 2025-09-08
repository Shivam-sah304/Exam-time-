#include<iostream>
using namespace std;
class Time{
    private:
    int h,m,sec;
    public:
    Time(){
        h=0;
        m=0;
        sec=0;  
    }
    Time(int h1,int m1,int sec1){
        h=h1;
        m=m1;
        sec=sec1;
    }
    Time add(Time t,Time t1){
        sec=t.sec+t1.sec;
        m=t.m+t1.m+sec/60;
        h=t.h+t1.h+m/60;
        sec=sec%60;
        m=m%60;

    }
    void display(){
        cout<<h<<":"<<m<<":"<<sec<<endl;
    }
};
int main(){
    Time t1(2,30,45),t2(3,40,50),t3;
    cout<<"Hii"<<endl;
    t3=t3.add(t1,t2);
    t3.display();
    return 0;
}
