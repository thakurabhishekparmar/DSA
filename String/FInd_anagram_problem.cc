/*
eg.
    str = "Graphic Era"
    txt = "pra"

    check whether the permuataion of ptr exists in 'str' or not ?
*/

#include<bits/stdc++.h>
using namespace std;

int isCountSame(int *count_txt,int *count_ptr)
{
    int i;
    for(i=0 ; i<256 ;i++)
    {
        if(count_ptr[i] != count_txt[i])    
            return 0;
    }
    return 1;
}

int findAnagram(string txt,string ptr)
{
    int i , count_txt[256]={0} , count_ptr[256]={0};
    
    int n=txt.length();
    int m=ptr.length();
    
    for(i=0 ; i<m ; i++)
    {
        count_ptr[ptr[i]]++;
        count_txt[txt[i]]++;
    }

    for(i=m ; i<=n; i++)
    {
        if(isCountSame(count_txt,count_ptr))
            return 1;

        count_txt[txt[i]]++;
        count_txt[txt[i-ptr.length()]]--;
    }
    return 0;
}

int main()
{
    string txt,ptr;
    
    cout<<"Enter the main string\n";
    getline(cin,txt);

    cout<<"Enter the text to check\n";
    getline(cin,ptr);

    int ans=findAnagram(txt,ptr);

    if(ans)
        cout<< "'" << ptr << "'" << " is Present in '"<<txt<<"' string" <<endl;
    
    else
        cout<< "'" << ptr <<"'" << " is not Present in '"<< txt <<"' string" <<endl;

    return 0;
}
