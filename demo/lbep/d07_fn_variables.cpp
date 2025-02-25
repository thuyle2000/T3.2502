#include <stdio.h>
#include <stdlib.h>

//viet chuong trinh demo ve bien cuc bo va bien toan cuc
int x = 10; // bien toan cuc
void fn();

int main()
{
    system("cls");

    int x = 20; // bien cuc bo
    printf("main(): Bien cuc bo x = %d\n", x);
    printf("main(): Bien toan cuc x = %d\n", ::x);

    fn();
    printf("\n >> Sau khi goi ham fn()\n");

    printf("main(): Bien cuc bo x = %d\n", x);
    printf("main(): Bien toan cuc x = %d\n", ::x);
}

void fn()
{
    int y = 2;
    x *= 5; // bien toan cuc
    printf("fn(): Bien toan cuc x = %d\n", x);
}