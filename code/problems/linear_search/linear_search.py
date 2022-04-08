def linear_search(arr,key):
    for i in range(len(arr)):
        if arr[i]==key:
            return i
    return -1

arr=[2,3,4,1,5,7,77]
for i in range(10):
    print(linear_search(arr,i))
