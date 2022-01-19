#include<bits/stdc++.h>
using namespace std;


void computeLPS(string ptr,int m,int *lps);

void KMP(string str,string ptr)
{
    int n=str.length();
    int m=ptr.length();

    int lps[m];     // longest prefix that is also suffix
                    // values for pattern


    computeLPS(ptr,m,lps);   // pre-processing the pattern (lps[])


    int i=0,j=0;
    
    while(i<n)      // loop till the length of Input string
    {
        if(ptr[j] == str[i]){
            j++;
            i++;   
        }

        if(j == m)
        {
            cout<<"found the pattern at index: "<<i-j<<endl;
            j=lps[j-1];
        }

        // mis-match after j-matches
        else if(i<n && ptr[j] != str[i]){
            if(j!=0)
                j=lps[j-1];
            else 
                i+=1;
        }
    }
}   

void computeLPS(string ptr,int m,int *lps)
{
    int len=0;
    lps[0]=0;

    int i=1;

    while(i<m)          // i=1 to m-1
    {
        if(ptr[i] == ptr[len])
        {
            len++;
            lps[i]=len;
            i++;
        }

        else{       // pat[i] != pat[len]
            if(len != 0)
            {
                len=lps[len-1];
            }

            else{
                lps[i]=0;
                i++;
            }
        }
    }
}

int main()
{
    string str,ptr;
    cout<<"Enter the string"<<endl;
    getline(cin,str);

    cout<<"Enter the pattern"<<endl;
    getline(cin,ptr);

    KMP(str,ptr);

    return 0;
}

/*
eg.
    str =ABABDABACDABABCABAB
    ptr =ABAB

*/