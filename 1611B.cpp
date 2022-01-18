#include <bits/stdc++.h>
using namespace std;
 
long long solve(int a, int b){
    if (a+b<4) return 0;
    if ( a==0 || b==0) return 0;
    int x=(a+b)/4;
    if (a==b) return x;
    int mn=min(a,b); int mx=max(a,b);
    int ans=mx-3*mn;
    if (ans>=0) { return mn; }
    return x;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while (n--){
        int a,b;
        cin >> a >> b;
        cout << solve(a,b) << endl;
    }
    return 0;
}