let getInt = a => a + 8;

// block
let getIntInBlock = a => {
  a + 8;
};

Js.log(getInt(76));
Js.log(getIntInBlock(6));

let getInts = (a, b) => a + b;
Js.log(getInts(6, 4));

// after passing only one argument it waites fo the second one
let curried = getInts(8);
Js.log(curried);
let result = curried(4);
Js.log(result);

// changes in global variable wont change its value in the function that uses it
Js.log("##########");
let x = 10;
let func = y => x + y;
Js.log(func(2));
let x = 20;
Js.log(func(3));

// assigning existing functions to a variable and using it
let convert = string_of_int;
Js.log(convert(12));