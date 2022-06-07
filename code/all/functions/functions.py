def linear_search(arr,key):
    not_found = -1
    size = len(arr)
    for i in range(size):
        if arr[i] == key:
            return i
    return not_found

arr = [1,3,5,7,8]

for i in range(10):
    print(linear_search(arr,i))
