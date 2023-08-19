#include <vector>
#include <iostream>
#include <algorithm>
#define int long long int
using namespace std;
bool checkInc(vector<int> &check)
{
    sort(check.rbegin(), check.rend());
    int var = check[0];
    for (int i = 1; i < 10; i++)
    {
        if (var < check[i])
        {
            return false;
        }
        var = check[i];
    }
    return true;
}
bool release(vector<int> &check, int n, int i)
{
    check.push_back(n);
    if (n == 1)
    {
        return true;
    }
    if (i < 0 && checkInc(check))
    {
        return false;
    }
    if (n % 2)
    {
        return release(check, 3 * n + 3, i - 1);
    }
    else if (n % 2 == 0)
    {
        return release(check, n / 2, i - 1);
    }
    return false;
}
int32_t main()
{
    int n;
    cin >> n;
    vector<int> check;
    int i = 20;
    if (n < 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << (release(check, n, i) ? "Yes" : "No") << endl;
    }
    return 0;
}
