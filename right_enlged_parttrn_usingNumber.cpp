#include<iostream>
using namespace std;

void pattern(int n){

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<" ";
        }

        for(int j=0;j>2*i+1;j++)
        {
            cout<<"🌺";
        }
         for( int j=0;j<=n-i-1;j++)
        {
            cout<<" ";
        }
    }
}
int main(){

    int t,n;

    cout<<"Enter the number of triangle you want print\n";
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cout<<"enter the number of row in pattern\n";
        cin>>n;

        pattern(n);

      
    }


    return 0;
}