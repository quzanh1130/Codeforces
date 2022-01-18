#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005];
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while (n--){
        int m; cin >> m;
        int sum=0;
        for (int i=0; i<m; i++){
            cin >> a[i];
            sum+=a[i];
        }
        if (sum%m==0) cout << "0" << endl; else {
            if (sum%m<m) cout << "1" << endl;
        }
    }
    return 0;
}