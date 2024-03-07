#include <iostream>

using namespace std;

int arraySum(int arr[], int size)
{
  if (size == 0)
  {
    return -1;
  }

  if (size == 1)
  {
    return *arr;
  }

  return *arr + arraySum(arr + 1, size - 1);
}
int main()
{
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> i[arr];
  }

  int sum = arraySum(arr, n);

  cout << endl
       << sum << endl;

  delete[] arr;
  return 0;
}