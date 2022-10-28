#include<iostream>
using namespace std;

int main()
{
    string str;
    int cnt=0;
    getline(cin,str);
    for(int i=0;str[i];i++)
    {
        if(str[i]!=' ')
            str[cnt++]=str[i];
    }
    cout<<str;
    return 0;
}
