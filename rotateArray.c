#include <stdio.h>
int main(){
    int arr[5]={2,3,6,7,8};
    int k=2;
    int temp[5];
    int i;
    k=k%5; 
        
    
    for(i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(i=k;i<5;i++){
        arr[i-k]=arr[i];
    }
    for(i=0;i<k;i++){
        arr[5-k+i]=temp[i];
    }
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}