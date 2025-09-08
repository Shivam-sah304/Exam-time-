/* WAP to increment the value of t by one by using uniary operator overloading - */
#include<iostream>
using namespace std;
class add{
    int n;//its default private 
    public:
    void input(){
        cout<<"enter the value of  n : "<<endl;
        cin>>n;

    }
    void  operator --(){
          n=n+1;

    }
     void operator --(int ){
        n=n-1;

    }
    void display(){
        cout<<"The updated value of n is "<<n<<endl;

    }
    

};
int main(){
    add a,a1;
    a.input();
    a--;
    a.display();
    a1.input();
    --a1;
    a1.display();
    return 0;

}