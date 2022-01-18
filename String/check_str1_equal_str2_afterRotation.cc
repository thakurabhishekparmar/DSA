#include<bits/stdc++.h>
using namespace std;

int find_Rotation(string str1,string str2)
{
    str1=str1+str1;
    
    if(str1.find(str2) == true)
        return 1;
    
    return 0;
}

int main()
{
    string str1,str2;
    cout<<"Enter the 1st string:"<<endl;
    getline(cin,str1);

    cout<<"Enter the 2nd string:"<<endl;
    getline(cin,str2);

    int ans=find_Rotation(str1,str2);
    cout<<ans;



    if(ans)
        cout<<"'" << str1 << "'" <<" & "<<"'"<< str2 << "'"<<" are equal after rotation"<<endl;
    
    else   
        cout<<"'" << str1 <<"'" <<" & "<< str2 <<"'"<<" are not equal after rotation"<<endl; 
}