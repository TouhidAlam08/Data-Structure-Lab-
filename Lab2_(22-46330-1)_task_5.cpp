#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Input the 10 elements of the array: ";
    for(int i=0;i<10;i++){
        cin>>arr[i];

    }

    int b;
    int counter=0;
   for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){

        if(arr[i]==arr[j]){
            counter++;

        }

    }
             cout<<arr[i]<<" In the array is occuerd : "<<counter<<" times."<<endl;
             counter =0;
   }




return 0;

}
