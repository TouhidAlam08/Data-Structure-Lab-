#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"How many number you  want to enter?: "<<endl;
    cin>>num;
    int arr[num];
    cout<<"Enter the number: ";

    for(int i =0;i<num;i++){

        cin>>arr[i];
    }
cout<<"Number in sequence: ";
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Number in reverse order: ";

for(int i = num-1;i>=0;i--){
    cout<<arr[i]<<" ";
}


return 0;
}
