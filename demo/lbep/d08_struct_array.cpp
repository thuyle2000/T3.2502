#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototype cua ham quan ly danh sach sinh vien
void qlSinhVien();

int main(){
    system("cls");
    qlSinhVien();
}

//dinh nghia kieu du lieu cau truc [STUDENT]
struct STUDENT {
    char id[10];
    char name[50];
    int yob;
    float score;
};

void qlSinhVien(){
    int n;
    do{
        printf("Nhap so luong sinh vien [3-10]: ");
        scanf("%d", &n);
    }while (n<3 || n>10);
        
    //khai bao mang cau truc [STUDENT] co n-phan tu
    STUDENT sv[n];

    //nhap thong tin cho n-sinh vien
    for(int i = 0; i < n; i++){
        fseek(stdin, 0, SEEK_END);
        printf("\nNhap thong tin cho sv thu %d\n", i+1);
        printf("nhap ID: ");   gets(sv[i].id);
        printf("nhap ten: ");  gets(sv[i].name);
        printf("nhap nam sinh: "); scanf("%d", &sv[i].yob);
        printf("nhap diem: "); scanf("%f", &sv[i].score);
    }

    //in danh sach sinh vien
    printf("\n\n >> Danh sach sinh vien << \n");
    for(int i = 0; i < n; i++){
        printf(" %-5s", sv[i].id);
        printf(" %-20s", sv[i].name);
        printf(" %4d", sv[i].yob);
        printf(" %6.2f\n", sv[i].score);
    }
}

