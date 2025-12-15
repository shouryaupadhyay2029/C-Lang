#include <stdio.h>
struct student {
    char name[50];
    int marks;
};
void update(struct student *s){
    s->marks += 10;
}
int main(){
    struct student s1 ={"shourya", 85};
    update(&s1);
    printf("updated marks %d\n", s1.marks);
    return 0;
}