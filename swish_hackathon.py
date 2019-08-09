a = [int(i) for i in input().split(' ')]
while(a[0] != 0):
  y = a[0]
  a[0] = ((a[1] // 100) * a[0])
  if(a[0] ==0):
    break
print(y)
