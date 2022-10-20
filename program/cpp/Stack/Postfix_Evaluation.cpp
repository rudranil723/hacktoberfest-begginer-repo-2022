#include<bits/stdc++.h>
/*#include<iostream>
#include <stack>*/
using namespace std;
int main()
{
    int i=0,x,a,b,c;
    char input [100];
    stack<int> s1;
    cout<<"Enter a valid postfix expression: "<<endl;
    cin>>input;
    while(input[i]!='\0')
    {
        if(input[i]>='0' && input[i]<='9')
        {
          x=input[i]-'0';
          s1.push(x);
        }
        else if(input[i]=='+' || input[i]=='+' ||input[i]=='-' || input[i]=='*' ||input[i]=='/' ||input[i]=='%')
        {
            a=s1.top();
            s1.pop();
            b=s1.top();
            s1.pop();
            switch(input[i])
            {
                case '+': c=b+a;
                         s1.push(c);
                         break;
                 case '-': c=b-a;
                         s1.push(c);
                        break;
                        case '*': c=b*a;
                         s1.push(c);
                         break;
                 case '/': c=b/a;
                         s1.push(c);
                        break;
                        case '%': c=b%a;
                         s1.push(c);
                         break;
            
            }
        }
        i++;
    }
    cout<<"Ans="<<s1.top()<<endl;
}