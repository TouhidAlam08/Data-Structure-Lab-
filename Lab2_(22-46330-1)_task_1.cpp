#include<iostream>
using namespace std;
int main()
{
    int arrOne[50], arrTwo[50], arrMerge[100];
	int sizeOne, sizeTwo,i;
    cout<<"Enter the Size for First Array: ";
    cin>>sizeOne;
    cout<<"Enter Elements for First Array: ";
    for( i=0; i<sizeOne; i++)
    {
        cin>>arrOne[i];
        arrMerge[i] = arrOne[i];
    }
    int k;
     k = i;
    cout<<"Enter the Size of Second Array: ";
    cin>>sizeTwo;
    cout<<"Enter Elements of Second Array: ";
    for(int i=0; i<sizeTwo; i++)
    {
        cin>>arrTwo[i];
        arrMerge[k] = arrTwo[i];
        k++;
    }
    cout<<"The New Array in merge order: ";
    for(i=k-1; i>=0; i--)
        cout<<arrMerge[i]<<" ";
    cout<<endl;
    return 0;
}
