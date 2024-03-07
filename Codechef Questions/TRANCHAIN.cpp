#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, int> types = {{"O", 0}, {"A", 0}, {"B", 0}, {"AB", 0}};
        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            types[temp]++;
        }
        int chain = types["O"] + types["AB"] + max(types["B"], types["A"]);
        cout << chain << endl;
    }
    return 0;
}