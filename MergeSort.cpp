#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &left, vector<int> &right, vector<int> &arr)
{
   int i, j, k;
   i = j = k = 0;
   while (i < left.size() && j < right.size())
   {
      if (left[i] < right[j])
         arr[k] = left[i++];
      else
         arr[k] = right[j++];
      k++;
   }
   while (i < left.size())
      arr[k++] = left[i++];
   while (j < right.size())
      arr[k++] = right[j++];
}
vector<int> mergeSort(vector<int> &arr, int low, int high)
{
   int mid = low + (high - low) / 2;
   int l1 = mid - low - 1;
   int l2 = high - mid;
   vector<int> left(l1);
   vector<int> right(l2);
   left = mergeSort(arr, low, mid - 1);
   right = mergeSort(arr, mid, high);
   merge(left, right, arr);
   return arr;
}
void printArray(vector<int> &arr, int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
}
int main()
{
   int n = 0;
   cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   arr = mergeSort(arr, 0, n - 1);
   printArray(arr, n);
   return 0;
}