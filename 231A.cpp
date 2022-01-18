#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,value=0; scanf("%d",&n);
    for (int i=0; i<n; ++i){
        int dem=0;
        for (int j=0; j<3; ++j){
        scanf("%d",&a);
            if (a==1) dem++;
        }
        if (dem>=2) value++;
    }
    printf("%d",value);
    return 0;
}
