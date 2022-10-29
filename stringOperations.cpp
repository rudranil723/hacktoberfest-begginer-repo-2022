#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string x;
    // cin >> x;
    // cout << x << endl;

    // // declare using size and specified char
    // string str1(5, 'n');
    // cant have space

    // input it with spaces
    string str = "name";
    string spaces;
    // getline(cin, spaces);
    // cout << spaces << endl;

    string str1 = "fam", str2 = "ily";
    // str1.append(str2); // str1 = str1 + str2;
    cout << str1 + str2 << endl; // concat

    cout << str1[1] << endl; // access

    string abc = "asdsfbdfbddvqefiefpbsbdviaia";
    abc.clear(); // CLEAR THE WHOLE STRING
    cout << abc << endl;

    string _1 = "abc";
    string _2 = "xyz";
    cout << _2.compare(_1) << endl; // ascii value
    // 0 means same, +ve is 2 bigger, -ve is 2 smaller

    // empty() to check if empty
    // !empty() to make sure string not empty()

    // erase() function
    // s1.erase(3,3); start index and chars to delete
    // find() to find if substring is part of string
    // s1.find("com") // returns first index where it finds
    // s1.insert(2,"lol") // index and string to insert
    // s1.length()/ s1.size() // returns size of string

    // s1.substr(6,4) // index and no of chars need

    string num = "786";
    // string to integers
    int x = stoi(num);
    cout << x + 1 << endl;

    // integer to string
    int y = 789;
    cout << to_string(y) + "2" << endl;
    // sorting a string
    string uwu = "xadinfeodvgdsvvvvbdcqb";
    sort(uwu.begin(), uwu.end());
    cout << uwu << endl;
    return 0;
}
