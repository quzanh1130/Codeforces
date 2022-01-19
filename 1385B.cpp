#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m,a; scanf("%d",&n);
    while (n--){
        scanf("%d",&m);
        map <int,int> mp;
        vector <int> v;
        for (int j=0; j<m*2;++j){
            scanf("%d",&a);
            if (mp.count(a)==0){
                v.push_back(a);
                mp[a]++;
            }
        }
        for (int k=0; k<v.size(); ++k){
            printf("%d ",v[k]);
        }
        printf("\n");
    }
    return 0;
}