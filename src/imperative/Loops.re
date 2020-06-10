// for loop
for (i in 0 to 10) {
  print_int(i);
};

// for loop ..reverse
for (i in 8 downto 0) {
  print_int(i);
};

// while loop
let i = ref(0);

while (i < ref(8)) {
  i := i^ + 1;
  Js.log(i^); // ^ to refer to the content
};