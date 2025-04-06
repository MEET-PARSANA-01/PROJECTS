

let Product = {
  Name: "T-shirt",
  Price: 799,
  Rating: {
    Stars: 4.5,
    noOfViewes: 455,
  },
};

console.log();
console.log(typeof Product);
console.log();
console.log(Product);
console.log();

let KING = JSON.stringify(Product);

console.log(typeof KING);
console.log();
console.log(KING);
console.log();

let NewProduct = JSON.parse(KING);

console.log(typeof NewProduct);
console.log();
console.log(NewProduct);
