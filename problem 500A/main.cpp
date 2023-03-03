#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }
    bool visited[100];
    for (int i = 0; i <= n; i++) {
        visited[i] = false;
    }
    visited[1] = true;
    int current = 1;

    while (current < n) {
        int next = current + a[current - 1];
        if (next == t) {
            cout << "YES";
            return 0;
        }
        if (next <= n && !visited[next]) {
            visited[next] = true;
            current = next;
        }
        else {
            cout << "NO";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
