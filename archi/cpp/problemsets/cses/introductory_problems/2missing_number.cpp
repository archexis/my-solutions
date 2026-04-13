#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    long long t = n * (n + 1) / 2;
    long long c = 0;

    for (int i = 0; i < n - 1; i++) {
        long long temp;
        cin >> temp;
        c += temp;
    }
    cout << t - c << endl;
    return 0;
}
