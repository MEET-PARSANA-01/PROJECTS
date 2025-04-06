const king = [12, 14, 78, 32, 78];
king.sort((a, b) => a - b);
console.log(king);
king.sort((a, b) => b - a);
console.log(king);


const Names = ["MEET", "ANURAG", "KRUPA", "KUSHAL", "BHAVISHA", "MIHIR", "YUG"];
Names.sort();
console.log(Names);
Names.sort((a, b) => b.localeCompare(a));
console.log(Names);


//WRITE A FUNCTION TO FIND IF A PARTICULAR NAME IS PRESENT IN THE ARRAY OR NOT.
//FIRST METHOD
console.log(isPresent(Names));
function isPresent(Names) {
  for (let i = 0; i < Names.length; i++) {
    if (Names[i] == "BHAVISHA") {
      return true;
    }
  }
  return false;
}

// //SECOND METHOD
// console.log(isPresent(Names));
// function isExist(Names) {
//   for (let i = 0; i < Names.length; i++) {
//     if (Names[i] == "BHAVISHA") {
//       return true;
//     }
//   }
//   return false;
// }


