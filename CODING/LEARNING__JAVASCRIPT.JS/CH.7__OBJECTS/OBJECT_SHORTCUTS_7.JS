//1.OBJECT DESTRUCTURING:
let product = {
  company: "BMW",
  model: "M5",
  price: "2.5 CORES",
};

let { model, price } = product;
console.log();
console.log(model);
console.log();
console.log(price);
console.log();



//2.PROPERTY SHORTHAND:
// let price = 2500000;
// let Product = {
//   company: "MAHINDRA",
//   model: "THAR ROXX",
//   price: price,
// };
// //IS SAME AS
// let Product1 = {
//   company: "MAHINDRA",
//   model: "THAR ROXX",
//   price,
// };



//3.METHOD SHORTHAND:
// let Product = {
//   company: "MAHINDRA",
//   model: "THAR ROXX",
//   price: 2500000,
//   DisplayPrice: function () {
//     return `$ ${this.price.toFixed(2)}`;
//   },
// };
// //IS SAME AS
// let Product1 = {
//   company: "MAHINDRA",
//   model: "THAR ROXX",
//   price: 2500000,
//   DisplayPrice() {
//     return `$ ${this.price.toFixed(2)}`;
//   },
// };
// console.log(DisplayPrice());
