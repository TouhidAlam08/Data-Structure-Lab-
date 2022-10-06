#include<iostream>
using namespace std;

int main()
{

    int a,b;
    cout<<"How many row in the matrix: ";
    cin>>a;
    cout<<"How many column in the matrix: ";
    cin>>b;

    int mat[a][b];
    int trans[b][a];
    cout<<"Input the values: "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<"Input the "<<i+1<<" of first row: ";
        for(int j=0;j<b;j++){
            cin>>mat[i][j];

        }
    }
    cout<<"The matrix: "<<endl;

        for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++){
            cout<<mat[i][j]<<" ";

        }
        cout<<endl;
    }

    cout<<"The output in reverse order: "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){

            trans[j][i]=mat[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){

            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
}

}
