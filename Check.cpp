#include <iostream>
using namespace std;
void solve() {
    int a = 3;
    int res = (a++) + (++a) + (a++) + (++a);
    cout << res;
}
int main() {
	solve();
	return 0;
}