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
 
string s,result;
int n;
int timI(){
    for (int i=n-2; i>=0; i--){
        if (s[i]<s[i+1]) {
            return i;
        } 
    }
    return -1;
}
int timJ(int i){
    for (int j=n-1; j>i; j--){
        if (s[i]<s[j]){
            return j;
        }
    }
    return i+1;
}
 
void daoxau(int x){
    int left=x+1;
    int right=n-1;
    while (left < right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
}
 
int solve(){
    int i=timI();
    if (i>=0){
        int j=timJ(i);
        swap(s[i],s[j]);
        daoxau(i);
        return 1;
    }
    return 0;
}
 
int minNum(int k){
    int mx = -1;
    for(int i=0; i<n-1; i++){
        mx = max((s[i]-'0')|(s[i+1]-'0'),mx); 
    }
    if (mx<k) result = s;
    return mx;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int ans = b - a;
        for (int add = 0; add <= 10 * b; add++) {
            int cnt = add;
            int a1 = a, b1 = b;
            a1 += add;
            ans = min(ans, cnt + abs(a1 - b1));
            cnt++;
            a1 |= b1;
            ans = min(ans, cnt + abs(a1 - b1));
        }
        for (int add = 0; add <= 10 * b; add++) {
            int cnt = add;
            int a1 = a, b1 = b;
            b1 += add;
            ans = min(ans, cnt + abs(a1 - b1));
            cnt++;
            a1 |= b1;
            ans = min(ans, cnt + abs(a1 - b1));
        }
        cout << ans << endl;
    }
    return 0;
}