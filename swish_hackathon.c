#include <stdio.h>
void main()
{
  int i,y,a[2];
  for(i=0;i<2;i++)
  {
    scanf("%d",&a[i]);
  }
  while(a[0] != 0)
  {
    y = a[0];
    a[0] = ((a[1] / 100) * a[0]);
    if(a[0] == 0)
    {
      break;
    }
  }
  printf("%d",y);
}
