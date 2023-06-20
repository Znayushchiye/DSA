#include <iostream>
using namespace std;

void input(int letters[], string a, string b)
{
    int n = a.length();
    int m = b.length();
    for (int i = 0; i < m; i++)
    {
        letters[(int)a[i]] += 1;
    }
    for (int i = 0; i < n; i++)
    {
        letters[(int)b[i]] += 1;
    }
}
int count(int letters[])
{
    int count = 0;
    for (int i = 97; i < 123; i++)
    {
        if (letters[i] % 2 == 1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        string a, b;
        cin >> a >> b;
        int letters[150] = {0};

        input(letters, a, b);
        int freq = count(letters);

        if (freq == 2)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
    return 0;
}