#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,dem=0; scanf("%d %d",&n,&k);
    int a[n];
    for (int i=0; i<n; ++i){
        scanf("%d",&a[i]);
    }
    for (int i=0; i<n; ++i){
        if (a[i]>0 && a[i]>=a[k-1]) dem++;
    }
    printf("%d",dem);
    return 0;
}
