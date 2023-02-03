#include<iostream>
using namespace std;
 
class x;
 
class y
{
    int number;
    public:
    y(int x)
    {
        number=x;
    }
    void friend greatest(x a1,y b1);
};
 
class x
{
    int number;
    public:
    x(int x)
    {
        number=x;
    }
    void friend greatest(x a1,y b1);
};
 
void greatest(x a1,y b1)
{
    if(a1.number>b1.number)
    {
        cout<<"\n Greatest number is "<<a1.number;
    }
    else if(a1.number<b1.number)
    {
        cout<<"\n Greatest number is "<<b1.number;
    }
    else
    {
        cout<<"\n Number in both classes are equal";
    }
}
 
int main()
{
    
    int num;
 
    cout<<"\n\n Enter number for class x - ";
    cin>>num;
    x a1(num);
 
    cout<<"\n Enter number for class y - ";
    cin>>num;
    y b1(num);
 
    greatest(a1,b1);
    cout<<"\n";
 
    return 0;
}