#include <bits/stdc++.h>
#define llong long long
#define maxInterger 100005
using namespace std;
 
int a[25], f[2*maxInterger][25];
 
void calc(int x) {
    int m = x;
    for(int i=20; i>=0; i--) {
        f[x][i] = f[x-1][i];
    }
    for(int i=20; i>=0; i--){
        if (m >= a[i]) {
            m -= a[i];
            ++f[x][i];
        }
    }
}
 
int main() {
     int t; cin >> t;
    a[0] = 1;
    for(int i= 1; i<= 20; i++) {
        a[i] = a[i-1] * 2;
    }
    for(int i=1; i<=200000; i++) {
        calc(i);
    }
    while(t--) {
        int l, r; cin >> l >> r;
        int ans = 2000000, n = (r-l+1);
        for(int i=0; i<=20; i++) 
            ans = min(ans, n-(f[r][i] - f[l-1][i]));
        cout << ans << endl;
    }
    return 0;
}
 