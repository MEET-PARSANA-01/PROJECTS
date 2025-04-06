//Modify the above loop to finish using break.

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
while (1) {
  if (IsPrime(Num)) {
    console.log(Num);
    Count++;
    if (Count >= 5) {
      break;
    }
  }
  Num++;
}
