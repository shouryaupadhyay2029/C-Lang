#include <stdio.h>
struct Address {
    char city[20];
    int pincode;
};
struct Student {
    int roll;
    char name[20];
    struct Address add;  
};
int main() {
    struct Student s1 = {1, "Rahul", {"Delhi", 110001}};
    printf("Pincode: %d\n", s1.add.pincode);

    return 0;
}