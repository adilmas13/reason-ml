let add = a => a + 5;
let multiply = (a, b) => a * b;
let composite = (func1, func2, value) => func1(func2(value));

let addMultiply = composite(add, multiply(5));

Js.log(addMultiply(5));