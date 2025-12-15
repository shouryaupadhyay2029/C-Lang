#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    float *marks;
    marks  =(float*)malloc(5*sizeof(float));
    marks[0]=98.5;
    marks[1]=97.0; 
    marks[2]=95.5;
    marks[3]=99.0;
    marks[4]=96.5;
    for(i=0;i<5;i++){
        printf("marks[%d]=%.2f\n",i,marks[i]);
    }
    free(marks);
    return 0;
}