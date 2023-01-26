#include <iostream>
#include <vector>
using namespace std;

int main() {
    int l, counter = 0;
    cin >> l;
    vector<int> v2;
    for (int i = 0; i <= v2.size(); i++) {
        cin >> v2[i];
    }
    for (int b = 0; b < v2.size(); b++){
        if (v2[b] != v2[b + 1]) {
            v2.erase(v2.begin() + b);
            counter++;
        }
    }
    cout << counter;
}