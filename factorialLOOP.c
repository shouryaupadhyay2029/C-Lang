#include <stdio.h>
#include <math.h>
int main(){
    int i,n,fact=1;
    printf("enter num",n);
    scanf("%d",&n);
    if(n==0){
        printf("1\n");
        return 0;
    
    }
    else{
        for(i=1;i<=n;i++){
            fact=fact*i;
            
        }
        printf("%d",fact);
    }
return 0;
}