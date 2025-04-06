//ACCUMULATOR PATTERN REFERS TO LOOPING TO FIND SOME END RESULT
let DEFENNCE = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

let SUM = 0;


for (let i = 0; i < DEFENNCE.length; i++) {
  SUM += i;
}
console.log();
console.log(`THE SUM OF THE ARRAY IS ${SUM}`);
console.log();

let DEFENNCE_SQUARE = [];

for (let j = 0; j < DEFENNCE.length; j++) {
  // DEFENNCE_SQUARE[j] = DEFENNCE[j] * DEFENNCE[j];
  //OR
  DEFENNCE_SQUARE.push(DEFENNCE[j] * DEFENNCE[j]);

}

console.log(DEFENNCE_SQUARE);
