//Binary Search
#include<iostream>
using namespace std;
int main(){
int n,low,mid,high;
cout<<"How many integers you want to input: ";
cin>>n;

int arr[n];
cout<<"Input the integers: ";

for(int i=0;i<n;i++){

    cin>>arr[i];

}
int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

cout<<"SORTED ARRAY: ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int a;
cout<<"Input the integer you want to search: ";
cin>>a;

low = 0;
high=n;

mid = (low+high)/2;

while(low<=high){

    if(arr[mid]<a)
    {
        low = mid-1;
    }

    else if(arr[mid]==a){
        cout<<"The number is found in the array.";
        break;
    }
    else{
        high=mid-1;
        mid=(low+high)/2;
        }

}
   if(low>high){
    cout<<"The number is not found in the array.";
   }


}
