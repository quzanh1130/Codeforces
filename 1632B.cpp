#include <bits/stdc++.h>
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        ll n;
        cin >> n;
        ll dig = log2(n - 1);
        ll mx = (1ll << dig);
        for(int i=mx-1;i>=0;i--) {
            cout << i << " ";
        }
        for(int i = mx; i < n; i++) {
            cout << i << " ";
        }
        cout<<endl;
    }
    return 0;
}