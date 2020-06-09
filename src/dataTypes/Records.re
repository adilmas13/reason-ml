// records are like DTO. they hold data/properties/attributes of a certain entity
// once the record is set their values cannot be modified. Only a new instance will work
type parents = {
  mom: string,
  dad: string,
};

type person = {
  firstname: string,
  lastname: string,
  occupation: string,
  parents,
};

let luke: person = {
  firstname: "adil",
  lastname: "shaikh",
  occupation: "barber",
  parents: {
    mom: "devi ma",
    dad: "bapu",
  },
};

Js.log(luke);

// destructuring and pattern matching to get properties
let {lastname} = luke;
Js.log(lastname);

let getFirstname = (person: person) => person.firstname;

let getParents = (person: person) => person.parents;

let getMom = (parent: parents) => parent.mom;

// using destructuring
let getFather = ({parents: {dad}}) => dad;

Js.log(getFirstname(luke));

Js.log(getParents(luke));

Js.log(getMom(luke.parents));

Js.log(getFather(luke));

Js.log("#### update record #####");
// using spread record, original record will still persist
let updateLuke = {...luke, occupation: "farmer"}; // updating occupation

Js.log(updateLuke);

// Panning
// when the parameter names are similar to record attribute names
let toRecord = ((firstname, lastname, occupation, parents)) => {
  firstname,
  lastname,
  occupation,
  parents,
};