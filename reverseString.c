#include <stdio.h>

void revStr(char str[]){
    int i=0,j=0;
    char temp;
    while(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }

}
int main(){
    char rev[100];
    printf("Enter a string: ",rev);
    fgets(rev, sizeof(rev), stdin);
    revStr(rev);
    printf("Reversed string: %s",rev);
    return 0;
}
