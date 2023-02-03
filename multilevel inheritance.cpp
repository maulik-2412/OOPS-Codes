#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class C;
class F;
class G
{
    private:
    int a;
    public:
    void getdata();
    void showdata();
};
class F:public G{
    private:
    int b;
    public:
};
class C: public F
{
    private:
    int c;
};
void G::getdata(){
    cin>>a;
    
}
void G::showdata(){
    cout<<a;
    return;
}
int main(){
    system("cls");
    G l;
    F m;
    C o;
    l.getdata();
    l.showdata();
    m.getdata();
    m.showdata();
    o.getdata();
    o.showdata();
    getch();
    return 0;
}


