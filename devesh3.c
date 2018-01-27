#include <stdio.h>
 
void main()
{   
    int i,a[10],min,n;
   printf("enter the size of array\n");
    scanf("%d",&n);
   printf("enter the elements of array\n"); 
    for(i=0;i<n;i++)
    { scanf("%d",&a[i]);
	}
	min = a[0];
	 for (i = 1; i < n; i++)
       {
		if (a[i] < min)
            min = a[i];
        }
    printf("%d", min);
}
