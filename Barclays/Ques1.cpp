#include <iostream>
#include <map>
#include <set>
using namespace std;
int main()
{

   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
      cin >> arr[i];
   map<int, int> mp;
   for (int i = 0; i < n; i++)
      mp[arr[i]]++;
   set<int> keys;
   for (auto itr : mp)
      keys.insert(itr.first);
   int maxDistance = -1;
   pair<int, int> maxIndexPair = {-1, -1};
   set<int>::iterator itr = keys.begin();
   if (keys.size() == 1)
      goto end;
   itr++;
   while (itr != keys.end())
   {
      --itr;
      int dist = abs(mp[*(itr)] - mp[*(++itr)]);
      if (dist > maxDistance)
      {
         maxDistance = dist;
         maxIndexPair = {mp[*itr],
                         mp[*(++itr)]};
      }
   }
end:
   cout << maxDistance << endl;
   cout << maxIndexPair.first << ", " << maxIndexPair.first << endl;
   return 0;
}