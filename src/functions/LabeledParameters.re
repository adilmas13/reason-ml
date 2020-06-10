// adding label to function parameters to avoid passing arguments in the same order

let divide = (~integer1, ~integer2) => integer1 / integer2;

let temp = divide(~integer2=2, ~integer1=10);

Js.log(temp);

// can also be written as

let divide = (~integer1 as a, ~integer2 as b) => a / b;

let temp = divide(~integer2=3, ~integer1=15);

Js.log(temp);

// default values parameter
// reason ml warns that the final argument in a function should always be a
// non optional one. Hence we use Unit () in the end
let multiply = (~integer1=5, ~integer2=7, ()) => integer1 * integer2;

Js.log(multiply(~integer1=2, ~integer2=5, ()));
Js.log(multiply(~integer1=2, ()));
Js.log(multiply());