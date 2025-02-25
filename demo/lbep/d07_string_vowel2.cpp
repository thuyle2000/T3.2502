#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

// dem so luong nguyen am trong chuoi van ban - version 2
int main(){
    system("cls");

    char str[100];
    int count = 0;

    printf("Nhap vao chuoi van ban: ");
    gets(str);

    for(int i = 0; i < strlen(str); i++){
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
            break;
        
        default:
            break;
        }
    }

    printf("So luong nguyen am trong chuoi van ban la: %d\n", count);
}
