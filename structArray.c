#include <stdio.h>
struct student {
    int roll;
    char name[50];
    float marks;
};

int main(){
    struct student Iiot[3] = {
        {1, "shourya", 85.5},
        {2, "piyus", 90.0},
        {3,"aditya", 78.5},
    };
    for (int i = 0; i < 3; i++) {
        printf("%d, %s,%.2f\n", Iiot[i].roll, Iiot[i].name, Iiot[i].marks);
    }
    return 0;

}
