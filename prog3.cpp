#include<iostream>
using namespace std;

int main()
{
    int row,col;

    cout<<"Enter array row:";
    cin>>row;
    cout<<"Enter array col:";
    cin>>col;
    int a[row][col];
    for(int i=0;i<row;i++)
    {
       for(int j=0;j<col;j++)
       {
        cout<<"Elements of array["<<i<<"]["<<j<<"] : ";
        cin>>a[i][j];
       }
    }

    for(int i=0;i<row;i++)
    {
       for(int j=0;j<col;j++)
       {
        cout<<a[i][j]<<" ";
       }
       cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<row;i++)
    {
       for(int j=0;j<col;j++)
       {
        cout<<a[j][i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}