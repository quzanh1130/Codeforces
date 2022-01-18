#include <bits/stdc++.h>
using namespace std;

int main(){
    char c='0'; int n,dem=0;
    map <char,int> mp;
    scanf("%d",&n); getchar();
    string s; cin >> s;
    for (auto x:s){
        mp[x]++;
        if (c=='0') {c=x; continue;}
        if (x!=c && mp[c]>1) {
            dem+=mp[c]-1;
            mp.erase(c);
        } else if (x!=c) mp.erase(c);
        c=x;
    }
    if (mp[c]>1) dem+=mp[c]-1;
    printf("%d",dem);
}
