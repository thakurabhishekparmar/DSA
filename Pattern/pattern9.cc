/*

E       E 
 D     D
  C   C
   B B
    A  
    
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c;
    char ch;
    cout<<"-----------------\n";

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }

        for(int j=n-i-1;j>=0;j--)
        {
            c=(j*2)-1;
            ch=(char)(j+65);
            cout<<ch;
            if(c>0)
            {
                while(c>0)
                {
                    cout<<" ";
                    c--;
                }
                cout<<ch;
                break;
            }
        }
        cout<<"\n";
    }
    return 0;
}
