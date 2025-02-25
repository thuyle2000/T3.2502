#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

// dem so luong nguyen am trong chuoi van ban
int main(){
    system("cls");

    char str[100];
    int count = 0;

    printf("Nhap vao chuoi van ban: ");
    gets(str);

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }

    printf("So luong nguyen am trong chuoi van ban la: %d\n", count);
}
