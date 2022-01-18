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
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)
 
const long double  pi = 4.0*atanl(1.0);
const int oo = 100000000;
const int maxN=200005;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while (n--){
        string s; cin >> s;
        map<char,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        for(auto x: mp){
            if (x.ss == 2) cout << x.ff << x.ff;
        }
        for(auto x:mp){
            if(x.ss == 1) cout << x.ff;
        }
        cout << endl;
    }
    return 0;
}