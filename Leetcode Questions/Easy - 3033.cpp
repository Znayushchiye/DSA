#include <vector>
#include <iostream>
#include <climits>

using namespace std;

class Solution
{
public:
  vector<vector<int>> modifiedMatrix(vector<vector<int>> &matrix)
  {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> result = matrix;

    for (int j = 0; j < m; j++)
    {
      int maxi = INT_MIN;
      vector<int> indices;
      for (int i = 0; i < n; i++)
      {
        if (matrix[i][j] == -1)
          indices.push_back(i);
        maxi = max(maxi, matrix[i][j]);
      }
      for (int i = 0; i < indices.size(); i++)
        result[indices[i]][j] = maxi;
    }
    return result;
  }
};