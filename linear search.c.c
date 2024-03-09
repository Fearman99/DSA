

#include <stdio.h>
int main()
{
    int a[10], n, key;
    printf("enter size of array(1 to 10)\n");
    scanf("%d", &n);
    printf("enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("enter the element you want to search : ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            printf("found at %dth position", n);
            break;
        }
        else
        {
            printf("not found");
            break;
        }
    }

    return 0;
}
