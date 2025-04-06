//Using continue only print positive numbers from the given array [1,-6,5,7,-98]

let POSITIVE = [1,-6,5,7,-98];

for(let i = 0;i < POSITIVE.length;i++){
  if(POSITIVE[i] < 0){
    continue;
  }
  console.log(POSITIVE[i]);
}              