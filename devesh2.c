#include <stdio.h>
 
void main()
{   
    int i,a[10],max,n;
   printf("enter the size of array\n");
    scanf("%d",&n);
   printf("enter the elements of array\n"); 
    for(i=0;i<n;i++)
    { scanf("%d",&a[i]);
	}
	max = a[0];
	 for (i = 1; i < n; i++)
       {
		if (a[i] > max)
            max = a[i];
        }
    printf("%d", max);
}
