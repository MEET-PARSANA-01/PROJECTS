//Task 5  : Write a function reverseArray(arr) that takes an array as input and returns a new array with the elements in reverse order.
let numbers = [5, 12, 8, 130, 44];

function reverseArray(numbers) {
  numbers.reverse();
  let Reverse = [];
  for (let i = 0; i < numbers.length; i++) {
    Reverse[i] = numbers[i];
  }

  return Reverse;
}

console.log(reverseArray(numbers));// output : [44, 130, 8, 12, 5]
