//Task 1: Write a function findMax(arr) that takes an array of numbers as input and returns the maximum value in the array.
let numbers = [5, 12, 8, 130, 44];
let MAX = 0;

function findMax(numbers) {
  for (let i = 0; i < numbers.length; i++) {
    if (MAX < numbers[i]) {
      MAX = numbers[i];
    }
  }
  return MAX;
}

console.log(findMax(numbers));//output : 130


