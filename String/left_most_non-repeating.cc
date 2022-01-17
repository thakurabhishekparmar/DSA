#include<bits/stdc++.h>
using namespace std;

//      Approach 1:
/*
char leftMost_nonRepeat(string str)
{
    int count[256]={0};
    
    for(int i=0;i<str.length();i++)
        count[str[i]]++;
    
    for(int i=0;i<str.length();i++)
        if(count[str[i]] == 1)
            return str[i];

    return -1;
}
*/

//      Approach 2: In a one go only

int leftMost_nonRepeat(string str)
{
    int count[256], temp=INT_MAX;

    for(int i=0;i<256;i++)          
        count[i]=-1;
    
    for(int i=0;i<str.length();i++)           
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
            temp=min(temp,count[i]);
    }

    return (temp == INT_MAX) ? -1 : temp;
}

int main()
{
    string str;
    cout<<"Enter the string:\n";
    getline(cin,str);

    if(leftMost_nonRepeat(str) == -1 ){
        cout<<"Every character is repeating."<<endl;
        return 0;
    }

    cout<<"The index of left most non-repeated character is: ";
    cout<<"'"<<leftMost_nonRepeat(str)<<"'"<<endl;

    return 0;
}