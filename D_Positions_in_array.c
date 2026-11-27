#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x=10;
    for(int i=0;i<n;i++){
        if(a[i]<=x){
            printf("A[%d] = %d\n",i,a[i]);
        }
    }
    return 0;
}