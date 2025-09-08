#include<iostream>
using namespace std;
class Length{
    private:
    int meter,cm;
    int calc;
    public:
    Length(){
        meter=0;
        cm=0;  
    }
    Length(int m1,int cm1){
        meter=m1;
        cm=cm1;
    }
    void cal(){
        calc=meter*100+cm;

    }
    int operator >(Length L){
        if(calc>L.calc ?  1 : 0);


    }
    void display(){
        cout<<meter<<"m "<<cm<<"cm"<<endl;

    }
};
int main(){
    Length l1(21,34),l2(3,4);
    l1.cal();
    l2.cal();
    if(l1>l2){
        cout<<"l1 is greater than l2"<<endl;
        l1.display();
    }
    else{
        cout<<"l2 is greater than l1"<<endl;
        l2.display();
    }
}