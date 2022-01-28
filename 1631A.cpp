// NGUYEN QUOC ANH
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ff first
#define ss second
#define enld endl
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fort(i, a, b) for(ll i = a; i <= b; ++i)
#define fortt(i, a, b) for (ll i = a; i >= b; --i)
 
const long double  pi = 4.0*atanl(1.0);
const int oo = 100000000;
const int maxN=2000000;
 
int a[150],b[150];
 
int main(){
    int t;
	cin>>t;
	while(t--){
		int n,maxa=0,maxb=0,i;
		cin>>n;
		for (i=0; i<n; i++){
			cin>>a[i];
		}
		for (i=0; i<n; i++){
			cin>>b[i];
		}
		for (i=0; i<n; i++){
			if (a[i]<b[i]){
				swap(a[i],b[i]);
			}
		}
		for (i=0; i<n; i++){
			maxa=max(a[i],maxa);
			maxb=max(b[i],maxb);
		}
		cout<< maxb*maxa <<endl;
	}
return 0;
}