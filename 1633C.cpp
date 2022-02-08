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
const int oo = 1000000000;
const int maxN=100000;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int cases; cin >> cases;
    while (cases--){
        ll hc,dc; cin >> hc >> dc;
        ll hm,dm; cin >> hm >> dm;
        ll k,w,a; cin >> k >> w >> a;
        bool comp = true;
        fort(i,0,k){
            if ( (hc -1 + i*a ) / dm  >= (hm -1 )/(dc + (k-i)*w)){
                cout << "YES" << endl;
                comp = false;
                break;
            }
        }
        if (comp) cout << "NO" << endl;
    }
    return 0;
}