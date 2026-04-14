#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n; long long num; long long m;
    cin >> num;
    for (int i = 1; i < n; i++) {
        long long sec; cin >> sec;
        if (sec < num) m += num - sec;
        else num = sec;
    }
    cout << m; return 0;
}
