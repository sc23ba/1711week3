#include <stdio.h>
int main(){
    int check = 1;
    while(check == 1)
    {
    check = 0;
    int mark;
    printf("Input percentage mark: ");
    scanf("%d",&mark);
    printf("\n");

    if (mark < 0 || mark > 100)
    {
        printf("Invalid input\n");
    }
    else if(mark >= 70)
    {
        printf("First");
    }
    else if(mark >= 60)
    {
        printf("2:1");
    }
    else
    {
        printf("you got lower than a 2:1");
        check = 1;
    }
    }
    return 0; 
}