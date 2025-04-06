//AT BEHIND , FIRSTLY ONE OBJECT WILL BE MADE THAN RESPECTIVE VARIABLE NAME WILL GET THE REFERENCE OF THAT OBJECT.

let M = 10;
let K = M;
console.log();
console.log(`M = ${M} , K = ${K}`);
M = 5;
console.log();
console.log(`M = ${M} , K = ${K}`);
console.log();

let X = { Number: 5 }; //X IS ONLY A REFERENCE TO THE OBJECT, NOT A OBJECT.PRIMITIVES HAI VO DIRECTLY COPY HO JATE HAI,BUT JO OBJECTS HAI VO COPY NAHI HOTE , UNKE SIRF REFERENCES COPY HOTE HAI.
let Y = X; //YAHA PE OBJECT COPY NAHI , PURA REFERNCE HI Y K PASS CHALA GAYA
console.log(`X = ${X.Number} , Y = ${Y.Number}`);
X.Number = 10;
console.log();
console.log(`X = ${X.Number} , Y = ${Y.Number}`); //BCOZ OF REFERENCE

console.log();
let p = { pop: "meet" };
let q = { pop: "meet" };
console.log(p == q);//RESULT WILL ALWAYS BE FALSE BCOZ IN OBJECT COMPARISON THEIR IS NO MEANING OF == OR === , IT WILL COMPARE ONLY ITS REFERENCES.
