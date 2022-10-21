#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    
    string longestCommonPrefix (string a[], int n)
    {
        // your code here
        string mx_s = "";
        for (int i=0 ; i<n ;i++)
        {
            if (a[i].size()>mx_s.size())
            mx_s = a[i];
        }
        
        int ans = 0;
        bool flag = true;
        for (int i=0 ;i<mx_s.size() ;i++)
        {
            int ch = mx_s[i];
            for (int j=0 ;j<n ;j++)
            {
                if (i>=a[j].size() || ch!=a[j][i])
                {
                    flag = false;
                    break;
                }
            }
            if (!flag)
            {
                break;
            }else
            {
                ans++;
            }
        }
        
        if (ans==0)
        return "-1";
        else
        return mx_s.substr(0,ans);
    }
};


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}
