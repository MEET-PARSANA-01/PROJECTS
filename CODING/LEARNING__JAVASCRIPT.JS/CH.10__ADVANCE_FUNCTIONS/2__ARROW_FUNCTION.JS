let Sum = function (n1, n2) {
  return n1 + n2;
};

console.log(Sum(3, 9));

let SUM = (N1, N2) => {
  return N1 + N2;
};

console.log(SUM(8, 9));

let Square = Number => {
  //BRACKETS ARE OPTIONAL IN CASE OF SINGLE ARGUMENT
  return Number * Number;
};

console.log(Square(9));

let SQUARE = number => number * number;//CURLY BRACES AND RETURN STATEMENT ARE OPTIONAL IN CASE OF SINGLE STATEMENT DEFINITION

console.log(SQUARE(9));
