/* to make a recursive function we need to use the rect keyword,
   a function cannot call itself or another function from within its body if the
   function being called is not defined before it, hence rec is used to say
    that this function is a recursive function
    */

// try removing the 'rec' keyword. Code wont compile
let rec factorial = n =>
  if (n <= 1) {
    1;
  } else {
    n * factorial(n - 1);
  };

Js.log(factorial(10));

/* mutually recursive function, multiple recursive functions
   separated by and to allow simultaenous declaration of functions
   */

let rec isEven = num =>
  if (num == 0) {
    true;
  } else {
    isOdd(num - 1);
  }
and isOdd = num =>
  if (num == 0) {
    false;
  } else {
    isEven(num - 1);
  };

Js.log(isOdd(123));