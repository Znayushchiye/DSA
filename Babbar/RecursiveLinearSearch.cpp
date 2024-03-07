#include <iostream>

using namespace std;
bool search(int arr[], int size, int k)
{
  if (size == 0)
  {
    return false;
  }
  if (*arr == k)
  {
    return true;
  }

  return search(arr + 1, size - 1, k);
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
  int k;
  cin >> k;
  bool res = search(arr, n, k);
  cout << endl
       << ((res) ? "Yes" : "No") << endl;
  delete[] arr;
  return 0;
}