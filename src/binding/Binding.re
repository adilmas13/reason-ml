// let binding
let num = 5 + 2;
Js.log(num);

// scoping variable locally
if (true) {
  let workshop = "Reason";
  ();
} else {
  let workshop = "No Reason";
  ();
} /* anonymous block scop*/ /*workshop -> this will fail as its withing a local scop*/;