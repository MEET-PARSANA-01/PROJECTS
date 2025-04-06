for (let i = 0; i < 50; i++) {
  console.log(i);
  if (i === 7) {
    break;
  }
}

console.log();
console.log();

let MILLIONARE = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

for (let i = 0; i < MILLIONARE.length; i++) {
  if (MILLIONARE[i] === 7) {
    console.log(`NUMBER FOUND AT THE INDEEX ${i}`);
    break;
  }
}

console.log();
console.log();

let TRILLIONARE = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
for (let j = 0; j < TRILLIONARE.length; j++) {
  if (TRILLIONARE[j] === 7) {
    console.log(TRILLIONARE[j]);
    continue;
  }
}

console.log();

for (let k = 1; k <= 25; k++) {
  if (k % 2 === 0) {
    continue;
  }
  console.log(k);
}
