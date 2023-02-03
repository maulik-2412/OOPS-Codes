#include <iostream>
using namespace std;
class test{
int a,b;
public:
test(int x,int y){
a=x;
b=y;
cout<<("Enter first number:");
cin>>a;
cout<<("Enter second number:");
cin>>b;
}

void greater(){
if(a>b){
cout<<"A is greater\n";
}
else
cout<<"B is greater\n";
}
~test(){
cout<<"Destructor executed";
}
};
int main() {
int x,y;
test q(x,y);
q.greater();
return 0;
}
