//Q2.CREATE AN OBJECT WITH TWO REFERENCES AND LOG CHANGES TO ONE OBJECT BY CHANGING THE OTHER ONE.
let MEET = {
  Value: "6,00,00,000",
};

let ANURAG = MEET;

console.log();
console.log(`MEET = ${MEET.Value} , ANURAG = ${ANURAG.Value}`);
console.log();

MEET.Value = "12,00,00,000";

console.log();
console.log(`MEET = ${MEET.Value} , ANURAG = ${ANURAG.Value}`);
console.log();

ANURAG.Value = "1,00,00,000";

console.log();
console.log(`MEET = ${MEET.Value} , ANURAG = ${ANURAG.Value}`);
console.log();


