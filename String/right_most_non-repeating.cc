#include<bits/stdc++.h>
using namespace std;

//      Approach 1: 
/*
char rightMost_nonRepeat(string str)
{
    int count[256]={0};
    int n=str.length();
    for(int i=0;i<n;i++)
        count[str[i]]++;
    
    for(int i=n-1;i>=0;i--)
        if(count[str[i]] == 1)
            return str[i];

    return -1;
}
*/

//      Approach : In a one go only 

int rightMost_nonRepeat(string str)
{
    int count[256], temp=INT_MIN;
    int n=str.length();
    for(int i=0;i<256;i++)
        count[i]=-1;
    
    for(int i=n-1;i>=0;i--)         
    {                                               
        if(count[str[i]] == -1)             
        {
            count[str[i]]=i;
        }
        
        else
            count[str[i]]=-2;
    }

    for(int i=0;i<256;i++)
    {
        if(count[i] >= 0)
            temp=max(temp,count[i]);
    }

    return (temp == INT_MAX) ? -1 : temp;
}

int main()
{
    string str;
    cout<<"Enter the string:\n";
    getline(cin,str);

    if(rightMost_nonRepeat(str) == -1 ){
        cout<<"Every character is repeating."<<endl;
        return 0;
    }

    cout<<"The index of right most non-repeated character is: ";
    cout<<"'"<<rightMost_nonRepeat(str)<<"'"<<endl;
}
