let myVar="Rahul";
const myApp=function(){
    // let myVar="Rahul";
    function myfunc(){
        // let myVar="Shristi";
        console.log(myVar);
    }
    // console.log(myVar);
    myfunc();
}
myApp();


// NOTE: Lexical Scope means agar ekk variable function k andar nahi hai to wo uske upar wala function jaha se call kiya gya hai 
// wo waha khojega ..waha nhi mila to uske upar wala m jayega
