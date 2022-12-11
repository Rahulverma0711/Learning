// function singHBD(){
//     console.log("Happy Birthday to you");
// }
// singHBD();//->function invocation/function call 

// // This is known as function declation;

// function sum(num1,num2){
//     return num1+num2;
// }
// console.log(sum(1,2));

// --------------------------------------------------------------------------------------------------------------
// FUNCTION EXPRESSION->assigning a function to a variable is known as function expression.

// let singHBD=function(){
//    console.log("happy birthday to you");
// };
// singHBD();

// let sum=function(num1,num2){
//     return num1+num2;
// }
// console.log(sum(1,2));
// ----------------------------------------------------------------------------------------------------------------

// ARROW FUNCTION 


// let  singHBD =()=>{
//     console.log("happy birthday");
// };

// let sum=(num1,num2)=>{
//     return num1+num2;
// }

// let sum1=(num1,num2)=>num1+num2;
// console.log(sum1(2,3));
// in the above code if we have to only return something then we can follow the above code.

// let check=num=>num%2===0;
//   if there is only one parameter then we can use the above code.
// console.log(check(4));


// ------------------------------------------------------------------------
// FUNCTION INSIDE FUNCTION 

// const myApp=function(){
//     let insideFun=()=>{
//         console.log("Hello from inside");
//     }
//     console.log("hello from myApp");
//     insideFun();

// }
// myApp();