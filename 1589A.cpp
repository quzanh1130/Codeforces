#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a =a - b;
        }else b = b- a;    }
    return a;
}



void progress()
{
    ll x,y;
    cin>>x>>y;

    ll c=x,p=y;
    do {
        ll z=p;
        p=c%p;
        c=z;
    }while(p!=0);
    x=x/c;
    y=y/c;

    ll k=x*y/gcd(x,y);
    ll a=1,b=1;


    a=x*x;

    b=y*y;

    if(a<b) a=-a; else b=-b;
    cout<<a<<" "<<b<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        progress();
    }
}
