#include<iostream>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"Enter String 1:";
    cin>>str1;
    cout<<"Enter String 2:";
    cin>>str2;
    if(str1.size()!=str2.size())
    {
        cout<<"Not anagrams";
        return 0;
    }
    int res=0;
    for(int i=0;i<str1.size();i++)
    {
        if(str1[i]>64&&str1[i]<91)
            str1[i]+=32;
        if(str2[i]>64&&str2[i]<91)
            str2[i]+=32;
        res^=(str1[i]^str2[i]);
    }

    if(res==0)
        cout<<"yes They are anagrams";
    else
        cout<<"No they are Not Anagrams";
    cout<<"\n";
    return 0;
}
