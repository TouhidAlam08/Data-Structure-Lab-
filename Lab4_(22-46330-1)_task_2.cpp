//linear search
#include<iostream>
using namespace std;

int main(){

int n,a;
cout<<"How many integers you want to input: ";
cin>>n;
int arr[n];
cout<<"Input the integers: ";
for(int i=0;i<n;i++ ){

    cin>>arr[i];
}

cout<<"Input the integer you want to search: ";
cin>>a;

for(int i=0;i<n;i++){

    if(arr[i]==a){

        cout<<"Integer found at "<<i+1<<" position.";
        return 0;

    }
}

cout<<"INTEGER NOT FOUND.";
return 0;

