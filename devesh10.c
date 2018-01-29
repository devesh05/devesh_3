#include <stdio.h>
void main()
{ int h=0,h1,m1,h2,m2,m=0,d=0,e=0,n,temp;
  printf("enter the  first time in hours and mins ");
  scanf("%d%d", &h1,&m1);
  d=(h1*60)+m1;
  printf("enter the  second time in hours and mins ");
  scanf("%d%d", &h2,&m2);
  e=(h2*60)+m2;
  
  n=d-e;
  temp=n;
  
  h=temp/60;
  
  m=n-(h*60);
  
  printf("%d %d\n",h,m);
 
}
