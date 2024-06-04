if __name__=="__main__":
  t=int(input())
  a=[1, 2, 5, 10, 20, 50, 100, 200, 500, 1000];
  while t>0:
    s=int(input())
    ans=0
    for i in range(9,-1,-1):
      ans+=s//a[i];
      s%=a[i]
    print(ans)
    t=t-1
