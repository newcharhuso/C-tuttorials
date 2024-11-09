#include <stdio.h>

int get_new_number()
{
    int a;
    printf("Enter new number, enter 0 for finalizing the operation: ");
    scanf("%d", &a);
    return a;
}

void main()
{
    int sum = 0;
    while(1)
    {
        int new_num = get_new_number();
        if (new_num != 0)
        {
            sum += new_num;
        }
        else
        {
            printf("%d",sum);
            break;
        }
    }
}