// LIST

let list = [1, 2, 3, 4];
let list2 = ["adil", "shaikh", "hello", "how r u", "wow"];

//Js.log(list);

let rec getLength = randomList => {
  Js.log("ENTERED");
  Js.log(randomList);
  switch (randomList) {
  | [] =>
    Js.log("HERE 1");
    0;
  | [a, ...tail] =>
    Js.log(tail);
    1 + getLength(tail);
  };
}; // end of getLength

Js.log("Final length is " ++ string_of_int(getLength(list)));

// append to list
let newList = ["baba", "black sheep", ...list2];
Js.log(newList);

// concat two list, you need to use the @, this is a slower operation
// since it iterates through each item
let listOne = ["one", "two"];
let listTwo = ["three", "four", "five"];

let mergedList = listOne @ listTwo;
Js.log(mergedList);