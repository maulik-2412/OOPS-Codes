#include <iostream>
using namespace std;
class A{
    int a;
    public:
    A(int x){a=x;cout<<"A is constructed\n";}
    void show_a(){cout<<"b="<<a<<endl;}
};
class B{
    int b;
    public:
    B(int x){b=x;cout<<"B is constructed\n";}
    void show_b(){cout<<"b="<<b<<endl;}
};
class C:public B,public A{
    int c,d;
    public:
    C(int w,int x,int y,int z):A(x),B(y){c=x;d=y;cout<<"C is constructed\n";}
    void show_cd(){cout<<"c="<<c<<", d="<<d<<endl;}
};
class D:public B,virtual public A{
    int e,f;
    public:
    D(int w,int x,int y,int z):A(x),B(y){e=x;f=y;cout<<"D is constructed\n";}
    void show_ef(){cout<<"e="<<e<<", f="<<f<<endl;}
};
int main(){
    C o1(10,20,30,40);
    o1.show_a();o1.show_b();o1.show_cd();
    D o2(50,60,70,80);
    o2.show_a();o2.show_b();o2.show_ef();
    return 0;
}   
