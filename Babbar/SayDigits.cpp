#include <iostream>
using namespace std;

const string numbers[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
void sayDigits(long long n)
{
  if (n == 0)
  {
    return;
  }
  sayDigits(n / 10);
  int digit = n % 10;
  cout << numbers[digit] << " ";
  // switch (digit)
  // {
  // case 0:
  //   cout << "Zero ";
  //   break;

  // case 1:
  //   cout << "One ";
  //   break;

  // case 2:
  //   cout << "Two ";
  //   break;

  // case 3:
  //   cout << "Three ";
  //   break;

  // case 4:
  //   cout << "Four ";
  //   break;

  // case 5:
  //   cout << "Five ";
  //   break;

  // case 6:
  //   cout << "Six ";
  //   break;

  // case 7:
  //   cout << "Seven ";
  //   break;

  // case 8:
  //   cout << "Eight ";
  //   break;

  // case 9:
  //   cout << "Nine ";
  //   break;
  // }
}
int main()
{
  long long n;
  cin >> n;
  if (n < 0)
  {
    cout << "Minus ";
    n = -n;
  }

  if (n == 0)
  {
    cout << "Zero";
  }
  else
  {
    sayDigits(n);
  }
  return 0;
}