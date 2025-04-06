//WRITE A FUNCTION TO FIND THE LARGEST ELEMENT IN AN ARRAY.
function MaxElementArray(KING) {
  let MaxElement = 0;
  for (let i = 0; i < KING.length; i++) {
    if (KING[i] > MaxElement) {
      MaxElement = KING[i];
    }
  }
  return MaxElement;
}

let KING = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
console.log();
console.log(MaxElementArray(KING));
console.log();

