#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("The ASCII value of %c is %d\n", ch, ch);
}