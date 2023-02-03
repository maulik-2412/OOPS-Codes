#include<iostream>
using namespace std;
class A{
public:
void show(){
    cout<<"Program for implementing Containership:"<<endl;
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
int main(){
     Containership x;
     return 0;
}
