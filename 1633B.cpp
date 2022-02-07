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
        string s; cin >> s;
        int a = 0,b = 0;
        if (s.size()==1 || s.size()==2){
            cout << "0" << endl;
        } else {
            fort(i,0,s.size()-1)
                if (s[i]=='0') a++; else b++;

            if ( a == b) {
                cout << a - 1 << endl;
            } else if (a > b){
                cout << b << endl;
            } else {
                cout << a << endl;
            }
        }
        
    }
    return 0;
}