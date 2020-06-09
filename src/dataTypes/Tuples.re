// Tuples. composite values. encapsulate info
// tuple of three components each of type string, not meant to be updated
type person = (string, string, string); // some what like a dto

let luke: person = ("Lake", "Johnny", "Jedi");

let han: person = ("Han", "Solo", "Pilot");

// pattern matching
let (x, _, z) = (5, 20, 10);

Js.log(x);
Js.log(z);

let getFirst = ((x, _)) => x;

Js.log(getFirst((24, 89)));

// return multiple values from a function using a tuple
let getName = () => {
  let firstname = "adil";
  let secondname = "shaikh";
  (firstname, secondname);
};

let (name, last) = getName();
Js.log(name ++ " " ++ last);