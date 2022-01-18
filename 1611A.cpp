#include <bits/stdc++.h>
using namespace std;
 
int solve(int cases){
    if (cases%2==0) return 0;
    string s= to_string(cases);
    if ( (s[0]-'0')%2==0) return 1;
    for (int i=1; i<s.size(); i++){
        if ((s[i]-'0')%2==0) return 2;
    }
    return -1;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while (n--){
        int cases; 
        cin >> cases;
        cout << solve(cases) << endl;
    }
    return 0;
}