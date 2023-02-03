#include<iostream>
using namespace std;
class base {
public:
    virtual void print()
    {
        cout << "print base class"<<endl;
    }
    void show()
    {
        cout << "show base class"<<endl;
    }
};
class Derived:public base{
public:
void print(){
    cout<<"Print derived class"<<endl;
}
void show()
    {
        cout << "show derived class"<<endl;
  }
};
int main(){
    base *ptr;
    Derived d;
    ptr=&d;
    ptr->print();
    cout<<"Virtual function will be called here"<<endl;
    ptr->show();
    return 0;
}
