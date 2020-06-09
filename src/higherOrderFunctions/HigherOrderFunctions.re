// Higher order functions. Functional Expressions. Functions are first class value
// functions are also expression

// we dont need to give a name for a function
// this is string => string = <fun>
// then how do we call it ???
language => language ++ " workshop";
// to call
let temp = (language => language ++ " workshop")("reason");
Js.log(temp);

// pattern matching syntax
fun
| language => language ++ " workshop";

let temp2 =
  (
    fun
    | language => language ++ " workshop"
  )("Reason");
Js.log(temp2);

// functions with name

let getTitle = language => language ++ " workshop";

//Js.log(getTitle("React")) /* 1) It can be part of a data structure, it can be part of a list*/;
/* first class value*/
/* function can be used in three different way*/

/* 2) It can be past as an argument to other functions*/
/* 3) return a function from another function as a result*/

/* Situation 1*/
// using function in a record
type randomRecord = {
  addInts: (int, int) => int,
  concatStrings: (string, string) => string,
  title: string,
};

let demo: randomRecord = {
  addInts: (int1, int2) => int1 + int2,
  concatStrings: (string1, string2) => string1 ++ " " ++ string2,
  title: "Hello",
};

//Js.log(demo.addInts(5, 4));

// using functions as per of list
// in this case all the children of the list need to have the same function signature
let operators = [(a, b) => a + b, (x, y) => x * y] /***/;

// pass function as an argument
let add = a => a + 2;
let multiply = a => a * 5;

let compute = (operationFunc, value) => operationFunc(value);

let temp = compute(add, 6);
let temp2 = compute(multiply, 6);
//Js.log(temp);
//Js.log(temp2);

// super complex recursion with HOF
let rec computeRec = (operationFunc: int => int, x: int, recCount: int) => {
  switch (recCount) {
  | 0 =>
    Js.log("HERE => " ++ string_of_int(x));
    x;
  | _ =>
    Js.log("COUNT => " ++ string_of_int(x));
    computeRec(operationFunc, operationFunc(x), recCount - 1);
  };
};

Js.log(computeRec(add, 4, 10));

// return a function from another function
// function composition
// combine two or more functions

let composte = (func1: int => int, func2: int => int, value) =>
  func1(func2(value));

let temp = composte(add, multiply, 10);
Js.log(temp);