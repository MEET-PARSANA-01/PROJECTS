//Task 3  : Write a function sortArrayDesc(arr) that takes an array of numbers as input and returns a new array sorted in descending order.
let numbers = [5, 12, 8, 130, 44];

function sortArrayDesc(numbers) {
  let MINDSET = [];
  MINDSET = numbers.sort((a, b) => b - a);
  return MINDSET;
}
console.log(sortArrayDesc(numbers));// output : [130, 44, 12, 8, 5]
