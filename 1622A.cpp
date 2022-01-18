#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long double  pi = 4.0*atanl(1.0);


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while (n--){
        int a[3]; for (int i=0; i<3; i++) cin >> a[i];
        sort(a,a+3);
        if ( a[0] + a[1] == a[2]) cout << "YES" << endl; else {
            if ((a[0]==a[1] && a[2]%2==0) || (a[1] == a[2] && a[0]%2==0)){
                cout << "YES" << endl;
            } else cout << "NO" << endl; 
        } 
    }
    return 0;
}