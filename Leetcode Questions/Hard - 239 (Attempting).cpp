#include <vector>
#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;
class Solution
{
public:
  int maxInd(vector<int> &win, vector<int> &nums, int n)
  {
    int itr = 0;
    for (int i = 0; i < n; i++)
    {
      if (nums[win[i]] > nums[itr])
      {
        itr = win[i];
      }
    }
    return itr;
  }
  vector<int> maxSlidingWindow(vector<int> &nums, int k)
  {
    vector<int> win(k);
    iota(win.begin(), win.end(), 0);
    vector<int> ans;
    ans.push_back(nums[maxInd(win, nums, k)]);
    int n = nums.size();
    for (int i = k; i < n; i++)
    {
      int first = win[0];
      if (ans[ans.size() - 1] == first)
      {
        win.push_back(nums[i]);
        win.erase(win.begin());
        ans.push_back(nums[maxInd(win, nums, k)]);
        continue;
      }
      else if (nums[i] <= ans[ans.size() - 1])
      {
        ans.push_back(ans[ans.size() - 1]);
      }
      else
      {
        ans.push_back(nums[i]);
      }
      win.push_back(nums[i]);
      win.erase(win.begin());
    }
    return ans;
  }
};


int main()
{
  /* code */
  return 0;
}
