#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// sap xep chuoi theo thu tu tang dan
int main(){
    system("cls");

    char ds[7][20] = {"trong", "ngoc", "tri", "thai", "hieu","loi","hung"};
    char temp[20];

    // in ra danh sach ten sinh vien truoc khi sap xep thu tu
    printf("Danh sach ten sinh vien truoc khi sap xep thu tu:\n");
    for(int i = 0; i < 7; i++){
        printf("%2d. %s\n", i+1, ds[i]);
    }

    // sap xep chuoi theo thu tu tang dan
    for(int i = 0; i < 6; i++){
        for(int j = i+1; j < 7; j++){
            if(strcmp(ds[i], ds[j]) > 0){
                strcpy(temp, ds[i]);
                strcpy(ds[i], ds[j]);
                strcpy(ds[j], temp);
            } 
        }
    }

    printf("Danh sach ten sinh vien sau khi sap xep thu tu:\n");
    for(int i = 0; i < 7; i++){
        printf("%2d. %s\n", i+1, ds[i]);
    }

}

