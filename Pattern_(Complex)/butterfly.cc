/*

1     7
12   67
123 567
1234567
123 567
12   67
1     7
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"---------------------\n";

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j+1;
        }

        for(int k=0; k < 2*(n-1-i)-1; k++)
        {
            cout<<" ";
        }

        for(int j=0;j<=i;j++)
        {
            cout <<((2*n-1)-i+j);
        }
        cout<<endl;
    }

    for(int i=0;i<2*n-1;i++)
    {
        cout<<i+1;
    }
    cout<<endl;
    int temp=1;
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        
        for(int k=0; k<(2*temp-1) ; k++)
        {
            cout<<" ";
        }
        
        for(int j=0;j<=i;j++)
        {
            cout <<((2*n-1)-i+j);
        }
        temp++;
        cout<<endl;
    }
    return 0;
}

