// Create a function runTwice that takes a function as a parameter and then runs that method twice.
let PrintGreeting = () => console.log("JAY MATAJI");
let RunTwice = (inputFunction) => {
  inputFunction();
  inputFunction();
};
RunTwice(PrintGreeting);
