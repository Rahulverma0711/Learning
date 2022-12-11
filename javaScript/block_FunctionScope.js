// NOTE:- Let and const are  BLOCK scoped.
//        var is a FUNCTION scoped.
//        BLOCK is nothing but everything inside curly braces{ }.

// {
//     let firstName="Rahul";
//     console.log(firstName);
// }

// {
//     let firstName="Shris";
//     console.log(firstName);
// }

// Here observe firstName is two different variables as these two are in two different  block. If we try to access some variables 
// outside the scope then it will throw error .


// ---------
//  In case of var it will not throw error.
function func(){
      var firstName="Rahul";
      console.log(firstName);
}
func();
console.log(firstName); //this line will give error .
// ------