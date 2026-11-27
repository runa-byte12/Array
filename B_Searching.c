#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int val;
    int found=0;
    scanf("%d",&val);
    for(int i=0;i<n;i++){
        if(a[i]==val){
            printf("%d",i);
            found=1;
            break;
        }
    }
    if(found==0){
            printf("-1");
        }
    return 0;
    

}