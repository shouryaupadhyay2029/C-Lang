#include <stdio.h>
int revNum(int n){
    if(n==0){
        return 0;
    }
    else{
        printf("%d",n%10);
        return revNum(n/10);
    }
}
int main(){
    int num;
    printf("Enter numb: ");
    scanf("%d",&num);
    
    printf("\n",revNum(num));
    return 0;
}