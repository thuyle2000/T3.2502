#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");  // clear screen
    char str[100];
    printf("Nhap ten cua ban: ");
    //gets(str);
    scanf("%[^\n]s", str);
    printf("Chao mung [%s] den voi C++!\n", str);
}