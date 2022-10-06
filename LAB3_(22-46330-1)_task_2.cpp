#include<iostream>
#include<string.h>
using namespace std;

int main(){
int a;
char msg[100],ch;
cout<<"Enter the message(only small letters): ";
cin.getline(msg,100);
cout<<"How many letter you want to increase: ";
cin>>a;

for(int i=0;msg[i]!='\0';i=i+2){

    ch=msg[i];
    if(ch>='a'&& ch<'z'){
        ch=ch+a;
        msg[i]=ch;

    }

}
cout<<"Encrypted message: " <<msg;
}
