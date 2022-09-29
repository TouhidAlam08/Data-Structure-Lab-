#include<iostream>
using namespace std;
int main()
{
     int a,b;

     cout<<"How many elements are in the first array: ";
    cin>>a;
    int arrOne[a];
    cout<<"Input the elements of the first array: ";
    for(int i=0;i<a;i++)
    {
        cin>>arrOne[i];
    }
    cout<<"How many elements are in the second array: ";
    cin>>b;
    int arrTwo[b];
        cout<<"Input the elements of the second array: ";
    for(int i=0;i<b;i++)
    {
        cin>>arrTwo[i];
    }
    int i,j;
     bool temp=false;



   for( i=0;i<a;i++)
    {
        for( j=0;j<b;j++)
        {
            if(arrOne[i]==arrTwo[j])
            {
                temp=true;
                break;
            }
            else if(arrOne[i]!=arrTwo[j])
            {
                temp=false;
                continue;
            }
        }
        if(temp==false)
        {
            cout<<arrOne[i]<<" ";
        }



   }




        for( i=0;i<b;i++)
        {
        for( j=0;j<a;j++)
        {
            if(arrOne[i]==arrTwo[j])
            {
                temp=true;
                break;
            }
            else if(arrTwo[i]!=arrOne[j])
            {
                temp=false;
                continue;
            }
        }
        if(temp==false)
        {
            cout<<arrTwo[i]<<" ";
        }



   }



    }
