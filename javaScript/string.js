// String is immutable . 
let firstName="rahul";
let lastName="verma";
// console.log(firstName);
//STRING METHODS
//1->toUpperCase()-this returns a new string with all alphabets as upperCase letter.
//Syntax-> stringName.toUpperCase();

    // let boldString=firstName.toUpperCase();
    // console.log(boldString);

//2->toLowerCase()- this returns a new string with all alphabets a lowerCase letters.    
//Syntax-> stringName.toLowerCase();
    // let smallString=boldString.toLowerCase();
    // console.log(smallString);

//3->trim()-    this return a new string removing the white space.
//              trimStart()-returns a new string removing white spaces from left side;
//              trimEnd()-returns a new string removing white spaces from right side;
    // let trimmedString=firstName.trim();
    // console.log(trimmedString);

//4->concat()- returns a new string concatinated with each other.
//   Syntax->  string1.concat(string2);
    // let concatinatedString=firstName.concat(lastName);
    // console.log(concatinatedString);
// Note: In order to concat a string we can also use '+' operator.

// 5-> slice()-> returns a new string with start index to end-1 index.
//      Syntax-> stringName.slice(startIdx,endIdx);

        // let originalString="building";
        // let slicedString=originalString.slice(0,-3);
        // console.log(slicedString);

//Template String 
    // let templateString=`My name is ${firstName} ${lastName}`;
    // console.log(templateString);        

