#include <stdio.h>
int sumDig(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10)+sumDig(n/10);
    }
}
int main(){
    int num;
    printf("Enter numb: ");
    scanf("%d",&num);
    
    printf("\n",sumDig(num));
    return 0;
}