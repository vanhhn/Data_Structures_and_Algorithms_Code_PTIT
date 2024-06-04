if __name__=="__main__":
  t=int(input())
  while t>0:
    n=int(input())
    a=list(map(int,input().split()))
    a.sort();
    a1, a2, i1, i2 = 0, 0, 0, 1
    while i1<n:
      a1=a1*10+a[i1]
      i1=i1+2
    while i2<n:
      a2=a2*10+a[i2]
      i2=i2+2
    print(a1+a2)
    t=t-1
