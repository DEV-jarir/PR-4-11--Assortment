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
    int largest=a[0][0];
    for(int i=0;i<row;i++)
    { 
        for(int j=0;j<col;j++)
        {
            if (largest<a[i][j])
            {
                largest=a[i][j];
            }
        }
    }
    cout<<"The largest number of array is:"<<largest;
    return 0;
}