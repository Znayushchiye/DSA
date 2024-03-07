#include <iostream>
#include <string>
int main()
{
  int n;
  std::cin >> n;
  while (n--)
  {
    std::string s;
    std::cin >> s;
    std::string ans = "";
    int len = s.length();
    if (len > 10)
      ans += s[0] + std::to_string(len - 2) + s[len - 1];
    else
      ans = s;
    std::cout << ans << std::endl;
  }
  return 0;
}