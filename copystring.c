#include <stdio.h>

void copy(char arr[], char brr[]) {
    int i = 0;
    while (brr[i] != '\0') {
        arr[i] = brr[i];
        i++;
    }
    arr[i] = '\0'; 
}
int main(){
    char arr[] = "Hello world";
    char brr[] = "goodbye";
    copy(arr, brr);
    printf("%s\n", arr);
    return 0;
}