#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin >> s;
  int ans = 0;
  int ch = 0;
  for (int i = 1; i < s.length(); i++) {
    if (s[i] == s[i - 1])
      ans += 1;
    ch = max(ch, ans);
    if (s[i] != s[i - 1]) {
      ans = 0;
    }
  }
  cout << ch + 1;
  return 0;
}
