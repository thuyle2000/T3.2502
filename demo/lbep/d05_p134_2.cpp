#include <stdio.h>
#include <stdlib.h>
//kiem tra tich so a*b >= 1000 hay khong
int main()
{
    system("cls");
    
    int a, b;
    printf("Nhap so nguyen a: ");     scanf("%d", &a);
    printf("Nhap so nguyen b: ");     scanf("%d", &b);
    if (a * b >= 1000)  {
        printf("tich a*b >= 1000");
    }
    else {
        printf("tich a*b < 1000");
    }
}