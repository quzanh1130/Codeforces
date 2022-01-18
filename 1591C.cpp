#include <bits/stdc++.h>
#define ll long long
#define maxN 200005
using namespace std;
int a[maxN], b[maxN];
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; scanf("%d", &t);
    while(t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        int n1 = 0, n2 = 0;
        for (int i = 1; i <= n; ++i) {
            int x;
            scanf("%d", &x);
            if (x > 0)
                a[++n1] = x;
            else
                b[++n2] = -x;
        }
    sort(a+1, a+n1+1);
        sort(b+1, b+n2+1);
        ll mx = max(a[n1], b[n2]);
        ll ans1 = 0LL;
        for (int i = n1; i >= 1; i-=k) {
            ans1 += 2*(ll)a[i];
 
        }
 
        ll ans2 = 0LL;
        for (int i = n2; i >= 1; i-=k) {
            ans1 += 2*(ll)b[i];
        }
        cout << (ans1 + ans2) - mx << '\n';
 
    }
    return 0;
}