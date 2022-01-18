#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define vi vector<int>
#define sci(a) scanf("%d", &a)
#define scii(a,b) scanf("%d %d", &a, &b)
#define scc(a) scanf("%c", &a)
#define scs(s) scanf("%[^\n]", s)
#define fto(i, a, b) for(int i = a; i <= b; ++i)
#define fdto(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second
#define pri(a) printf("%d ", a)
#define pril(a) printf("%d\n", a)
#define maxN 1005
 
using namespace std;
 
pair<int,int> a[maxN];
int used[maxN];
 
bool cmp(ii x, ii y) {
    return (x.ff < y.ff || (x.ff == y.ff && x.ss > y.ss));
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; sci(t);
    while(t--) {
        int n; scanf("%d",&n);
 
        for(int i=1; i<=n; i++) {
            scii(a[i].ff, a[i].ss);
        }
        sort(a+1, a+n+1);
        fto(i, 1, n) {
            used[i] = 0;
            if (a[i].ff == 1 && a[i].ss == n) used[i] = 1;
        }
        queue<ii> q;
        q.push(mp(1, n));
        int cnt = 0;
        while(!q.empty()) {
            ii x = q.front();
            ++cnt;
            q.pop();
            int mx = 1, mn = n;
            int l = -1, r = -1;
            if (x.ff == x.ss) {
                pri(x.ff); pri(x.ss); pril(x.ff);
                continue;
            }
            fdto(i, n, 1) {
                if (a[i].ff == x.ff && !used[i]) {
                    l = a[i].ss+1;
                    used[i] = 1;
                    break;
                }
            }
            fto(i, 1, n) {
                if (a[i].ss == x.ss && !used[i]) {
                    r = a[i].ff-1;
                    used[i] = 1;
                    break;
                }
            }
            if (l == -1) {
                pri(x.ff); pri(x.ss); pril(r);
                q.push(mp(r+1, x.ss));
            } else if (r == -1) {
                pri(x.ff); pri(x.ss); pril(l);
                q.push(mp(x.ff, l-1));
            } else {
                pri(x.ff); pri(x.ss); pril(l);
                q.push(mp(x.ff, l-1));
                q.push(mp(r+1, x.ss));
            }
        }
        puts("");
    }
 
    return 0;
}