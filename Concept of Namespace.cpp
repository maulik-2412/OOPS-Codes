#include<iostream> using namespace std; 
namespace CSE{ 
    int a=6;     void display(){ 
        cout<<"USING NAMESPACE"<<endl; 
    } 
} int main(){     using namespace CSE;     cout<<a<<endl; 
    display();     return 0; 
} 
