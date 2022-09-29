#include<iostream>
using namespace std;

void odd(int a,int b){

   int x;
   cout<<"How many number you want to check: ";
   cin>>x;
   cout<<endl;
   cout<<"Enter the Numbers: ";
   int arr[x];
   for(int i=0;i<x;i++){
    cin>>arr[i];
   }
   cout<<endl;
   cout<<"The odd Numbers: "<<endl;
   for(int j=0;j<x;j++){
    for(int i = a;i<b;i++){
        if(i%2!=0 && arr[j]==i){
            cout<<i<<" ";
        }
    }
   }

}

int main(){
   int a,n;
   cout<<"Enter the first and last number of the range: ";
   cin>>a>>n;
   cout<<endl;
   odd(a,n);
}
