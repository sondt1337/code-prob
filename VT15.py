n = int(input()) 
a = list(map(int,input().split())) 
a.sort() 
print(max(a[0]*a[1]*a[n-1],a[n-1]*a[n-2]*a[n-3]))
