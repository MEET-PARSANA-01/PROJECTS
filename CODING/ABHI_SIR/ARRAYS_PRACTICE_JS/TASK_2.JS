//Task 2  : Write a function filterEvenNumbers(arr) that takes an array of numbers as input and returns a new array containing only the even numbers.
let numbers = [5, 12, 8, 130, 44];

function filterEvenNumbers(numbers) {
  return numbers.filter((number) => number % 2 === 0);
}

console.log(filterEvenNumbers(numbers));// output : [12, 8, 130, 44]
