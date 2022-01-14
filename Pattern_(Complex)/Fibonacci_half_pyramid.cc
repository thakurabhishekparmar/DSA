/*

1 
1 2
3 5 8
13 21 34 55
89 144 233 377 610

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    cout<<"---------------------"<<endl;

    int a=0;
    int b=1;
    int num;
    cout<<b<<endl;
    
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            num=a+b;
            cout<<num<<" ";
            a=b;
            b=num;  
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
