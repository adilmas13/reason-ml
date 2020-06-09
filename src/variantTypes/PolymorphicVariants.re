// since reason is a strong type language it gets tought to reuse functions
// when the types of the variables are different.
// this will lead to duplication of code for example just to swap position
// of variables in tuples. we will have to write one for int , another for float, mix and match situation and so on.
/* to solve this problem we have polymorphism*/

let swap = (x: 'a, y: 'b): ('b, 'a) => (y, x);

Js.log(swap(5, 6));
Js.log(swap("adil", 6));

// parameterized type
type row('a) = ('a, 'a, 'a, 'a, 'a);
type stringRow = row(string);

let names: stringRow = ("Luke", "Han", "Leila", "Darth", "Yoda");
Js.log(names) /* no nullable or undefined in reaso*/;