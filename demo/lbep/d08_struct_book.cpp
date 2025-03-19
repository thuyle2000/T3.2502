#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototype cua ham quan ly danh muc sach
void qlSach();

int main(){
    system("cls");
    qlSach();
}

//dinh nghia kieu du lieu cau truc [DATE]
struct DATE {
    int day;
    int month;
    int year;
};

//dinh nghia kieu du lieu cau truc [BOOK]
struct BOOK {
    char id[10];
    char title[50];
    char author[50];
    DATE pDate;
    float price;
};

//ham quan ly danh muc sach
void qlSach(){
    int n;
    do{
        printf("Nhap so luong sach [3-10]: ");
        scanf("%d", &n);
    }while (n<3 || n>10);
        
    //khai bao mang ds[] co cau truc [BOOK] gom n-phan tu
    BOOK ds[n];

    //nhap thong tin cho n-sach
    for(int i = 0; i < n; i++){
        fseek(stdin, 0, SEEK_END);
        printf("\nNhap du lieu cho quyen sach thu %d\n", i+1);
        printf(" nhap ID: ");   gets(ds[i].id);
        printf(" nhap ten sach: ");  gets(ds[i].title);
        printf(" nhap ten tac gia: ");  gets(ds[i].author);
        printf(" nhap ngay phat hanh [dd/mm/yyyy]: ");
        scanf("%d/%d/%d", &ds[i].pDate.day, &ds[i].pDate.month, &ds[i].pDate.year);
        printf(" nhap gia: "); scanf("%f", &ds[i].price);
    }

    //in danh muc sach
    printf("\n\n >> Danh muc sach << \n");
    for(int i = 0; i < n; i++){
        printf(" %-5s", ds[i].id);
        printf(" %-20s", ds[i].title);
        printf(" %-20s", ds[i].author);
        printf(" %02d/%02d/%4d", ds[i].pDate.day, ds[i].pDate.month, ds[i].pDate.year);
        printf(" %6.2f\n", ds[i].price);
    }

    //sap xep danh muc sach theo tua sach
    BOOK tmp;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(strcmp(ds[i].title, ds[j].title) > 0){
                tmp = ds[i];
                ds[i] = ds[j];
                ds[j] = tmp;
            }
        }
    }

    //in danh muc sach sau khi sap xep
    printf("\n\n >> Danh muc sach - theo thu tu tua sach<< \n");
    for(int i = 0; i < n; i++){
        printf(" %-5s", ds[i].id);
        printf(" %-20s", ds[i].title);
        printf(" %-20s", ds[i].author);
        printf(" %02d/%02d/%4d", ds[i].pDate.day, ds[i].pDate.month, ds[i].pDate.year);
        printf(" %6.2f\n", ds[i].price);
    }

}