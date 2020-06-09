let isEqual = (7, 2) == (7, 2);
Js.log(isEqual);

// referential equality is when its the same memory location '==='
let isEqual = (1, 2) === (1, 2);
Js.log(isEqual);

let one = (7, 2);
let two = one;
let isEqual = one === two;
Js.log(isEqual);