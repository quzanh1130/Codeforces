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
    int t; cin >> t;
    while (t--){
        ll n,a,b; cin >> n >> a >> b; 
        ll sum = 0;
        fort(i,1,n){
            ll tmp; cin >> tmp;
            sum+= tmp;
        }
        if ((sum+a)%2 == b % 2){
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
    return 0;
}