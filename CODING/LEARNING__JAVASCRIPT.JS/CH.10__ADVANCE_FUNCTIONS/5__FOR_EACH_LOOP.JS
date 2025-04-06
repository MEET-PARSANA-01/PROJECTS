let CAMPUS_CREW = [
  "BHAVISHA",
  "KRUPA",
  "KUSHAL",
  "YUG",
  "MIHIR",
  "ANURAG",
  "MEET",
];

console.log("CAMPUS CREW: ");
console.log();
CAMPUS_CREW.forEach(PEOPLE => console.log(PEOPLE));


//IN THESE CASES WHEN YOU HAVE TO return IMMEDIATELY , for each CAN NOT BE USED PROPERLY.WHEN YOU WRITE return IN for each IT WORKS LIKE continue.
// function Search(CAMPUS_CREW, VALUE) {
//   for (let i = 0; i < CAMPUS_CREW.length; i++) {
//     if (CAMPUS_CREW[i] === VALUE) {
//       console.log(`ELEMENT FOUND AT ${i} INDEX`);
//       return;
//     }
//   }
//   console.log("VALUE NOT FOUND");
// }

// Search(CAMPUS_CREW, "MEET");

//EXPLANATION OF THE ABOVE STATEMENT
// CAMPUS_CREW.forEach((Value) => {
//   if (Value === "MEET") {
//     return;
//   }
//   console.log(`Visited: ${Value}`);
// });
