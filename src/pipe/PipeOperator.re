// the output of one function is the input of another
let add = a => a + 5;
let multiple = a => a * 5;
let subtract = a => 100 - a;
let toString = (a: int, prefix: string) => prefix ++ " " ++ string_of_int(a);

// -> applies the input as the first argument of a function
// see toString function. "Hello is automatically placed as the"
// second argument since -> indicates that the input of the chain
// is the first argument
// Pipe first operator
let temp = add(6)->multiple->subtract->toString("Hello");

Js.log(temp);

let toString = (prefix: string, a: int) => prefix ++ " " ++ string_of_int(a);
// |> applies input as the last argument
// Pipe last operator
let temp = add(7)->multiple->subtract |> toString("Welcome");
Js.log(temp);