#include<iostream>
using namespace std;
int main()
{
    int m,n,sum=0;
    cout<<"Enter the starting range number:-";
    cin>>m;
    cout<<"Enter the ending range number:-";
    cin>>n;
    for(int i=m;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;

        }
    }
    cout<<sum<<endl;
    return 0;
}