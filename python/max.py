arr  =  [10, 5, 20, 8, 15]

print(max(arr))

maxValue = float('-inf')

for i in range(len(arr)):
    if(arr[i]>maxValue):
        maxValue = arr[i]
        
print(maxValue)

for i in arr:
    if(i>maxValue):
        maxValue=i
print(maxValue)