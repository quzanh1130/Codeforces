#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w; scanf("%d %d %d", &k, &n, &w);
    int sum=0;
    for (int i=1; i<=w; ++i){
        sum+=i*k;
    }
    if (sum-n>=0) printf("%d",sum-n); else printf("0");
    return 0;
}
