#include<iostream>
using namespace std;
int main()
{
    int speed;
    cout<<"Enter the speed:-";
    cin>>speed;
    if(speed<=60)
    {
        cout<<"No violation\n";
    }
    else if(speed>60&&speed<=80)
    {
        cout<<"speeding\n";
    }
    else if(speed>80&&speed<=100)
    {
        cout<<"Reckless Driving\n";
    }
    else
    {
        cout<<"Your License Suspended\n";
    }
    return 0;
}