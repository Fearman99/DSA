#include<stdio.h>
int main()
{
    int a[10],n,t=0,key,j;
    printf("enter size of array(1 to 10)\n");
    scanf("%d",&n);
    printf("enter elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    
    //for(int i=0;i<n;i++)
   // {
   //     printf("%d\n",a[i]);
   // }
    
    for(int i=0;i<n;i++)
    {
        key=a[i];
        j=i-1;
       while(j>=0 && a[j]>key)
       {
        a[j]=a[j+1];
        j=j-1;

       }
       a[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
    printf("%d\n",a[i]);
    }

return 0;
}
