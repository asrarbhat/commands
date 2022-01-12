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

        








