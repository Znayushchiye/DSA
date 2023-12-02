#include <iostream>
#include <vector>
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
void modify(vector<vector<int>> &matrix, int i, int j, int m, int n)
{
   for (int k = 0; k < m; k++)
   {
      if (matrix[k][j] != 0)
      {
         matrix[k][j] = -1;
      }
   }
   for (int k = 0; k < n; k++)
   {
      if (matrix[i][k] != 0)
      {
         matrix[i][k] = -1;
      }
   }
}
void solution(vector<vector<int>> &matrix)
{
   int m = matrix.size();
   int n = matrix[0].size();
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         if (matrix[i][j] == 0)
         {
            modify(matrix, i, j, m, n);
         }
      }
   }
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         if (matrix[i][j] == -1)
         {
            matrix[i][j] = 0;
         }
      }
   }
}
int main()
{
   vector<vector<int>> matrix;
   input(matrix);
   solution(matrix);
   print(matrix);
   return 0;
}