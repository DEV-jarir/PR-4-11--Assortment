#include<iostream>
using namespace std;

int main() 
{
    int n ;
    cout<<"Enter array size:";
    cin>>n;
    int a[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cout<<"Elements of array["<<i<<"] : ";
        cin>>a[i];
    }
    cout<<"Nagetive number of array :";
    for(int i=0;i<n;i++)
    {
        if(a[i]<0){
            cout<<a[i];
        }
    }
    return 0;
}