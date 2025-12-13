#include <stdio.h>
void namaste();
void printtable();
int main(){
    namaste();
    printtable();
    return 0;
}
void namaste(){
    char ch;
    printf("enter i for indian and f for french:\n");
    scanf("%c", &ch);
    if(ch=='i'){
        printf("namaste");
    }
    else if(ch=='f'){
        printf("bonjour");
    }
    else{
        printf("hello\n");
    }
}

void printtable(){
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d\n ",i*n);
        }
    }
