#include<iostream>
using namespace std;

void reverse_order(int n)
{
    if(n==0)
        return;
        
    cout<<n<<" ";               
    reverse_order(n-1);        
}

int main()
{
    int n;
    cin>>n;             // No of natural elements you wants to print in reverse_order
    
    reverse_order(n);
    return 0;
}