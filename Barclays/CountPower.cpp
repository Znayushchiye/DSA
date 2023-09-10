#include <iostream>
#include <cmath>
int main()
{
   int n;
   std::cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      std::cin >> arr[i];
   }
   int m;
   std::cin >> m;
   int arr1[m];
   for (int i = 0; i < m; i++)
   {
      std::cin >> arr1[i];
   }

   int count = 0;
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         if (pow(arr[i], arr1[j]) > pow(arr1[j], arr[i]))
         {
            count++;
         }
      }
   }
   std::cout << count << std::endl;
   return 0;
}