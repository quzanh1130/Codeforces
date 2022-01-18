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
 
char a[100][100];
int n,m,r,c;
 
int solve(){
    if (a[r-1][c-1]=='B') return 0; else{
        fort(i,0,n-1) if (a[i][c-1]=='B') return 1;
        fort(i,0,m-1) if (a[r-1][i]=='B') return 1;
    }
    fort(i,0,n-1){
        fort(j,0,m-1){
            if (a[i][j]=='B') return 2;
        }
    }
    return -1;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int cases; cin >> cases;
    while(cases--){
        cin >> n >> m >> r >> c;
        fort(i,0,n-1){
            fort(j,0,m-1){
                cin >> a[i][j];
            }
        }
        cout << solve() << endl;
    }
    return 0;
}