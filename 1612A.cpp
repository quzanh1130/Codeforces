#include<bits/stdc++.h>
#define llong long long
using namespace std;
int n;
int main()
{
    cin>>n;
    while(n--){
        llong c,d;
        cin>>c>>d;
        if(c%2==0 && d%2==0) cout<<c/2<<" "<<d/2<< endl;
        else
            if(c%2!=0 && d%2!=0){
                if(c<d) cout<<c<<" "<<(c+d)/2-c<<endl;
                    else cout<<(c+d)/2-d<<" "<<d<<endl;
            }
            else cout<<"-1 -1"<< endl;
    }
    return 0;
}