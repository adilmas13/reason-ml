// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';


var luke = {
  firstname: "adil",
  lastname: "shaikh",
  occupation: "barber",
  parents: {
    mom: "devi ma",
    dad: "bapu"
  }
};

console.log(luke);

var lastname = "shaikh";

console.log(lastname);

function getFirstname(person) {
  return person.firstname;
}

function getParents(person) {
  return person.parents;
}

function getMom(parent) {
  return parent.mom;
}

function getFather(param) {
  return param.parents.dad;
}

console.log("adil");

console.log({
      mom: "devi ma",
      dad: "bapu"
    });

console.log("devi ma");

console.log(getFather(luke));

console.log("#### update record #####");

var updateLuke_parents = {
  mom: "devi ma",
  dad: "bapu"
};

var updateLuke = {
  firstname: "adil",
  lastname: "shaikh",
  occupation: "farmer",
  parents: updateLuke_parents
};

console.log(updateLuke);

function toRecord(param) {
  return {
          firstname: param[0],
          lastname: param[1],
          occupation: param[2],
          parents: param[3]
        };
}

exports.luke = luke;
exports.lastname = lastname;
exports.getFirstname = getFirstname;
exports.getParents = getParents;
exports.getMom = getMom;
exports.getFather = getFather;
exports.updateLuke = updateLuke;
exports.toRecord = toRecord;
/*  Not a pure module */
