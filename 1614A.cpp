#include <bits/stdc++.h>
using namespace std;
vector <int > a;
int solve(int m,int l, int r, int k){
    sort(a.begin(),a.end());
    int dem=0;
    for (int i=0; i<m; i++){
        if (a[i]>=l && a[i]<=r && k>=a[i]){
            dem++;
            k-=a[i];
            if (k<=0) return dem;
        }
    }
    return dem;
}
 
int main(){
    int n; cin >> n;
    while (n--){
        int m,l,r,k;
        cin >> m >> l >> r >> k;
        a.resize(m);
        for (int i=0; i<m; i++){
            cin >> a[i];
        }
        cout << solve(m,l,r,k) << endl;
    }
    return 0;
}