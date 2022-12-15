// We can pass even function as an argument .The function which is parameter is called as a CALLBACK FUNCTION.

function fun1(){
    console.log("hello from fun1");
}

function fun(callback){
    console.log(callback);// ->this will output a function .
     callback(); // callback function call 
}
fun(fun1);