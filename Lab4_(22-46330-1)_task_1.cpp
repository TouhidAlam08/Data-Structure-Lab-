//bubble sort
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp;
    cout<<"How many integers you want to input: ";
    cin>>n;
    int arr[n];
    cout<<"Input the integers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"The sorted array: ";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
