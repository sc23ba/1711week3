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
        check = 1;
    }
    else if(mark >= 70)
    {
        printf("First\n");
    }
    else if(mark >= 60)
    {
        printf("2:1\n");
    }
    else if(mark >= 40)
    {
        printf("pass\n");
    }
    else
    {
        printf("fail\n");
        
    }
    }
    return 0; 
}