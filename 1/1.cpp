#include <iostream>
#include <vector>
using namespace std;

int main() {
    int l, counter = 0;
    cin >> l;
    vector<int> v2;
    for (int i = 0; i <= l; i++) {
        cin >> v2[i];
    }
    for (int b = 0; b < l - 1; b++) {
        for (int c = 1; b < l; c++) {
            if (v2[b] != v2[c]) {
                v2.erase(v2.begin() + b);
                counter++;
            }
        }
    }
    cout << counter;
}