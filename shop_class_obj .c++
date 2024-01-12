#include<iostream>
using namespace std;
class Shop
{
    private:
    int id;
    string name;
    float price;
    int quantity;
    public:
    Product(string n,int i,float p,int qty)
    {
        id=i;
        name=n;
        price=p;
        quantity=qty;
        cout<<"Product name:-"<<name<<"\n"<<"Product ID:-"<<id<<"\n"<<"Product price:-"<<"₹"<<price<<"\n"<<"product quantity:-"<<quantity<<endl<<endl;
    }
    
};
int main()
{
    Shop p1("Puma",4256621,4000,12),p2("Air Jordern 1",6554298,600000,31),p3("Addidas",7680900,7000,23);
    return 0;
   
}