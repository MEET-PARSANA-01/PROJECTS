console.log();

let KING = [
  "ANURAG",
  "BHAVISHA",
  "MEET",
  "MIHIR",
  "KRUPA",
  "KUSHAL",
  "YUG",
  { TEAM_NAME: "CAMPUS CREW" },
];
console.log(KING);
console.log(KING[2]);
console.log(typeof KING);
console.log();

//1.Array.isArray()
console.log(Array.isArray(KING)); //RETURNS TRUE OR FALSE
console.log();
console.log();

//2.LENGTH
console.log(KING.length);
console.log();
console.log();

let VILLAIN = [1, 2, 3, 4, 5];

//3.push/pop: Add or remove to end
VILLAIN.push(6);
console.log(VILLAIN);
console.log();
console.log(" Popped " + VILLAIN.pop());
console.log(VILLAIN);
console.log();
console.log();

let HERO = [1, 2, 3, 4, 5, 6];

//4.shift/unshift: add or remove from front
console.log(HERO);
console.log();
HERO.unshift(0);
console.log(HERO);
console.log();
HERO.shift(0);
console.log(HERO);
console.log();
console.log();

let LION = [1, 2, 3, 4, 5, 6, 7, 8, 9];

//5.splice: add or remove elements
console.log(LION);
console.log();
LION.splice(0, 5 /*it says that remove 5 elements from 0 index*/);
console.log(LION);
console.log();
console.log();

//6.slice: makes the copy of the given array
let BICEPS = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

let TRICEPS = [];

function ArrayCopy(BICEPS) {
  TRICEPS = BICEPS.slice(0, BICEPS.length);
  return TRICEPS;
}

console.log(ArrayCopy(BICEPS));
console.log();
console.log();

let LIONESS = [1, 2, 3, 4, 5];

//7.toString: Convert to string
console.log(LIONESS.toString());
console.log();
console.log();

let MINISTER = [1, 5, 2, 7, 3, 8, 0, 9];

//8.sort
console.log(MINISTER);
console.log();
MINISTER.sort();
console.log(MINISTER);
console.log();
console.log();

let LIFELINE = [1, 2, 3, 4, 5, 6, 7, 8];

//9.valueOf: Get array itself
console.log(LIFELINE.valueOf());
console.log();
console.log();

/* 
 =>ARRAY ALSO USE REFERENCE LIKE OBJECTS 
*/
let CONQUER = [1, 2, 3, 4, 5, 6, 7];
let CONQUER2 = CONQUER;
CONQUER2[6] = 100;
console.log(CONQUER);
console.log();
console.log();

/*  
 => DE-STRUCTURING ALSO WORKS FOR ARRAY
*/
let MINDSET = [1, 2, 3, 4];
let [A, B, C, D] = MINDSET;
console.log(A + " " + B + " " + C + " " + D);
