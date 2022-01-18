#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    map <char, int> mp;
    vector <char> d;
    for (auto x:s){
        if (mp.count(x)==0){
            d.push_back(x);
        }
        mp[x]++;
    }
    if (d.size()%2 ==0) printf("CHAT WITH HER!"); else printf("IGNORE HIM!");
    return 0;
}
