// int
let test = 5 + 6;
Js.log(test);

let test2 = 21 mod 2;
Js.log(test2) /* result will be 1. it strickly wont consider the decimal*/;

// float
let test3 = 51.;
Js.log(test3);

// exponential
let test4 = 5e2;
Js.log(test4);

//5 + 1.1 - this wont work since we are violating type safety of reason

// boolean
Js.log(true && true);
Js.log(true || false);
Js.log(!false);
Js.log(10 < 12);
Js.log(10 >= 12); /* can't compare to different data type*/

// string and characters
Js.log('r');

Js.log(String.length("Adil"));
Js.log("Adil".[1]);

// conversion
Js.log(int_of_string("1234"));
Js.log(string_of_int(123));
Js.log("12" ++ string_of_int(3) ++ "13"); // concatination is double ++

Js.log(String.make(1, 'r')) /* convert char to strin*/;