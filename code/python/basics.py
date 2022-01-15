"""
to run a python program,you create a .py file and write your code directly in it,
starting with first instruction from first line,without any main function,because
thats how python is designed. 

once done,you need to run and to run it you use python3 interpretor installed in
your computer.
    python3 file.py

GO CRAZY!!!
"""

##PRINTING TO CONSOLE
# print("asalaamualaikum world ")

# #DATA TYPES
# integer=33
# floating_point=3.33
# string="hello there"
# boolean=True
# complex_number=2+4j

# #python automatically figures out the type,it is dynamically typed and the type of variable can change as everything is an object/reference,even ints are objects of class <int>

# print(integer,floating_point,string,boolean,complex_number)

# #TYPECASTING AND TAKING INPUTS.
# integer=int(input("enter an integer: "))
# floating_point=float(input("enter a float: "))
# string=str(input("enter a string: "))
# boolean=bool(input("enter a boolean: "))#if string is False the value would still be True
# complex_number=complex(input("enter a complex number: "))
# print(integer,floating_point,string,boolean,complex_number)

# #for typecasting use int(),float(),str(),bool(),complex()

# #basic operations
# a=200
# b=30
# print(a/b,a//b,a+b,a-b,a*b,a%b)

# #CONDITIONALS:
# a=-99
# if a>=30:
#     print("what")
# elif a>15:
#     print("up")
# else:
#     print("girl")


# #LOOPS //with loops comes off by one error
# for i in range(20):
#     print("hello",i,sep='->')

# i=7
# while True:
#     print("you are beautiful")
#     if i==0:
#         break
#     i-=1

#print(factorial(3)) there is no hoisting in python
# def factorial(positive_integer):
#     if isinstance(positive_integer,(int)) and positive_integer>=0:
#         result=1
#         for i in range(1,positive_integer+1):
#             result*=i
#         return result
#     else:
#         return -1

# for i in range(20):
#     print(factorial(i))
# print(factorial(0))
# print(factorial(-1))
# print(factorial(-2))

#MAPS
# map={}
# map["name"]="rayon"
# map[2]=3
# print(map)
# print(map[2])
# print(map["name"])
# # print(map[44]) #key error
# print(map.get(77,-1))
# print(map.get("name",-1))#same as getOrDefault in Java
# print(map.keys(),map.values(),map.items())
# print("name" in map.keys())
# # print("name" in map)
# print(list(map.values()))
# print(77 in map)#to check if key is there in the dict
# print(map.pop("name")) #key error if not there
# print(map.pop("name","not found"))

# arr=[]
# arr.append(3)
# arr.append(4)
# arr.append("name")
# print(arr)
# print(arr.pop())
# print(arr)
# arr.insert(0,22)
# arr.insert(-2,77)
# print(arr)
# print(arr.pop(0))
# print(arr)
# arr.remove(3)
# print(arr)
# arr.sort()#inplace
# print(arr)
# arr.reverse()
# print(arr)
# print(max(arr))
# print(min(arr))
# print(len(arr))
# arr.sort(reverse=True)
# print(arr)
# print(arr[1:])

# #list input
# list_of_integers=[int(x) for x in input("enter list: ").split()]
# print(list_of_integers)

#2D arrays
# arr=[
#     [1,2,3,4],
#     [5,6,7,8],
#     [9,0,1,2]
# ]
# print(arr)
# print(arr[2])
# print(arr[0][1])

# STRINGS:
# string="hi there"
# print(string)
# print(string[2:])
# string+= " world"
# print(string)
# print(string[::-1])
# print(string.split())
# print(string[2])
# print(string.replace("hi","what up"))
# print(string.index("world"))