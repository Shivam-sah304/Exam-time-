//WAP to convert class data into basic data
#include<iostream>
using namespace std;
class Convert{
    int hour;
    public:
    void input(){
        cout<<"Enter the value of hour : "<<endl;
        cin>>hour;

    }
    operator int(){
        int min=hour*60;

    }
};
int main(){
    Convert c;
    c.input();
    int min;
    min=c;
    cout<<"The equivalent value of minute is : "<<min<<endl;
    return 0;
    

}