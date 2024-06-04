if __name__=="__main__":
 mod=(int)(10**9+7)
 t=int(input())
 while t>0:
   n=int(input())
   a=list(map(int,input().split()))
   a.sort()
   ans=0
   for i in range(0,n):
     ans+=i*a[i]
     ans%=mod 
   print(ans)
   t=t-1