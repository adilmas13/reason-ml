// let binding are immutable identifiers hence they can not be changed
// so we use reference to create reference for mutability

let x = ref(5);
Js.log(x);

// following is the way to mutate it
// := is to change the value and ^ is used to access the content
x := x^ + 5;

Js.log(x^);