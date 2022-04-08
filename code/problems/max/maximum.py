def maximum(first,second,third):
    if second>=first and second>=third:
        return second
    if third>=first and third>=second:
        return third
    return first
print(maximum(1,2,3));
print(maximum(3,4,2));
print(maximum(5,4,3));
print(maximum(2,2,1));

def max_of_array(arr):
    maximum=arr[0]
    for i in arr:
        if i>maximum:
            maximum=i
    return maximum

arr=[1,2,5,4,3]
print(max_of_array(arr))

