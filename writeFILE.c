#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("filehandling.txt", "w");
    printf("FILE HANDLING IN C\n",fp);
    fclose(fp);
    return 0;  

}