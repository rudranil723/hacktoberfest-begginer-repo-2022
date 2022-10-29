#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	string t;
	t = s;
	reverse(t.begin(), t.end());
	
	if (s == t)
	cout<<"Palimdromic string";
	else
	cout<<"Not a palindromic string";
	
	return 0;
}
