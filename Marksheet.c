// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int roll,math,science,max_num;
    char name[100];
    printf("Num of students\n");
    scanf("%d",max_num);
for(int i = 0; i <= 1;i++)
   {
    FILE *fpt = fopen("datab.txt", "a");
    if (fpt == NULL)
    {
        return 1;
    }
    
    printf(" Roll no\n");
   scanf("%d",&roll);
   printf(" Name\n");
   scanf("%s",&name);
   printf(" math\n");
   scanf("%d",&math);
   printf("Science\n");
   scanf("%d",&science);
   fprintf(fpt,"Roll - %d ",roll);
   fprintf(fpt,"name - %s ",name);
   fprintf(fpt,"math - %d ",math);
   fprintf(fpt,"science - %d \n",science);
   fclose(fpt);
   }
    return 0;
}