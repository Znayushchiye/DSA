#include <iostream>
#include <vector>
using namespace std;
int maxSum(vector<int> &arr, vector<int> &dp, int n)
{
   int maxi = INT_MIN;
   dp[0] = arr[0];
   for (int i = 1; i < n; i++)
   {
      dp[i] = arr[i] + dp[i - 1];
      maxi = max(maxi, dp[i]);
   }
   return maxi;
}
int main()
{
   int n;
   cin >> n;
   vector<int> arr(n), dp(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   int result = maxSum(arr, dp, n);
   cout << result;
   return 0;
}