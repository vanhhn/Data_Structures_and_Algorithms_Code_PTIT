global res,n,k,s,x
def init():
  global x,res
  res=0
  x=[0]*100
  
def nextCombination(i):
  global res 
  for j in range(1+x[i-1],n-k+i+1):
    x[i]=j
    if i==k:
      tmp = sum(x[1:k+1])
      if tmp==s:
        res+=1 
    else:
      nextCombination(i+1)

if __name__=="__main__":
  while True:
    n,k,s=map(int,input().split())
    if n+k+s==0:
      break
    init()
    nextCombination(1)
    print(res)


