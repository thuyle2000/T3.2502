#include <stdio.h>
#include <stdlib.h>
// tinh tong i va j 
int main()
{
    system("cls");
    
    int max;
    printf("Nhap so nguyen duong max: ");     scanf("%d", &max);
    int tong = 0;
    for (int i = 1, j = max; i <= max; i++, j--)
    {
        printf(" %2d + %2d = %2d \n", i, j, i+j);
    }
}