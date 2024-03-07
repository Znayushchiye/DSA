#include <vector>
#include <queue>
using namespace std;

class Solution
{
public:
  vector<int> maxScoreIndices(vector<int> &nums)
  {
    // First division
    int zeroes = 0, ones = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i])
        ones++;
    }

    priority_queue<pair<int, int>> maxHeap;
    maxHeap.push({zeroes + ones, 0});

    // Maintain a max heap of values of division scores and their indices
    for (int i = 1; i <= nums.size(); i++)
    {
      if (nums[i - 1])
        ones--;
      else
        zeroes++;
      maxHeap.push({zeroes + ones, i});
    }

    // Maintain a buffer to store the indices of the maximum division scores
    vector<pair<int, int>> buffer;
    buffer.push_back(maxHeap.top());
    maxHeap.pop();
    vector<int> result;
    result.push_back(buffer[0].second);
    int i = 1;

    // Add all the indices with the maximum division score to the result
    while (maxHeap.size() && maxHeap.top().first == buffer[0].first)
    {
      buffer.push_back(maxHeap.top());
      maxHeap.pop();
      result.push_back(buffer[i].second);
    }

    // Return the result
    return result;
  }
};