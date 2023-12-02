#include <iostream>
#include <vector>
#include <unordered_set>
#define set unordered_set
using namespace std;
void print(vector<vector<int>> &matrix)
{
   int m = matrix.size();
   int n = matrix[0].size();
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         cout << matrix[i][j] << " ";
      }
      cout << endl;
   }
}
void input(vector<vector<int>> &matrix)
{
   int m, n;
   cin >> m >> n;
   matrix.resize(m);
   for (int i = 0; i < m; i++)
   {
      matrix[i].resize(n);
      for (int j = 0; j < n; j++)
      {
         cin >> matrix[i][j];
      }
   }
}
void modify(vector<vector<int>> &matrix, set<int> rows, set<int> cols, int m, int n)
{
   for (int itr : rows)
   {
      for (int i = 0; i < n; i++)
      {
         matrix[itr][i] = 0;
      }
   }
   for (int itr : cols)
   {
      for (int i = 0; i < m; i++)
      {
         matrix[i][itr] = 0;
      }
   }
}
void solution(vector<vector<int>> &matrix, set<int> &rows, set<int> &cols)
{
   int m = matrix.size();
   int n = matrix[0].size();
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         if (matrix[i][j] == 0)
         {
            rows.insert(i);
            cols.insert(j);
         }
      }
   }
   modify(matrix, rows, cols, m, n);
}
int main()
{
   vector<vector<int>> matrix;
   set<int> rows;
   set<int> cols;
   input(matrix);
   solution(matrix, rows, cols);
   print(matrix);
   return 0;
}