#include <stdio.h>

int main()
{
    int check = 0;
    int a;
    printf("
    1. print 1\n
    2. print 2\n
    3. print 3\n
    4. print 4\n
    5. close");

    printf("Input option: ");
    scanf("%d",&a);
    if(a == 1)
    {
        printf("1");
    }
    else if(a == 2)
    {
        printf("2");
    }
    else if(a == 3)
    {
        printf("3");
    }
    else if(a == 4)
    {
        printf("4");
    }
    else if(a == 5);
    {
        check = 1;
    }
    return 0;
}
