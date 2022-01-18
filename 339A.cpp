#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int a[100],dem=0;
    for (int i=0; i<s.size(); ++i){
        if (s[i]>='1' && s[i]<='3'){
            a[dem]=s[i]- '0';
            dem++;
        }
    }
    sort(a,a+dem);
    for (int i=0; i<dem; ++i){
        if (i==dem-1) printf("%d",a[i]);
        else printf("%d+",a[i]);
    }
    return 0;
}
