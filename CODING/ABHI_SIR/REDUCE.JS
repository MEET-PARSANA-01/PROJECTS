const PERSONALITY = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

const SMARTWORK = PERSONALITY.reduce((A, B) => A + B, 0);
console.log();
console.log(SMARTWORK);
console.log();


//REDUCE FUNCTION
const INTELLIGENT = [23, 78, 34, 32, 45, 67];
const BRILLIANT = INTELLIGENT.reduce((A, B) => (A > B ? A : B), 0);
console.log();
console.log(BRILLIANT);
console.log();


//REST OPERATOR
const MaxElement = Math.max(...INTELLIGENT);
const MinElement = Math.min(...INTELLIGENT);
console.log();
console.log(MaxElement);
console.log();
console.log(MinElement);
console.log();

//PRODUCT OF ALL EVEN NUMBERS USING REDUCE FUNCTION
const LIFE = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const HEAVEN = LIFE.reduce((A,B) => (B % 2 === 0 ? A * B : A), 1);
console.log(HEAVEN);


