// NGUYEN QUOC ANH
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second
 
const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=200005;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int cases; cin>>cases;
    while(cases--){
        int m,n; cin>>m>>n;
        vector<int> a;
        fort(i,1,m){
            fort(j,1,n){
                a.push_back(max(abs(i-1),abs(i-m))+max(abs(j-1),abs(j-n)));
            }
        }
        sort(a.begin(),a.end());
        for(auto &x:a) cout<<x<<" ";
        cout << endl;
    }
}