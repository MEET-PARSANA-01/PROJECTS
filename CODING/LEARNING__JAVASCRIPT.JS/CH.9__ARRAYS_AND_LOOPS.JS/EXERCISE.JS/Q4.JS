//Create a while loop that exits after counting 5 prime numbers.

function IsPrime(number) {
  for (let i = 2; i < number; i++) {
    if (number % i === 0) {
      return false;
    }
  }
  return true;
}

let Num = 1;
let Count = 0;
while (Count < 5) {
  if (IsPrime(Num)) {
    console.log(Num);
    Count++;
  }
  Num++;
}
