#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int kadane(vector<int> &arr)
{
  int curr = 0, maxSum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    curr += arr[i];
    if (curr < 0)
      curr = 0;
    else if (maxSum > curr)
      maxSum = curr;
  }
  return maxSum;
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << kadane(arr) << endl;
  return 0;
}