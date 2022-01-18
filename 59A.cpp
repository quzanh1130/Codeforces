
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int dem1=0,dem2=0;
    for (auto x:s){
        if (x>='a' && x<='z') dem1++; else dem2++;
    }   
    if (dem1>=dem2) {
        for (int i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }
    } else {
        for (int i=0; i<s.size(); i++){
            s[i]=toupper(s[i]);
        }
    }
    cout << s;
    return 0;
}