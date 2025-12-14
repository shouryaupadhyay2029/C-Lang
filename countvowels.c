#include <stdio.h>
int countvowels(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        char ch = arr[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            count++;
        }
    }
    return count;
}
int main (){
    char word[100];
    printf("Enter a string: ");
    fgets(word, sizeof(word), stdin);
    int v= countvowels(word);
    printf("Vowel count: %d\n", v);
    return 0;
}