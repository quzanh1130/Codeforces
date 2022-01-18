#include <bits/stdc++.h>
using namespace std;
map <int, int >mp1,mp2;
 
string solve(vector <int> a, vector<int> b, int m){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for (int i=0; i<m; i++){
       if ( a[i] != b[i] ){
           if (a[i]+1 != b[i]){
               return "NO";
           }
       }
    }
    return "YES";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m; cin >> n;
    vector <int> a,b;
    while (n--){
        cin >> m;
        a.resize(m); b.resize(m);
        for (int i=0; i<m ;i++) {
            cin >> a[i];
            mp1[a[i]]++;
        }
        for (int i=0; i<m ;i++) {
            cin >> b[i];
            mp2[b[i]]++;
        }
        cout << solve(a,b,m) << endl;
    }
    return 0;
}