#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0; scanf("%d",&n);
    string s;
    for (int i=0; i<n; ++i){
        cin >> s;
        if (s=="X++" || s=="++X") x++;
        if (s=="X--" || s=="--X") x--;
    }
    printf("%d",x);
    return 0;
}
