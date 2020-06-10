// declaring an exception
// cannoot be polymorphic
exception Finished;
Finished;

// Exception with a message
exception Exception(string);

// to raise an exception we use raise and stops all computation
raise(Exception("something went wrong"));

Js.log("THIS WONT SHOW, SINCE THERE IS EXCEPTION ON TOP");