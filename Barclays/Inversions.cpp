#include <iostream>
int main()
{
   int n;
   std::cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      std::cin >> arr[i];
   }
   int count = 0;
   for (int i = 0; i < n; i++)
      for (int j = i + 1; j < n; j++)
         if (arr[i] > arr[j])
            count++;
   std::cout << count << std::endl;
   return 0;
}