#include <stdio.h>
#include <stdlib.h> 
// tinh va in ra tong cua 10 so nguyen dau tien
int main()
{
    system("cls");
    
    int tong = 0;
    for (int i = 1; i <= 10; i++)
    {
        tong += i;
    }
    printf("Tong cua 10 so nguyen dau tien la: %d", tong);
}