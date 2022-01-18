#include <bits/stdc++.h>
using namespace std;
const long double  pi = 4.0*atanl(1.0);
#define long long ll
 
int a[105][105];
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while(n--){
        int n,m,rb,cb,rd,cd; cin >> n >> m >> rb >> cb >> rd >> cd;
        int time=0; int r=1,c=1;
        if (rb != rd && cb != cd){
            while (true){
                if (rb==n && cb==m) {r=-1; c=-1;} else
                    if (rb==n) {r=-1;}  else
                        if (cb==m) {c=-1;}
 
                rb+=r; cb+=c;
                time++;
                if (rb==rd || cb==cd) break;
            }
            cout << time << endl;
        }else cout << time << endl;
    }
    return 0;
}