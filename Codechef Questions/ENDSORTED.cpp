#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> permutation(n);
        for (int i = 0; i < n; i++)
        {
            cin >> permutation[i];
        }

        int posOf1 = find(permutation.begin(), permutation.end(), 1) - permutation.begin();
        int posOfN = find(permutation.begin(), permutation.end(), n) - permutation.begin();

        cout << posOf1 << " " << posOfN << endl;
        // continue;

        int count = n - (posOfN + 1) + posOf1 - (posOf1 > posOfN);
        if (posOf1 < posOfN)
        {
            count = count - (posOf1 == 1 && posOfN == 0);
        }
        cout << count << endl;
    }
    return 0;
}