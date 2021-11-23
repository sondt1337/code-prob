#include "stdio.h"
int main(){
    int a[1000], i;
    int n, tong = 0;
    scanf("%d", &n);
    for(i =1 ;i<=n;i++){
        scanf("%d", &a[i]);
        if(i % 2 == 0) tong+= a[i];
    }
    printf("%d", tong);
}
