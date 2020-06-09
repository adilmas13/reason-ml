// type annotation

let num: int = 51;

// below is a type declaration

// its good in case you want to document
// assigning string type a alias called lowercased
type lowercased = string;

// this function's return type is lowercased rather than string,
// which is more descriptive and tells that this function returns a lowercase value
let toLowercase = (word: string): lowercased => String.lowercase_ascii(word);

// following gives a syntax error, when trying to assign multiple types at once
//type positive, negative = int

// type annotations, they have no impact on program execution

type animal = string;
let cat: animal = "ragdoll";
let dog: animal = "husky";

// type in fuctions

let getAnimal = (anim: string) => "this is " ++ anim;

let getAnimalAgain = (anim): string => "this is " ++ anim;

let getTitle = (cond: bool, exp: string) =>
  if (cond) {
    exp;
  } else {
    exp ++ " worskhop";
  };