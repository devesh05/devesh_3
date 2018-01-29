#include <stdio.h>
void main()
{ int h=0,n,m=0,temp;
  printf("enter the time in min ");
  scanf("%d", &n);
 
  temp=n;
  
  h=temp/60;
  
  m=n-(h*60);
  
  printf("%d %d\n",h,m);
 
}
