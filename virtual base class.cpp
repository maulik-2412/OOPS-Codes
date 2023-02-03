#include<iostream>
using namespace std;
class A{
public:
void show(){
 cout<<"Hello from A"<<endl;
}
};
class Containership{
 A a;
 public:
 Containership(){
     a.show();
 }
};
class B:public virtual A{
};
class C:public virtual A{
};
class D:public B,public C{
};
int main(){
        D d;
      d.show();
     return 0;
}
