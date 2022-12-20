// We can pass even function as an argument .The function which is parameter is called as a CALLBACK FUNCTION.

// function fun1(){
//     console.log("hello from fun1");
// }

// function fun(callback){
//     console.log(callback);// ->this will output a function .
//      callback(); // callback function call 
// }
// fun(fun1);

// // ----------------------------------------------------------

// FUNCTION RETURNING FUNCTION 
//  In JS we can also return the function from function .

// function myfunc(){
//     function hello(){
//         return "hello World";
//     }
//     return hello;
// }
// const ans=myfunc();
// console.log(ans());


// NOTE:-   function returning function or passing function as an argument is known as
// higher order function.