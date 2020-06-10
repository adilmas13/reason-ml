/***/

// number of parameters in a function is call Arity
// following has two arity since it has two arguments
let add = (a, b) => a + b;

// functions without arguments are called nullary
// however in reason there is no noArgument functions and in this case
// the argument is Unit
let getHello = () => "Hello";

let result = getHello(); // can also call getHello(())

Js.log(result);