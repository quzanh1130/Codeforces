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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,time; cin >> n >> time;
    string s; cin >> s;
    while (time--){
        int i=0;
        while (true){
            if (i>=n-1) break;
            if (s[i]=='B' && s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i+=2;
            } else i++;
        }
    }
    cout << s;
    return 0;
}