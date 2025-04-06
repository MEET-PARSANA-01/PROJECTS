//Task 4  : Write a function sumArray(arr) that takes an array of numbers as input and returns the sum of all the numbers in the array.

let numbers = [5, 12, 8, 130, 44];

function sumArray(numbers) {
  let SUM = 0;
  for (let i = 0; i < numbers.length; i++) {
    SUM = SUM + numbers[i];
  }
  return SUM;
}

console.log(sumArray(numbers));// output : 199
