aman dattarwal

lecture 1:
    zeros and ones is mere a convention,we could have gone for trinary.
    binary is simpler.

    we can use flow charts to describe an algorithm.
    or use pseudocode.

    #include<iostream>
    using namespace std;

    int main(){
        #ifdef ONLINE_JUDGE
            freopen("input.txt","r",stdin); //takes input from input.txt
            freopen("output.txt","w",stdout); // puts output in output.txt
        #endif

        int a,b;
        cin>>a>>b;
        cout<<a+b<<"\n";

        return 0;
    }

    //hour gass =>that shesha and raith


lecture 2:
    use c/c++ extention in vscode
    and use code runner extention

lecture 3:
    varaibles are memory locations that we want to make changeable
    constants are ones that we do not want to changeable

    data types
        primitives:
            integers,floats,characters,booleans
        derivated:
            derived from primitives like arrays,pointers,references,functions
        user-defined:
            class,struture,union,enum
        

        integers can be signed or unsigned.

        floats upto 7 digits of precision
        doubles upto 15 digits of precision

        character are 1 byte
        characters are ints underneath.


        int a; //varaible declration
        a=12; intialization
        
        sizeof(a)
        sizeof(b)

        type modifiers
         int by defualt is signed
         we can use modifiers like signed,unsigned,long,short
         short is 2 bytes
        

        short int li;
        long int li;

        #include<iostream> preprocessor directive, used to include files
        although those files only contain the prototypes of functions

        main is the entry point of our program.

        to print
            std::cout<<"hello there\n";
            return 0;//this is the exit code of our program

        std=>standard

        using namespace std;
        telling which namespace we are using

        cin>>amount1; //insertion operator.

        for(intialization;condition;update){

        }

        do{


        }while(condition);

        switch are substitute to long if else statements
        if has to be int or character

        given operators the output is always of type which is more expressive.

        i++ + ++ k   spaces matter here.

Lecture 4:

LECTURE 5:
    decimal to binary:
        divide by 2 and keep the remainer,recursively and 
        remainers in reverse are the numbers required
        makes sense:
            if you check on pen and paper it starts to make sense
            and can be used for any number system
            although how you would do it is 
            decimal= base(some number)+ remainder
            decimal= base( base * some other number + another ramainder)+ remainder
            decimal = base squared * some other number + base times another ramainder + remainder
            

            i got the idea
        from any other to decimal is easy just multiply way.
    

LECTURE 6:
    FUNCTIONS:

        return Type function name (parameter1,parameter2){
            return value
        }

        int add(int n1,int n2){
            return n1+n2;

        }

        int x=add(3,4)

        to a function things are always passed by value.
        all that matters is what is that value.

    functions are put in call stack.

    stack frame => function in stack

    if x==true basically true is the keyword

    #include<math.h>
    now use sqrt(num)

LECTURE 8
    ARRAYs:
        homogenous.

        int array[4]={1,2,3,4};
        if no intialization, the values could be random.
        if any one intialized rest will be 0,i guess.

        int arr[4];
        arr[0]=3;
        cout<<arr[3];

        float arr[n] where we can take n as input.
        we can use for loop to take input,same for output.

        built in function.
        max(n1,n2) 
        min(n1,n2)

        cin>>n;

        for binary search using iteartion
        we use while(left<=right)
            and mid is (left+right)/2
            shift + (  for put selected text in such.
        

LECTURE 9:
    2d ARRAYS:
        int arr[n][m];
        bool arr[n][m];
        arr[i][j]=77
    
    use 2 for loops to do stuff.

    to do a transpose of a matrix,just write a function 
    that takes indexes and returns j i instead of i j
    no need to do anything to data.

    in character array 
        use char arr[n+1] for n elements as last one would be /0 null
        to check end of a sentence
    
    char arr[100]="apple";
    arr[i]=33;
    while (arr[i]!='/o'){

    }
    to take input

    cin>>arr; //to take string
    cout<<arr; //to print the string.

lecture 11:
    POINTERS:
         variabes whose value is someone else addreses in memory.
         and can be used to maniputate.

    int a;
    int *ptr; //pointer to int.
    ptr=&a; where &a returns the address,it is like a function.or infact a function.
    cout<<&a;
    cout<<ptr;
    cout<<*ptr; // * is indirection operator //derefence
    
    best use is to modify data using function,without taking whole data
    as input.

    *ptr=20;

    pointer arithmatic.
     increment ptr+1 //adds size of that kind the value it takes
     decrement ptr-1
     in array we can subtrack pointers can well
     it returns number of elments between them.

     char *ptr;

     name of array is pointer to its first element/zeroth element
     and it cannot be modifed.

     *arr would be the first element.

     int *ptr=arr;
     now we can use ptr to traverse the array,using ptr++ etc

     or use *(arr+1)

     arr is a constant pointer.

     i think i understand how pointers work in n dimentional system
     name points to first element of type n-1 dimetions.

     we can make pointer to a pointer.
     int **p;
     p=&ptr;

     similarly **p; to get the value of that 

     passing pointer to a function
        int func(int *ptr,int b)
    
    if returning pointer from a function make sure the memory that it points 
    to is in heap and not in stack.

    we always pass by value,it all depends on what that value is.

    func(int *a,int *b)
    funct(&a,&b)

    recursion can cause stackoverflow as stack size is fixed.

    heap is dynammic,can be as big as virtual memory.

    int a=10; stores in stack
    int *p=new int(); //stores in heap
    *p=20;
     delete(p); to free it.
     int *p=new int[4]; //exception if allocation fails.
     foo =new (nothrow) int[5];to assign instead instead of exception
     if foo==nullptr{}
     can use p[0] to access as well
     delete[]p; //to free memory
     p=NULL;//to set to NULL

    delete ptr;for one value
    delete[] ptr;for an array
    ptr=new int;
    to intitiize as well
    ptr=new int(5);,new float(32),
     memory is not deallocated automatically here.


strings:
    in strings no need to know the size
    character arrays are static in memory
    basically string is a class that makes things easier.

    #include<string>

    string str;
    cin>>str;
    cout<<str;

    different ways to declare
    string str1 {5,"n"}; same as nnnnn
    sting str="hello there";

    but if spaces also
    getline(cin,str);

    cin only read one token.

    different string functions.
    s1.append(s2) appends to str1
    s1+s2 doesn't modify but returns the concatenation.
    although we can assign it to s1
    to get characters 
    s[1]

    s.clear() makes it empty string.



OOPS:
    
    class student{
        string name;//data member/atributes
        int age;
        bool gender;
    };

    student a; //to create an object.
    student b;
    a.name="hiter"
    a.age=true;

    put class above main 
    and create objects in main

    by default attributes are public 

    to make them public
    public:
        string name;
    
    can make the array
    student arr[3];
    arr][i].name;

    to add methods.

    in class
    void printInfo(){
        cout<<name;

    }
    can even access private members in these methods.

    obj.printInfo();

    constructor
        add method
        student(string name){

        } //no return type 

        the default constructor student(){}
    now in main 
    student a("hi there")


MODERN C++ 2018;
-------------------------------

LECTURE 1: INTRODUCTION AND BASICS
    
    c++ has changed in recent years.
    in this course we are not going to start from c.

    OpenCV is a computer vision library even insdusty uses it.

    c++ is most used systems language

    c++11 is a modern languague
         it is almost entirely new langauge.
        
    top 500 super computers use linux.

    there is no backup/trash when using terminal,deletions are permanent

    within c++,there is much smaller and clearner langauge
    struggling to get out.
            Bjare Stroustrup.

    #include<iosteam>

    int main(){
        std::cout<<"hello world"<<std::endl;
        return 0;
    }

    comments and whitespaces are ignored in c++,
    one white space as as good and hundred. /* */ or //
    as the parser is designed to ignore white spaces.

    to format your code 
        use clang_format to format your code.
        code is very often read than run.
        hence good code style is really good.
        use cpplint to check the style,this tool is provided by google
        Google code style sheet is good for c++

    main is a function that returns an error code,
        error code 0 means OK
        error code can be [1,255]
        same as the codes you see in terminal.
        to see if program executed with success or what error it found.

    #include directives
    two variants:

        #include <file> system includes files
        #include "file" local include files

        it copies the content of file into the current file.

        #include "some_file.h"

        it can be any file.

        the copying happens before compilation.

        it is used for modularity and clean coding and eventually whole is added up.
    
    I/0 streams for simple input and output

    HANDLE stdin,stdout and stderr;

    std::cin maps to stdin
    std::cout maps to stdout
    std::cerr maps to stderr

    #include<iostream> to use I/0 streams 
    part of c++ library

    std::cin >> some_number;
    std::cout<<"hello world";
    std::cerr<<"boring error"<<std::endl;

    using gcc compiler,there is a compiler in windows,Clang is new and better compiler.
        c++ -std=c++11 -o hello_world hello_world.cpp  ,here c++ maps to systems c++ compiler you can use g++ which is real binary or use Clang 
        ./hello_world
    
    temp folder in your linux gets deleted everytime you start a new power on.

LECTURE 2: VARIABLES,BASIC TYPES,CONTROL STRUCTURES.
    type name value;
    every variable has a type as c++ is typed langauge.
    the variables are not automatically initialized unlike java.
    always initialize the variables.
    
    int a;
    use snake_case as per google styles
    all lowercase,underscore to separate the words.
    c++ is case sensitive.

    bool this_is_fun=false;
    chaer carret='\n';
    int hi=32;
    short s=32;
    long l=32;
    float f-3.3f;
    double d=0.1;
    auto s=3; int by default
    auto s=3.3f float type  because of f
    auto d=3.3 now is double

    auto is new addition is c++11, auto is nice thing.

cppreference.com for any kind of problem

    operations.
        +,-,/,*,>,>=,<,==
        for relational output is bool
        +=,-= etc also

    avoid == for floats,you know why. there is some imprecision,it might backfire.
    use some episilon instead.

    || ,&& , ! booelan operators.

    increment ++
    decrement --
    you can assign boolean expression to a bool variable.
    / gives output in most expressive type.think of it as a function that return float if 
    any of the two is float.
    % is for integers.

    do not use increment or decrement in an expression,it is very bad practise.
    the point of increment decrement is only because we sometimes use it to increment by
    one or decrement by one very commonly.


    STRINGS:
        #include<string>
            it is part of the standard library
            to use std::string
        + for concatenation.
        str.empty() to see if it is empty.

        std::string hello="Hello";
        std::cout<<hello;
        std::cin>>hello; reads one toke only.

        getline(cin,hello); for multiple tokens.

    ARRAYS:
        #include<array>
        to use std::array
        store a collection of items of same type

        array<float,3> arr={1.0f,2.0f,4.0f};
        to access arr[2];
        to remove all arr.clear();
        arr.front() is same as arr[0]
        arr.back() ==arr[arr.size()-1]

    VECTOR : the main time of c++
        #include<vector> to use std::vector
        it is implemented as a dynamic table
        to access we use indexing like the arrays.
        vec.emplace_back(value) preffered in c++11 instead of vec.push_back(value)

        it is dynamic in nature.

        std::vector<std::string> vec;
        vec.reserve(100) //it will reserve memory for these many items in advance.
        vec.emplace_back("hello");

        using namespace std;
            to avoid using std:: everytime.
        vector<int> vec={1,2,3};
        cout<<vec.front() <<vec.back()
        to print first and last element in vector.

        can use push_back or emplace_back to add elements.
        
        c++ -std=c++11 -Wall -o main main.cpp 
        always us Wall flag to see warnings as well as c++ can be dangerous with errors.

        read errors from the top.

        vec.size() to get length of the vector.

        if a lot of pushbacks needed use reserve

        there is a single global scope.
        local scope starts with {} 
        all variables belong to a scope.
        all variables die in the end of their scope.
        you can create a scope simply by using
        {

        }
        no need for if else or a function.

        using namespace std; brings all variables in that namespace to your scope.

        or use
        using std::cout;
        using std::cin;
        now use cin,cout directly.it is better don't bring all variables.

        const int x=10;
        if you want constants.
        it can be used with any type.
        googel suggests camelCase for constants.
        const std::string kHello="hello";

        declare everything as constant only make variable when you know it is to change.
        it is called defensive programming.


        REFERENCES TO VARIALBES.
            we can create a reference to any variable
            use & to state that a varaible is a reference.
            float& ref=orignal_number;
            std::string& refer=hello;

            reference is part of type:
                variable ref has type float&
            whatever happens to reference happens to variable and vice versa.
            yields performance gain as references avoid copying data.

            it is an abstracion on pointers.
            you can only assign R-vale to a reference=>something that can sit on the right side of assignment.
            you can even print the reference and it will print the same thing.

            prefer to use references over pointers.

            references are great for performance gain.as there will be no copying.
            if big data it will be expensive.

            references are fast but reduce control.
            const float& ref =orignal_number;
            const std::string& hello_ref=hello;
            we use { in same line in c++
            
            in switch it has to be int,char,bool,enum etc only

            ++i is faster than i++

            range for loop in c++:
                iterating over a standard container like aray or vector
                to avoid index mistakes
                in c++11
                for(float/auto value : vec){ its like for item in vector

                }

                can use for(const auto& num: vector)

                const flaot& means using this reference we cannot change value,
                the reference itself can refer to other value as well.

                can use for strings as well to go through character by character

                all c libraries have c++ version of them prefixed with C 
                eg math.h  to cmath without h
                   stdio.h to cstdio
                   stdlib.h to cstdlib
                
we no longer use .h with c++,well they don't need to be files,the code could be in
the compiler itself.an implementation can provide standard headers however it wants.
.h in c is used to differentiate header files from txt etc

LECTURE 3:
    
    














