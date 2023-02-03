#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void read(string fname){
    char line[50];
    ifstream fin;
    fin.open(fname);
    while(fin){
       fin.getline(line,50);
       cout<<line <<endl;
    }
    fin.close();
    cout<<"File read!\n";
}
void write(string fname, string name, int age, string gender, int height, int weight)
{
   ofstream fout;
   fout.open(fname);
   fout<<"Name: "<<name<<"\n";
   fout<<"Age: "<<age<<"\n";
   fout<<"Gender: "<<gender<<"\n";
   fout<<"Height: "<<height<<"\n";
   fout<<"Weight: "<<weight<<"\n";
   fout.close();
   cout<<"File written!\n";
}
int main() {
   string name,gender;
     string fname="student";
     cout<<"Enter the name of student: ";
     cin>>name;
     cout<<"Enter the gender: ";
     cin>>gender;
     int age,height,weight;
     cout<<"Enter the age of the student: ";
     cin>>age;
    cout<<"Enter the height of the student: ";
     cin>>height;
     cout<<"Enter the weight of the student: ";
     cin>>weight;
     write(fname,name,age,gender,height,weight);
     read(fname);
     return 0;
}
