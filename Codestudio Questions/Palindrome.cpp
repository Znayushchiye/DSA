#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s)
{
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]) || isdigit(s[i]))
        {
            str += tolower(s[i]);
        }
    }
    cout << str << endl;
    int front = 0;
    int rear = str.length() - 1;
    while (front <= rear)
    {
        if (str[front] == str[rear])
        {
            front++;
            rear--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        cout << checkPalindrome(str);
    }
}