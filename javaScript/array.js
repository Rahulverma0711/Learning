
//array is a reference type data structure
// here in stack address of the array is stored whereas in heap the array is stored.
// when we assign a array2=array1 this means array2=ox11(address of array1) and
//  when we try to make change using variable array2 changes in array1 is also reflected.

    // let array1=["item1","item2"];
    // let array2=array1;
    // array2.push("item3");
    // console.log(array1);
    // console.log(array2);


///clone an array 

// Method1->assignment consider above example

// Method2-> slice()->this returns a new array
    // let array1=["item1","item2","item3"];
    // let array2=array1.slice(1);
    // console.log(array2);

    
//Method3-> concat() method
    // let array1=["item1","item2","item3"];
    // let array2=[].concat(array1);
    // console.log(array2);

// Method4-> spread operator
// Syntax: let anotherArray=[...arrayName];
    // let array1=["item1","item2","item3"];
    // let array2=[...array1];
    // console.log(array2);
    

//TYPES OF LOOPS IN ARRAY
// Method 1-> simple for loop
// let array=["item1","item2","item3"];
// for(let i=0;i<array.length;i++){
    //     console.log(array[i]);
    // }

// Method 2-> for of loop 
    // let array=["item1","item2","item3"];
    // for(let item of array){
    //     console.log(item); 
    // } 
    // here item will return element   
    
//Method 3-> for in loop   
    // let array=["item1","item2","item3"];
    // for(let item in array){
    //     console.log(item);
    //     console.log(array[item]);
    // }
    // // here item will return index number



//Array destructuring->shorthand to assign elements  of the arrays to a variables

    // let array=["item1","item2","item3"];
    // let[var1,var2]=array;
    // console.log(var1);
    // console.log(var2);

//if we want to assign some elements to variables and rest of the elements to new array then we can follow the simple procedure given below
    // let array=["item1","item2","item3","item4"];
    // let[var1,var2,...anotherArray]=array;
    // console.log(anotherArray);
