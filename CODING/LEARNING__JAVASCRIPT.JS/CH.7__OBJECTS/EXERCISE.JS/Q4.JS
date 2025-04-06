//GIVEN AN OBJECT {MESSAGE: 'GOOD JOB',STATUS: 'COMPLETE'},USE DE-STRUCTURING TO CREATE TWO VARIABLES, MESSAGE AND STATUS.
let KING = {
  Message: "Good job",
  Status: "Complete",
};

console.log();
console.log(KING);
console.log();

let { Message, Status } = KING;

console.log(Message);
console.log();
console.log(Status);
console.log();
