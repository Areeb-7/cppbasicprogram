//Create a C++ program that implements a basic calculator. Use a class Calculator with methods to perform addition, subtraction, multiplication, and division of two numbers. The program should allow the user to input two numbers and select an operation to perform.
#include<iostream>
using namespace std;
class Calculator
{
    private:
    int a, b,n;
    public:
    void getData()
    {
        cout<<"Enter the number\n";
        cout<<"Number a:-";
        cin>>a;
        cout<<"Number b:-";
        cin>>b;
        start:
        cout<<"What do you want:\n"<<"1.Addition\n"<<"2.Subtraction\n"<<"3.Multiplication\n"<<"4.division\n"<<"5.Modulas";
        cin>>n;
        if(n==1)
        {
            cout<<a+b<<endl;
        }
        else if(n==2)
        {
            cout<<a-b<<endl;
        }
        else if(n==3)
        {
            cout<<a*b<<endl;
        }
        else if(n==4)
        {
            cout<<a/b<<endl;
        }
        else if(n==5)
        {
            cout<<a%b<<endl;
        }
        else
        {
            cout<<"Invalide input";
            goto start;
        }
    }
};
int main()
{
    Calculator c;
    c.getData();
    return 0;
}