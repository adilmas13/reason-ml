// Arrays. List, Static array or dynamic arrays

// they are mutable
// adding pipe on both ends makes its an array else it will be a list
let han = [|"Han", "Solo", "Pilot"|];

let createArray = (length, fieldName) => Array.make(length, fieldName);

let newOne = createArray(5, "Field");
Js.log(newOne);
Js.log(han[2]); // extract 2 index element

// pattern matching to multiple values from array
let [|firstname, lastname, occupation|] = han;
Js.log(firstname);

// pattern matching using function
let getFirstName = ([|firstname, lastname, occupation|]) => [|
  firstname,
  lastname,
|];

Js.log(getFirstName(han));