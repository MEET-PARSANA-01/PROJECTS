//Create an array copy using splice method.
let BICEPS = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

let TRICEPS = [];

function ArrayCopy(BICEPS) {
  TRICEPS = BICEPS.slice(0, BICEPS.length);
  return TRICEPS;
}

console.log(ArrayCopy(BICEPS));
console.log();
