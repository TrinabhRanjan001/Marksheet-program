#include <stdio.h>

int main() {
    FILE *red = fopen("datab.txt","r");
    if(red == NULL){
        printf("ERROR");
        return 1;
    }
    int roll;
    printf("Enter roll no.");
    scanf("%d",&roll);
    int rolld,math,science;
    
    char name[100];
    while (fscanf(red,"Roll - %d name - %s math - %d science - %d\n",&rolld,name,&math,&science)==4){


             if(roll == rolld){
                
                printf("Marks found\n");
                printf("Name: %s\n",name);
                printf("math: %d\n",math);
                printf("science: %d\n",science);
                
             }

    }
    printf("rolld - %d",rolld);
    fclose(red);
    return 0;
}
