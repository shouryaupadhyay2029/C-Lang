#include <stdio.h>
int main(){
    int i,j,temp;
    int arr[7]= {3,7,1,0,8,9,2};
    for(i=0;i<7-1;i++){
        for (j=0;j<7-1-i;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<7;i++){
        printf(" sorted array is : %d\n",arr[i]);
    }
return 0;

}