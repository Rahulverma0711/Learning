// Arrays are good but not sufficient for the real world data
// Object store key value pairs
// Objects dont have indices
// Object is a reference type which means it is created in heap memory


//HOW TO CREATE OBJECT
    // let person={
    //     firstName:"Rahul",
    //     age:22
    // };
    // console.log(person);

//HOW TO ACCESS OBJECT PROPERTIES 
    // basically there are two ways to access properties of a object:
    // 1->dot notation 
    // 2->bracket notation

// METHOD 1->DOT NOTATION
    // let person={
    //     firstName:"Rahul",
    //     age:22
    // };
    // console.log(person.firstName);
    // console.log(person.age);

    
//METHOD2->BRACKET NOTATION
    // let person={
    //     firstName:"Rahul",
    //     age:22,
    //     "full name":"Rahul Verma"
    // };
    // console.log(person["firstName"]);
    // console.log(person["age"]);
    // console.log(person["full name"]);

// NOTE:by default the key is passed in string type


// IF WE WANT TO ADD SOME VARIABLE AS PROPERTY NAME IN OBJECT THEN FOLLOW BELOW
// let key="email";
//     let person={
//         firstName:"Rahul",
//         age:22,
//         "full name":"Rahul Verma"
//     };
//     person[key]="imrv@gmail.com";
//     console.log(person); 


// -----------------------------------------------------------------------

// HOW TO ITERATE OVER OBJECTS
// There are two ways to iterate over Objects-> 1) for of loop  2) Object.keys method

// 1) for of loop ->

// let person={
//         firstName:"Rahul",
//         age:22,
//         "full name":"Rahul Verma"
//     };

// for(let key in person){
//     console.log(key);
//     console.log(person[key]);
// }    

// 2) Object.keys()-> This method returns an arrays containing all the keys of the object.
// SYNTAX: Object.keys(ObjectName);

// let person={
//     firstName:"Rahul",
//     age:22,
//     "full name":"Rahul Verma"
// };
// console.log(Object.keys(person));

// const keyArr=Object.keys(person);
// console.log(Array.isArray(keyArr));
 
// for(let key of Object.keys(person)){
//     console.log(person[key]);
// }


// -----------------------------------------------------
// COMPUTED PROPERTIES

const key1="objKey1";
const key2="objKey2";
const val1="value1";
const val2="value2";

// const obj={
//     objkey1:"value1",
//     objKey2:"value2"
// }
//  We need the desired above output 

// const obj={
//     [key1]:val1,
//     [key2]:val2

// };
// console.log(obj);


// We can also use below code .
// const obj={};
// obj[key1]=val1;
// obj[key2]=val2;
// console.log(obj);
// -----------------------------------------------------------------------------------------------------

// SPREAD OPERATOR IN OBJECT

// const newArray=[..."abc"];
// console.log(newArray);

// const obj1={
//     key1:"value1",
//     key2:"value2"
// };

// const obj2={
//     key3:"value3",
//     key4:"value4"
// };
// const newObj={...obj1,...obj2,key69:"value69"};
// console.log(newObj); 

// ---------------------------------------------------------------------------------------------------
// OBJECT INSIDE ARRAY(very useful in real world)

// const users=[
//     {
//         userId:1,firstName:"Rahul",gender:"male"
//     },
//     {
//         userId:2,firstName:"Shristi",gender:"female"
//     }
// ];

// for(let user of users){
//     console.log(user);
// }

// const[{userId:id,gender},{firstName:name}]=users;
// console.log(id,gender);


