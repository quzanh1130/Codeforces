// NGUYEN QUOC ANH
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ff first
#define ss second
#define enld endl
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fort(i, a, b) for(ll i = a; i <= b; ++i)
#define fortt(i, a, b) for (ll i = a; i >= b; --i)
 
const long double  pi = 4.0*atanl(1.0);
const int oo = 100000000;
const int maxN=100000;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector <int> a (n+1);
        fort(i,1,n) cin >> a[i];
        int x = 0, i = n;
        while(a[i] == a[n]) {
            --i; 
            ++x;  
        }
        int ans = 0; // 1 2 6 4 6 6
        while(i > 0) {
            ++ans;
            i-= x;
            x*=2;
            while(a[i] == a[n]) {
                --i; 
                ++x;  
            }
        }
        cout << ans << endl;
    }
    return 0;
}