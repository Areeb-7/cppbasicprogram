#include<iostream>
using namespace std;
class Base
{
    public:
    int x;
    void getdata()
    {
        cout<<"Enter the value of x:-";
        cin>>x;

    }
};
class Derived1 :public Base
{
    public:
    int y;
    void readdata()
    {
        cout<<"Enter the value of y:-";
        cin>>y;
    }

};
class Derived2:public Derived1{
    private:
    int z;
    public:
    void indata()
    {
        cout<<"Enter the value of z:-";
        cin>>z;

    }
    void product()
    {
        cout<<"The product is "<<x*y*z;
    }
};
int main(){
    Derived2 d;
    d.getdata();
    d.readdata();
    d.indata();
    d.product();
    return 0;
}