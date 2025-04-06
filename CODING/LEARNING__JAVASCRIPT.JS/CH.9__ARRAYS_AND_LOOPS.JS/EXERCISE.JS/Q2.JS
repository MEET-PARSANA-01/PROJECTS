//Create a method to return an element at a particular position in the array.

let EQUALIZER = [12,3,44,54,67,53,32,67,12,79];

//MY CODE 
// function ReturnElement(EQUALIZER) {
//   for (let i = 0; i < EQUALIZER.length; i++) {
//     if (EQUALIZER[i] === 9) {
//       return EQUALIZER[i];
//     }
//   }
// }

// console.log(ReturnElement(EQUALIZER));

function ReturnElement(EQUALIZER,position){
  return EQUALIZER[position - 1];
}

console.log(ReturnElement(EQUALIZER, 8));