#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string guest_name;
    string host_name;
    string kucha;
    string final;
    bool ans;
    cin>>guest_name>>host_name>>kucha;
    final = guest_name + host_name;
    sort(final.begin(),final.end());
    sort(kucha.begin(), kucha.end());
    if(final == kucha){
        ans = 1;
    }
    else {
        ans = 0;
    }
    cout<<ans;
}
