#include <stdio.h>
 
void main()
{   
    int i,a[100],n,j;
   printf("enter the size of array\n");
    scanf("%d",&n);
   printf("enter the elements of array\n"); 
    for(i=0;i<n;i++)
    { scanf("%d",&a[i]);
    }
    j=n/2;
    printf("%d",a[j]);
}
