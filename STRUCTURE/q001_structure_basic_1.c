#include<stdio.h>
struct{
	int rn ;
	char name[20];
	char clas[10];
	
}s1;
int main(){
	printf("Enter roll number : ");
	scanf("%d",&s1.rn);
    printf("Enter name : ");
	scanf("%s",s1.name);
	printf("Enter class : ");
	scanf("%s",s1.clas);
	printf("You entered %d %s %s\n",s1.rn ,s1.name ,s1.clas );
    return 0;

}