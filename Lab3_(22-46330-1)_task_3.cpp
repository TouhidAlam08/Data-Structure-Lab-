#include<iostream>
using namespace std;


struct Employee{

   string id;
   string deptname;
   int sal;
   int joinyear;

};

int main(){

int a=10;

Employee info[a];

for(int i=0;i<a;i++){
    cout<<"INFO OF NUMBER "<<i+1<<" EMPLOYEE: "<<endl;
    cout<<"Enter the ID: ";
    cin>>info[i].id;
    cout<<"Enter the Dept Name: ";
    cin>>info[i].deptname;
    cout<<"Enter the salary: "  ;
    cin>>info[i].sal;
    cout<<"Enter the joining year: ";
    cin>>info[i].joinyear;

}
cout<<"Employees id with salary more than 20000 and joining year before 2009: "<<endl;
for(int i=0;i<a;i++){
    if(info[i].sal>20000 && info[i].joinyear<2009){
    cout<<info[i].id<<endl;

}
}
}







