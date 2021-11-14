n = int(input())
b = [int(x) for x in input().split()]
b.sort()
max1 = b[0] * b[1]  
max2 = b[-1] * b[-2]  
mAx = max(max1, max2)
print(mAx)
