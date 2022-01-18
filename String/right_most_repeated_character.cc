#include<bits/stdc++.h>
using namespace std;


char leftMost_Repeat(string str)
{
    int count[256], temp=INT_MIN;
    int n=str.length();

    for(int i=0;i<256;i++)
        count[i]=-1;

    for(int i=n-1;i>=0;i--)
    {
        if(count[str[i]] == -1)
            count[str[i]]=i;
        
        else
            temp=max(temp,count[str[i]]);
    }

    if(temp == INT_MAX)
        return -1;
    
    else
        return str[temp];
}

int main()
{
    string str;
    cout<<"Enter the string:\n";
    getline(cin,str);

    cout<<"The right most repeated character is: ";
    cout<<"'"<<leftMost_Repeat(str)<<"'"<<endl;

    return 0;
}
