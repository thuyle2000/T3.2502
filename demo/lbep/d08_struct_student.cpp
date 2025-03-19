#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//dinh nghia kieu du lieu cau truc [STUDENT]
struct STUDENT {
    char id[10];
    char name[50];
    int yob;
    float score;
};

int main(){
    system("cls");
    STUDENT s;
    printf("Enter student's ID: ");    gets(s.id);
    printf("Enter student's name: ");    gets(s.name);
    printf("Enter student's year of birth: "); scanf("%d", &s.yob);
    printf("Enter student's score: ");   scanf("%f", &s.score);

    printf("\n\nStudent's information:\n");
    printf("Student's ID: %s\n", s.id);
    printf("Student's name: %s\n", s.name);
    printf("Student's year of birth: %d\n", s.yob);
    printf("Student's score: %.2f\n", s.score);
}