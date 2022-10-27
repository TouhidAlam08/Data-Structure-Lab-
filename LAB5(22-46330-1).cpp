#include<iostream>
using namespace std;

int stackk[100],n=100, top=-1;

void push(int val){

     top++;
     stackk[top]=val;

}

void pop(){

   cout<<"The popped element is: "<<stackk[top]<<endl;
    top--;
}


bool isEmpty(){

     if(top==-1){
        cout<<"The stack is empty."<<endl;
     }
     else{
        cout<<"The stack is not empty."<<endl;
     }

}

bool isFull(){

    if(top==n){
        cout<<"The stack is full."<<endl;
    }
    else{
        cout<<"The stack is not full."<<endl;
    }

}

void display(){
     cout<<"The stack elements are: ";
     for(int i=top;i>=0;i--){
        cout<<stackk[i]<<" ";
     }
     cout<<endl;

}

void showTop(){

      cout<<"The top element is: "<<stackk[top]<<endl;
}

int main(){

 isEmpty();
 push(1);
 push(3);
 push(4);
 pop();
 push(2);
 showTop();
 display();
 pop();
 isFull();
 isEmpty();
 push(2);





return 0;


}

