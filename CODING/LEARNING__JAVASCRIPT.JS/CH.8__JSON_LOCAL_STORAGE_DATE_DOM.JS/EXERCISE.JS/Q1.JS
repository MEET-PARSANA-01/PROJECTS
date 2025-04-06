//Q1.DISPLAY GOOD MORNING , AFTERNOON AND NIGHT BASED ON CURRENT HOUR.

// let date = new Date();
let hours = 19;
console.log();
console.log(hours);
console.log();

let Heading = "greeting";

if (hours > 5 && hours < 12) {
  Heading = "GOOD MORNING";
} else if (hours > 12 && hours < 18) {
  Heading = "GOOD AFTERNOON";
} else {
  Heading = "GOOD NIGHT";
}

console.log(Heading);
console.log();
