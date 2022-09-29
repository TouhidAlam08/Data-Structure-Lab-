#include<iostream>
using namespace std;

int main(){
int a,b;
cout<<"How many elements in first array: ";
cin>>a;
cout<<"Input the elements of first array: ";
int arrOne[a];
for(int i=0;i<a;i++){

    cin>>arrOne[i];
}
cout<<"How many elements in second array: ";
cin>>b;
int arrTwo[b];
cout<<"Input the elements of second array: ";
for(int i=0;i<b;i++){
    cin>>arrTwo[i];
}
cout<<"The common elements: ";
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        if(arrOne[i]==arrTwo[j]){
           cout<<arrOne[i]<<" ";
           break;
        }
    }
}


}
