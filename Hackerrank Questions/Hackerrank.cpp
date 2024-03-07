#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> coord(n + 1);
    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        coord[i] = {t1, t2};
    }
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        pair<int, int> f = coord[i - 1];
        pair<int, int> s = coord[i];
        if ((f.first == s.first && s.second < f.second) || ())
            count++;
    }
    return 0;
}