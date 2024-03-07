#include <iostream>

using namespace std;
// Using pointer mechanics
bool binSearch(int arr[], int size, int k)
{
  if (size == 0)
  {
    return false;
  }

  int mid = size / 2;
  if (arr[mid] == k)
  {
    return true;
  }
  else if (arr[mid] > k)
  {
    return binSearch(arr, size - mid, k);
  }
  else
  {
    return binSearch(arr + mid, size, k);
  }
  return false;
}

// Generic technique using 2 index-pointers
bool binSearch(int arr[], int start, int end, int k)
{
  if (start > end)
  {
    return false;
  }

  int mid = end + (start - end) / 2;
  if (arr[mid] == k)
  {
    return true;
  }
  else if (arr[mid] > k)
  {
    return binSearch(arr, start, mid - 1, k);
  }
  else
  {
    return binSearch(arr, mid + 1, end, k);
  }
  return false;
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
  cout << (binSearch(arr, n, k) ? "Yes" : "No") << endl;
  // cout << (binSearch(arr, 0, n - 1, k) ? "Yes" : "No") << endl;
  delete[] arr;
  return 0;
}