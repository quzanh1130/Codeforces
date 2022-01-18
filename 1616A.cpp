#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	set<int> look;
	map<int,int> check;
	int m; cin>>m;
	for(int j=0;j<m;j++){
		int y; cin >> y;
		if(check.find(y) != check.end()){
			look.insert(-y);
		}else{
			look.insert(y);
			check[y]++;
		}
	}
	cout<<look.size()<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	while(n--){
		solve();
	}
	return 0;
}