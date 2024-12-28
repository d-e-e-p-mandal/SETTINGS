#include<stdio.h>

struct student {
int roll;
char name[20];
char class[10];
} s1[5];


int main()
{int i;
struct student p;
    for(i=0; i<5;i++){
        printf("Enter roll of student %d : ",i+1);
        scanf("%d", &s1[i].roll);
   
        printf("Enter name of student %d: ",i+1);
        scanf("%s", s1[i].name);
   
        printf("Enter class of student %d: ",i+1);
        scanf("%s", s1[i].class);
    } 
   for(i=0;i<5;i++){
        printf("\nYou entered Roll no : %d",s1[i].roll);
        printf("\nYou entered name    : %s",s1[i].name);
        printf("\nYou entered class   : %s\n",s1[i].class);
    }
   p=s1[0];
   printf("%d",p.roll);
    return 0;
}