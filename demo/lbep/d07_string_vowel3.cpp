#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

// dem so luong nguyen am trong chuoi van ban - version 3
int main(){
    system("cls");

    char str[100];
    int count = 0;

    char vowels[] = "aeiouAEIOU";

    printf("Nhap vao chuoi van ban: ");
    gets(str);

    for(int i = 0; i < strlen(str); i++){
        if(strchr(vowels, str[i]) != NULL){
            count++;
        }
    }

    printf("So luong nguyen am trong chuoi van ban la: %d\n", count);
}
