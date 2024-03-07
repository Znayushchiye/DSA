#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool equalTo(char *start, string pattern)
{
  int len = pattern.length();
  for (int i = 0; i < len; i++)
  {
    if (pattern[i] != *start)
      return false;
    start++;
  }
  return true;
}
int main()
{
  char str[] = "AABAACAADAABAABA";
  string pattern = "AABA";
  vector<pair<string, int>> matches;

  for (char *start = str; *start != '\0'; start++)
    if (equalTo(start, pattern))
      matches.push_back(pair<string, int>{pattern, start - str});

  if (matches.size())
  {
    cout << "matches found: \n";
    for (int i = 0; i < matches.size(); i++)
      cout << matches[i].first << " " << matches[i].second << "\n";
  }
  else
  {
    cout << "no matches found";
  }
  return 0;
}