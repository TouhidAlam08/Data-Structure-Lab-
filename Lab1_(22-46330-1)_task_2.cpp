#include<iostream>
using namespace std;

int main()
{
     int num;
     cout<<"How many number you want to input ? : ";
     cin>>num;
     int arr[num];
     cout<<"Input the numbers : ";
     int i;
     for(i=0;i<num;i++){
        cin>>arr[i];
     }
    cout<<endl;

    for(i=0;i<num;i++){

        if(arr[i]%2==0){
            cout<<arr[i]<<" is an even number."<<endl;
        }
        else cout<<arr[i]<<" is an odd number."<<endl;
    }

    return 0;
}

