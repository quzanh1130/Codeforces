#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; scanf("%d",&n); getchar();
    string s1,s2;
    for (int i=0; i<n;++i){
        cin >> s1 >> s2;
        int a=0, b=0, sum=0;
        for (auto x:s2){
            a=s1.find(x)+1;
            if (b==0) {b=a; continue;}
            sum+=abs(a-b);
            b=a;
        }
        printf("%d\n",sum);
    }
    return 0;
}
