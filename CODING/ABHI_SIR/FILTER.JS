const KING = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
// let Ans = KING.filter((item) => item > 5);\
let Ans = KING.filter(function (item) {
  return item > 5;
});

console.table(KING);
console.log();
console.log(Ans);

/*
Q.CREATE AN ARRAY OF LENGTH 10 WHICH CONTAINS NUMBERS (-VE & +VE) & FILTER THE ELEMENT IF NUMBER IS -VE AND STORE ANOTHER VARIABLE AND PRINT IT.
// */

const VILLAIN = [1, 2, 3, 4, 5, -1, -2, -3, -4, -5];
let ans = VILLAIN.filter((item) => item < 0);
console.table(ans);




