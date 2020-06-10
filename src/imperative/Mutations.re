// mutating arrays

let array = [|"adil", "shaikh", "hello"|];

Js.log(array[0]);

array[0] = "Baba";

Js.log(array[0]);

// working with records

type person = {
  firstname: string,
  lastname: string,
};

let luke: person = {firstname: "Luke", lastname: "Harper"};

// luke.firstname = "adil"; this throws an error

// making specific fields mutable
type personMutable = {
  firstname: string,
  mutable lastname: string,
};

let luke: personMutable = {firstname: "Luke", lastname: "Harper"};
luke.lastname = "shaikh";

Js.log(luke);