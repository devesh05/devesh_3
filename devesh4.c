#include <stdio.h>
 
void main()
{   
    int i,a[10],min,n,j,swap;
   printf("enter the size of array\n");
    scanf("%d",&n);
   printf("enter the elements of array\n"); 
    for(i=0;i<n;i++)
    { scanf("%d",&a[i]);
    }
    
   for (i = 0; i < n-1; i++)      
 
    {
       for (j = 0; j < n-i-1; j++) 
         {
		     if (a[j] > a[j+1])
              {
			  swap=a[j];
              a[j]=a[j+1];
              a[j+1]=swap;
             }
          }
   }
   for(i=0;i<n;i++)
   {printf("%d",a[i]);
   }
   
}
