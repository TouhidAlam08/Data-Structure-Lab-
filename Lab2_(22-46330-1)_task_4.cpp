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
    cout<<"Which integer you want to check: ";
    cin>>b;
    for(int i=0;i<10;i++){

        if(arr[i]==b){
            counter++;
            continue;
        }
    }

    cout<<b<<" In the array is occuerd : "<<counter<<" times.";




}
