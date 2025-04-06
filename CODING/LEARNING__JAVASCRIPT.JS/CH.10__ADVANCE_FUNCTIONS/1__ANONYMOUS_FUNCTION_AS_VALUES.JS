let SUM = function (n1, n2) {
  //SUM IS THE ONLY REFERENCE TO THIS FUNCTION
  return n1 + n2;
};

// let sum = SUM;

// console.log(SUM(3, 9));
// console.log(sum(7, 7));

console.log("WE CAN CALL FUNCTIONS AS DATATYPE IN JS");

//FUNCTION WHICH DO THE SUM OF THREE NUMBERS, WITH THE HELP OF FUNCTION WHICH CAN DO THE SUM OF TWO NUMBERS.
let sum3Numbers = function (num1, num2, num3, sum2n) {
  let Sum1 = sum2n(num1, num2);
  return sum2n(Sum1, num3);
};

console.log(sum3Numbers(1, 2, 3));
