#include <iostream>
#include <exception>
using namespace std;
class Zero_Exception:public exception{
    public:
        const char* what()
        const throw(){return "Attempted to divide by 0\n";}
};
int main(){
    try{
        int x,y;
        cout<<"Enter 2 numbers: ";
        cin>>x>>y;
        if (y==0){Zero_Exception Z; throw Z;}
        else cout<<"x/y="<<x/y<<endl;
    }
    catch(Zero_Exception err) cout<<err.what();
    return 0;
}         