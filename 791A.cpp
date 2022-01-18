#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b; scanf("%d %d",&a,&b);
    int dem=0;
    while (a<=b){
        a*=3;
        b*=2;
        dem++;
    }
    printf("%d",dem);
    return 0;
}
