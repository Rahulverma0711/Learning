// We can pass even function as an argument 

function fun1(){
    console.log("hello from fun1");
}

function fun(callback){
    console.log(callback);// ->this will output a function .
     callback();
}
fun(fun1);