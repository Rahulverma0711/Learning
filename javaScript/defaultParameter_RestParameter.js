//  DEFAULT PARAMETERS - lets understand this by an example .

// function addTwo(a,b){
//     return a+b;
// }
// let ans=addTwo(5,4); // output-9
// console.log(ans);

// function addTwo(a,b){
//     return a+b;
// }
// let ans=addTwo(5); // output- NaN  >As only one parameter is passed.
// console.log(ans);

// -------------------------------------------------------------------------------------------------------------------------------

// REST OPERATOR

// function func1(a,b,...c){
//     console.log(a);
//     console.log(b);
//     console.log(c);
// }
// func1(1,2,3,4,5,6);
// //"...c"->will pass it as a array

//-------------------------------------------------------------------

// PARAMETER DESTRUCTURING 

// Lets us destructure object/arrays in the parameter only

// const person={
//     name:"Rahul Verma",
//     age:23
// }

// function func({name,age}){
//     console.log(name);
//     console.log(age);
// }
// func(person);