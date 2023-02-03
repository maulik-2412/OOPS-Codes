#include<iostream>
using namespace std;
class myClass{
    int a;
    public:
    myClass(){
        this->a=0;
    }
    myClass
(int a){
    this->a=a;
}
~myClass(){
}
void printClass(){
    cout<<"The vale is:"<<this->a<<endl;
}
void operator--(){
    a--;
}
void operator !(){
    a=-a;
}
myClass operator*(myClass object){
    myClass result;
    result.a=this->a*object.a;
    return result;

}
friend myClass operator +(myClass object1, myClass object2);
};
myClass operator +(myClass obj1, myClass obj2){
    myClass result;
    result.a=obj1.a+obj2.a;
    return result;
}
int main(){
    myClass x(10);
    myClass y(5);
    myClass z;
    x.printClass();
    cout<<endl;
    --x;
    x.printClass();
    cout<<endl;
    !x;
    x.printClass();
    cout<<endl;
    z=x*y;//z=x.multiply(y)
    x.printClass();
    y.printClass();
    z.printClass();
    cout<<endl;
    z=x+y;//z=x.add(y)
    x.printClass();
    y.printClass();
    z.printClass();
    cout<<endl;
    return 0;


}


    
