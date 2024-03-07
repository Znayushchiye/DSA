#include <iostream>
using namespace std;
long long power(int a, int n)
{
  if (n == 1)
    return a;
  if (n == 0)
    return 1;
  long long halfPower = power(a, n / 2);
  if (n % 2 == 0)
    return (halfPower * halfPower);
  else
    return (halfPower * halfPower * a);
}
int main()
{
  int a, n;
  cout << "Enter a and n: ";
  cin >> a >> n;
  long long result = power(a, n);
  cout << "a to the power n = " << result << endl;
  return 0;
}