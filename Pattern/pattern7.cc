/*
5
54
543
5432
54321
543210
54321
5432
543
54
5
*/




#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"-----------------\n";
    int c;
    for(int i=0;i<=n;i++)
    {
        c=n;
        for(int j=0;j<=i;j++)
        {
            cout<<c--;
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}