#include <bits/stdc++.h>
using namespace std;

int letgo(int x, int y){
    int dem=0;
    while (x!=2){
        if (x>2) {
            x--; dem++;
        } else {
            x++; dem++;
        }
    }
    while (y!=2){
        if (y>2) {
            y--; dem++;
        } else {
            y++; dem++;
        }
    }
    return dem;
}

int main()
{
    int a[5][5];
    int x,y;
    for (int i=0; i<5; ++i){
        for (int j=0; j<5; ++j){
            scanf("%d",&a[i][j]);
            if (a[i][j]==1) {
                x=i;
                y=j;
            }
        }
    }
    printf("%d",letgo(x,y));
    return 0;
}
