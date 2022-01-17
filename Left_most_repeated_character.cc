#include<bits/stdc++.h>
using namespace std;


//             Approach 1 : by counting


// char leftMost_Repeat(string str)
// {
//     int count[256]={0};
//     for(int i=0;i<str.length();i++)
//         count[str[i]]++;

//     for(int i=0;i<str.length();i++)
//     {
//         if(count[str[i]] > 1)
//             return str[i];
//     }
//     return -1;
// }


//      Another approach : in one pass go

char leftMost_Repeat(string str)
{
    int count[256], temp=INT_MAX;

    for(int i=0;i<256;i++)
        count[i]=-1;

    for(int i=0;i<str.length();i++)
    {
        if(count[str[i]] == -1)
            count[str[i]]=i;
        
        else
            temp=min(temp,count[str[i]]);
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

    cout<<"The left most repeated character is: ";
    cout<<"'"<<leftMost_Repeat(str)<<"'"<<endl;

    return 0;
}