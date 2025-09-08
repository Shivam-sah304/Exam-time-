#include<iostream>
using namespace std;
class length2;

class Length1{

    private:
    int m,cm;
    public:
    void input(){
        cout<<"Enter the value of meter and centimeter:"<<endl;
        cin>>m>>cm;


    }
    friend void add(Length1 t, length2 t1);

};
class length2{

    private:
    int m,cm;
    public:
    void input(){
        cout<<"Enter the value of meter and centimeter:"<<endl;
        cin>>m>>cm;


    }
    friend void add(Length1 t, length2 t1);

};
void add(Length1 t, length2 t1){
    int m1,cm1;
    cm1=t.cm+t1.cm;
    m1=t.m+t1.m+cm1/100;
    cm1=cm1%100;
    cout<<"The Meter is M : "<<m1<<endl;
    cout<<"The centimeter is cm : "<<cm1<<endl;

}
int main(){
    Length1 l;
    l.input();
    length2 l1;
    l1.input();
    add(l,l1);
    return 0;


}