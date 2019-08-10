#include <stdio.h>
void main()
{
  int i,y=0,a[2];
  for(i=0;i<2;i++)
  {
    scanf("%d",&a[i]);
  }
  while(a[0] != 0)
  {
    y += a[0];
    a[0] = (a[1] * a[0])/100;

  }
  printf("%d",y);
}
