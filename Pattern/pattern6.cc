/*

    1
   321
  54321
 7654321
987654321

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"-----------------\n";
    int c;
    for(int i=0;i<n;i++){
        c=i;

        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            c=(i*2)+1;
            while(c>0)
            {
                cout<<c;
                c--;
            }
            break;
        }
        cout<<"\n";
    }
    return 0;
}