
#include <iostream>
using namespace std;

int main(){
    int n; scanf("%d",&n);
    int max=0,temp=0;
    while (n--){
        int a,b;
        scanf("%d %d",&a,&b);
        temp=temp-a+b;
        if (temp>max) max=temp;
    }
    printf("%d",max);
    return 0;
}