arr  =  [10, 5, 20, 8, 15]

print(min(arr))

minValue = float('inf')

for i in range(len(arr)):
    if(arr[i]<minValue):
        minValue = arr[i]
        
print(minValue)

for i in arr:
    if(i<minValue):
        minValue=i
print(minValue)

