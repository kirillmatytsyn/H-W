#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long ans = 0;
        for (long long a = n - 1; a > 0; a--) {
            long long b = n - a;
            if (a > b) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
