// something like enums
type player =
  | Cross
  | Circle;

type field =
  | Empty
  | Marked(player); // variants can hold data as well

let nextTurn = Circle;

Js.log(nextTurn);

// pattern matching. We need to compulsary handle all cases
let toString = (field: field) => {
  switch (field) {
  | Marked(Cross) => "X"
  | Marked(Circle) => "O"
  | Empty => ""
  };
};

let random = Marked(Cross);
Js.log(toString(random)) /* Multiple variant*/;

type animal =
  | Bear
  | Deer;

let isBigger = (animal1: animal, animal2: animal) => {
  switch (animal1, animal2) {
  | (Bear, Bear) => false
  | (Bear, _) => true // '_' means dont consider the second argument in this
  | (Deer, Deer) => false
  | (Deer, Bear) => false
  };
};

Js.log(isBigger(Bear, Deer));

// short hand pattern matching only for single argument
// no need to add switch
let toString = () => {
  fun
  | Marked(Cross) => "X"
  | Marked(Circle) => "O"
  | Empty => "";
};

Js.log(toString((), Marked(Cross)));