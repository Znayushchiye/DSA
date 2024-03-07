#include <iostream>
#include <climits>
using namespace std;

class Codechef
{
public:
    int t;
    Codechef();
    void testcase();
};

Codechef::Codechef()
{
    cin >> t;
}
void Codechef::testcase()
{
    while (t--)
    {
        int n;
        cin >> n;
        int Addy[n], Om[n];

        for (int i = 0; i < n; i++)
        {
            cin >> Om[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> Addy[i];
        }

        int count = 0, maxOm = INT_MIN, maxAddy = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (Om[i] != 0)
            {
                count++;
            }
            else
            {
                maxOm = max(maxOm, count);
                count = 0;
            }
        }
        maxOm = max(maxOm, count);
        count = 0;

        for (int i = 0; i < n; i++)
        {
            if (Addy[i] != 0)
            {
                count++;
            }
            else
            {
                maxAddy = max(maxAddy, count);
                count = 0;
            }
        }
        maxAddy = max(maxAddy, count);

        cout << maxOm << ", " << maxAddy << endl;
        continue;
        if (maxOm > maxAddy)
        {
            cout << "Om\n";
        }
        else if (maxAddy > maxOm)
        {
            cout << "Addy\n";
        }
        else
        {
            cout << "Draw\n";
        }
    }
}

int main()
{
    Codechef obj;
    obj.testcase();

    return 0;
}