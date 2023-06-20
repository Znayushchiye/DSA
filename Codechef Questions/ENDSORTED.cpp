#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int permutation[n];
        for (int i = 0; i < n; i++)
        {
            cin >> permutation[i];
        }

        int count = 0;
        if (permutation[0] == 1)
        {
            if (permutation[n - 1] == n)
            {
                int firstIndex = distance(permutation, find(permutation, permutation + n, 1));
                count = firstIndex;
            }
            else
            {
                int lastIndex = distance(permutation, find(permutation, permutation + n, n - 1));
                count = n - lastIndex;
            }
        }
        else
        {
            if (permutation[n - 1] == n)
            {
                int firstIndex = distance(permutation, find(permutation, permutation + n, 1));
                count = firstIndex;
            }
            else
            {
                int firstIndex = distance(permutation, find(permutation, permutation + n, 1));
                int lastIndex = distance(permutation, find(permutation, permutation + n, n - 1));
                count = n + firstIndex - lastIndex - (firstIndex > lastIndex ? 1 : 0);
                if (firstIndex == 1 && lastIndex == 0)
                {
                    count--;
                }
            }
        }
        cout << count << endl
             << endl;
    }
    return 0;
}