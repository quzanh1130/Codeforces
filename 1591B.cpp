#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[200005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int mx = 0;
        for (int i = 1; i <= n; ++i) {
            scanf("%d", &a[i]);
            mx = max(mx, a[i]);
        }
 
        int pre = 0;
        int ans = 0;
        for (int i = n; i >= 1; --i) {
            if (a[i] == mx)
                break;
            if (a[i] > pre) {
                ++ans;
                pre = a[i];
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}