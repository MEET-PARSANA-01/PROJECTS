//Q2.ADD THE NAME TO THE OUTPUT TOO.
function DoGreeting(personName = 'DEAR') {
  let hours = 19;
  console.log();
  console.log(hours);
  console.log();

  let Heading = "greeting";

  if (hours > 5 && hours < 12) {
    Heading = `GOOD MORNING ${personName}`;
  } else if (hours > 12 && hours < 18) {
    Heading = `GOOD AFTERNOON ${personName}`;
  } else {
    Heading = `GOOD NIGHT ${personName}`;
  }

  console.log(Heading);
  console.log();
}

DoGreeting('KING');
   