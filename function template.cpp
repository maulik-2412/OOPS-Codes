#include<iostream>
using namespace std;
template <class T>
inline T square (T x)
{
   T result;
   result =x*x;
   return result;
}
int main()
{
   int i,I;
   float x,X;
   double y,Y;
   cout<<"Enter an integer value : ";
   cin>>i;
   cout<<"Enter a float value : ";
   cin>>x;
   cout<<"Enter a double value : ";
   cin>>y;
   I = square <int> (i);
   cout<<"Square of "<<i<<" is : "<<I<<endl;
   X = square <float>(x);
   cout<<"Square of "<<x<<" is : "<<X<<endl;
   Y = square <double>(y);
   cout<<"Square of "<<y<<" is : "<<Y<<endl;
   return 0;
}
