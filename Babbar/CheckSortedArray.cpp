#include <iostream>

using namespace std;

bool isSorted(int arr[], int size)
{
  if (size == 1 || size == 0)
  {
    return true;
  }

  if (*arr <= *(arr + 1))
  {
    return isSorted(arr + 1, size - 1);
  }
  else
  {
    return false;
  }
}
int main()
{
  int size;
  cin >> size;
  int *arr = new int[size];
  for (int i = 0; i < size; i++)
  {
    cin >> i[arr];
  }

  bool issorted = isSorted(arr, size);

  cout << endl
       << ((issorted) ? "Yes" : "No") << endl;

  delete[] arr;
  return 0;
}