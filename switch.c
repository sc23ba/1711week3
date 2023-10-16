#include <stdio.h>
int main()
{
    int a;
    printf("choose one option ");
    scanf("%d", &a);
    

    switch (a) //a is the subject of the comparisons 
    {
        case 0: 
        printf("option 0 has been selected\n");
        break;

        case 1: 
        printf("options 1 has been selected\n");
        break;

        default: 
        printf("A different option has been selected\n");
    }
}