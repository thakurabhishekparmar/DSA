#include<bits/stdc++.h>
using namespace std;

int anagram(string str1,string str2)
{
    int n=str1.length();
    int m=str2.length();
    if(n != m)
        return 0;

    int count[256]={0};

    for(int i=0;i<n;i++)
        count[str1[i]]++;

    for(int i=0;i<m;i++)
        count[str2[i]]--;

    for(int i=0;i<256;i++){
        if(count[i]!=0)
            return 0;
    }
    return 1;
}

int main()
{
    string str1,str2;
    cout<<"Enter the 1st string:\n";
    getline(cin,str1);

    cout<<"Enter the 2nd string:\n";
    getline(cin,str2);

    int res=anagram(str1,str2);

    if(res)
        cout<<"Given strings are Anagram"<<endl;
    else 
        cout<<"Given strings are not Anagram"<<endl;

    return 0;
}
