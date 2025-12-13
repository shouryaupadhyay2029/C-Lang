#include <stdio.h>
#include<math.h>
int factorial(int n);

int main(){
    printf("factorial: %d\n", factorial(5));
    return 0;
}
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int fact1= factorial(n-1);
    int factn= n*fact1;
    return factn;
 }