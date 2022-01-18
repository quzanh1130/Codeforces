#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[105];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int sum=1; a[0]=-1;
        for (int i=1; i<=n; i++) cin >> a[i];
        for (int i=1; i<=n; i++){
            if (a[i]==1) {
                sum++;
                if (a[i-1]==1) sum+=4;
            } else
                if (a[i-1]==0) {
                        sum=-1;
                        break;
                }
        }
        cout << sum << endl;
    }
 
    return 0;
}