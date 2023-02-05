#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int s, n, ma=0;
    string v1;
    cin >> n;
    cin >> v1;
    sort(v1.begin(), v1.end());
    int max = (int)v1[n - 1];
    for (int i = 0; i < n; i++) {
        if ((int)v1[i] < max) {
            int z = max - (int)v1[i];
            ma += z;
        }
    }
    cout << ma;
}