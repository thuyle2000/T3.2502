#include <stdio.h>
#include <stdlib.h>
// nhap luong CB, bac luong -> tinh phu cap, luong cuoi thang
int main()
{
    int luongCB, luongCT, phuCap;
    char bacLuong;
    char hoTen[30]; // chuoi hoTen[] luu duoc toi da 29 ky tu

    system("cls");
    printf("Nhap ho ten NV: ");     gets(hoTen);
    printf("Nhap luong CB: ");      scanf("%d", &luongCB);
    fseek(stdin, 0, SEEK_END); // xoa bo nho dem ban phim
    printf("Nhap bac luong: ");     scanf("%c", &bacLuong);
    switch (bacLuong)
    {
    case 'A':
    case 'a':
        phuCap = 300;
        break;
    case 'B':
    case 'b':
        phuCap = 250;
        break;
    default:
        phuCap = 100;
        break;
    }

    luongCT = luongCB + phuCap;

    printf("\n >> Bang luong cua NV << \n");
    printf("Ho ten: %s\n", hoTen);
    printf("Luong CB: %d\n", luongCB);
    printf("Bac luong: %c\n", bacLuong);
    printf("Phu cap: %d\n", phuCap);
    printf("Luong CT: %d\n", luongCT);
}