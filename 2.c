#include <stdio.h>
#define pi 3.14

int main() {
int side;
    printf("enter the side of sqaure :");
    scanf("%d",&side);
    printf("area of sqaure is: %d\n", side*side);


    int s1,s2;
    printf("enter the s1 and s2:");
    scanf("%d",&s1);
    scanf("%d",&s2);
    printf("area of rectangle is: %d\n", s1*s2);

    
    int radius;
    printf("enter the radius of sphere:");
    scanf("%d",&radius);
    
    int volume;
    volume=(4/3)*pi*radius*radius*radius;
    printf("volume of sphere is: %d\n",volume);

    


    return 0;
}