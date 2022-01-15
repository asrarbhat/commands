/* 
to run a program in node,you would write a file with extention .js
and put your instructions in it and ask node program to execute it on
your behalf using node filename.js
*/

// printing on console.
// console.log("asalaamualaikum world")

// data types
// let integer=3
// let floatingPoint=3.3
// const string="there is only one"
// const boolean=true

// let p=console.log
// p(integer,floatingPoint,string,boolean)

//js is also dynamically typed language.

// typecasting and taking input 
// let integer=parseInt(3.3)
// let integer1=parseInt("3.3")
// let floating_point=parseFloat("4.4")
// console.log(integer,integer1,floating_point)
// p(Boolean("hi there"))
// p(Number("33.33"))
// p(typeof String(4.4))

// const readline=require("readline").createInterface({
//     input:process.stdin,
//     output:process.stdout
// });

// readline.question("enter a string: ",(string)=>{
//     p(string);
// })

// basic operations

// let a=100;
// let b=200;
// p(a/b,a*b,a+b,a-b,a%b)

// conditionals
// let a=3;
// if (a>=32){
//     p("what")
// }
// else if (a>21){
//     p("up")
// }
// else{
//     p("girl")
// }


// loops
// for(let i=0;i<20;i++){
//     p(i)
// }

// let i=7;
// while (true){
//     p("you are beautiful");
//     if (i==0){
//         break;
//     }
//     i-=1;
// }

// p(factorial(5))//hoisting
// p(factorial(-2))


// function factorial(positiveNumber){
//     if (typeof positiveNumber === "number" &&
//          positiveNumber>=0 && 
//          positiveNumber-parseInt(positiveNumber)===0){
//             result=1;
//             for(let i=1;i<=positiveNumber;i++){
//                 result*=i;
//             }
//             return result;
//     }
//     else{
//         return -1;
//     }
// }
// p(factorial(3.3))


//maps
// let maps={}
// maps["name"]="asrar"
// maps[2]=3
// p(maps)
// p(maps.name)
// p(maps[2])
// p(maps[44])//returns undefined and undefiend is a falsy value.

// maps.get=function(key,def){
//     if (this[key]){
//         return this[key]
//     }
//     return def
// }
// p(maps.get("name",-1),maps.get(44,-1))

// p(Object.keys(maps),Object.values(maps),Object.entries(maps))//even functions are included
// p("name" in maps)
// p("year" in maps) 
// p(delete maps["name"])
// p(maps)

// Arrays
// arr=[]
// arr.push(3)
// arr.push(4)
// arr.push("name")
// p(arr.pop())
// p(arr)
// arr.unshift(3,4)
// p(arr)
// arr.shift()
// p(arr)
// arr.splice(2,0,3,2,3)
// p(arr)
// arr.splice(3,1)
// p(arr)
// arr.sort()
// arr.reverse()
// p(arr.indexOf(3))
// p(arr.length)
// p(Math.max(...arr))
// p(arr.slice(2,4))


// list input
// const readline=require("readline").createInterface({
//     input:process.stdin,
//     output:process.stdout
// });
// readline.question("enter a list: ",(list)=>{
//     output=list.split(" ");
//     p(output)
// })

// 2d arrays
// arr=[
//     [1,2,3],
//     [4,5,5]
// ]
// p(arr)
// p(arr[1])
// p(arr[0][0])

// STRINGS
// let string="hi there"
// p(string)
// p(string.substring(1,7)) //like in python
// p(string[3])
// p(string.replace("hi","what up"))
// p(string.indexOf("hi"))
