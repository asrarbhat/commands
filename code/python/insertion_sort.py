def insertion_sort(arr):
    length=len(arr)
    for i in range(1,length):
        for j in range(i):
            if (arr[i-1-j]>arr[i-j]):
                arr[i-1-j],arr[i-j]=arr[i-j],arr[i-1-j]                
    return arr

print(insertion_sort([1,0]))
