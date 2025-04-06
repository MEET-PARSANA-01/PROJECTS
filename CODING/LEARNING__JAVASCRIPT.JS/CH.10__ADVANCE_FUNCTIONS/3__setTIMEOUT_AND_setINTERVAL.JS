//1.SET TIMEOUT

// setTimeout(() => console.log("YOU BECAME BILLIONARE"), 4000);

let ALARM = () =>
  console.log(
    "DON'T CALL FUNCTION AT SETTIMEOUT, JUST PASS IT AS ARGUMENT,IT WILL CALL FUNCTION AUTOMATICALLY AT RIGHT TIME"
  );

// let TimerID = setTimeout(ALARM, 2000);

// console.log(`Alarm set with TimerId: ${TimerID}`);

// //TO CANCEL THE setTimeout
// clearTimeout(TimerID);

//2. SET INTERVAL


let IntervalID = setInterval(ALARM, 1000);
clearInterval(IntervalID);

