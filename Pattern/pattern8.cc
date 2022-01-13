/*

    1    
   2 2
  3   3
 4     4
5       5
 4     4
  3   3
   2 2
    1

*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c;
    cout<<"-----------------\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            c=(i*2)-1;
            cout<<i+1;
            if(c>0)
            {
                while(c>0)
                {
                    cout<<" ";
                    c--;
                }
                cout<<i+1;
                break;
            }
        }
        cout<<"\n";
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=n-i-1;j>0;j--)
        {
            c=(j-1)*2-1;
            cout<<j;
            if(c>0)
            {
                while(c>0)
                {
                    cout<<" ";
                    c--;
                }
                cout<<j;
                break;
            }
        }
        cout<<"\n";
    }
    
    return 0;
}