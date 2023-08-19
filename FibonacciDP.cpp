#include <iostream>
#include <vector>
#define int long long int
using namespace std;
std::vector<int> tokenize(string s)
{
    std::vector<int> result;
    char ch = s[0];
    string term = "";
    int i = 0;
    while (ch != '\0')
    {
        ch = s[i];
        if (ch == ' ')
        {
            result.push_back(stoi(term));
            term = "";
        }
        else
            term += ch;
        i++;
    }
    if (ch != ' ')
        result.push_back(stoi(term));
    return result;
}
void fibonacci(vector<int> fib, int n)
{
    for (int i = 2; i < n; i++)
        fib.push_back(fib[i - 1] + fib[i - 2]);
}
int32_t main()
{
    string input;
    getline(cin, input);
    std::vector<int> list = tokenize(input);
    std::vector<int> fib{0, 1};
    int maxi = INT_MIN;
    for (auto i : list)
        maxi = max(maxi, i);
    fibonacci(fib, maxi);
    for (auto ele : list)
        cout << fib[ele - 1] << endl;
    return 0;
}