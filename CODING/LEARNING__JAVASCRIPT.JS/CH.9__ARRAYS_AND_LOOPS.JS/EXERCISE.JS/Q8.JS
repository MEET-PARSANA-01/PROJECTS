//Using accumulator pattern concatenate all the strings in the given array [‘KG’, ‘Coding’, ‘Javascript’, ‘Course’, ‘is’, ‘Best’]

let FRIENDS = ["FIRST","RELATIONSHIP","IN","EARTH","WHICH","NEVER","DIES"];

let TRUE = '';

for(let i = 0;i < FRIENDS.length;i++){
  TRUE = TRUE + FRIENDS[i] + " ";
}

console.log();
console.log(TRUE);
console.log();

//BONUS
console.log(FRIENDS.join("-"));
console.log();