/*

1   1    
 2 2
  3
 4 4
5   5

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c,a=n;

    cout<<"-----------------\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || ((i+j)==n-1))
                cout<<i+1;
            
            else
                cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}