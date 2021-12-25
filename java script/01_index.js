//1. Ways to print in javascript
// console.log ("Hello world");
// alert("me");
// document.write("this is document write")

//2. Javascript console API
// console.log ("Hello world", 4+6, "Another log");
// console.warn ("this is warning");
// console.error ("this is an error");

//3. Javascript variables
// What are variables? - containers to store data values
var number1  = 34;       
var number2  = 56;
console.log(number1+number2);

//4. Data types in java script
// String
var str1 = "This is a string";
var str2 = 'This is also a string';
// Number
var num1 = 33;
var num2 = 44;
// Objects
var marks ={
    ravi: 34,
    shubham: 78,
    harry: 99.997
}
/*
At a very high level , there are two types of data types in javascript
1. Primitive datatype: undefined,null,numbers,string,boolean,symbol
2. Reference datatype:
 
*/

var arr =[1 , 2 ,"monu" , 5, 9]
// console.log(arr)


// Operators in lavascript
// Airthematic operators
var a = 100;
var b = 20;
console.log("The value of a+b is", a+b);
console.log("The value of a-b is", a-b);
console.log("The value of a*b is", a*b);
console.log("The value of a/b is", a/b);

// Assignment Operators
var c = b;
c += 2; // c=c+2
c -= 2; // c= c-2
c *= 2; // c=c*2
c /= 2; // c=c/2

console.log(c);

// Comprasion Operators
var x =56;
var y =87;
console.log(x==y);
console.log(x>=y);
console.log(x<=y);
console.log(x>y);
console.log(x<y);

// Logoical operators

//Logical And
console.log("true && false");
console.log("true && true");
console.log("false && false");
console.log("false && true");

// Logical Not
console.log("true || false");
console.log("true || true");
console.log("false || false");
console.log("false || true");

// Functions
function avg(a ,b)
{
return (a+b)/2;
}

c1 = avg(4, 6);
c2 = avg(14, 16);
console.log(c1, c2);

// Conditions in javascript

var age =14;
// single if statement
if(age > 18){
    console.log("You can drink rashna water");
}

// If- else statement
if(age > 18){
    console.log("You can drink rashna water");
}
else{
    console.log("You cannot drink rasna water");
}

// If-else ladder
if(age > 32){
    console.log("You are not a child");
}
 else if(age > 26){
    console.log("You are not a baccha");
}
 else if(age > 22){
    console.log("You are no more child");
}
else if(age > 18){
    console.log("You are no more baccha");
}
else{
    console.log("no baccha");
}

// Loops in javascript

var arr = [1,2,3,4,5,6,7];
console.log(arr);
for(var i =0;i<arr.length;i++){
    if(i==2){
        // break;
        continue;
    }
    console.log(arr[i])
}

arr.forEach(function(element){
    console.log(element);
})

// const ac = 0;
// ac++;
// ac = ac +1;
Let j = 0;

while(j<arr.length){
    console.log(arr[]);
    j++
}

do{
    console.log(arr[j]);
    j++;
} while (j < arr.length);







