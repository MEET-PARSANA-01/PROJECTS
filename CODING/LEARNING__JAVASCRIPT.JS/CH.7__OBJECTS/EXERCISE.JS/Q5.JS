//ADD FUNCTION isIdenticalProduct TO COMPARE TWO PRODUCT OBJECTS.

function isIdenticalProduct(Product1, Product2) {
  if (typeof Product1 !== "object" || typeof Product2 !== "object") {
    console.warn("PARAMETERS PASSED WAS NOT AN OBJECT");
    return false;
  }
  if (Product1 == Product2) {
    return true;
  }
  if (
    Product1.Product === Product2.Product &&
    Product1.Size === Product2.Size &&
    Product1.Fit === Product2.Fit
  ) {
    return true;
  } else {
    return false;
  }
}

let Product1 = {
  Company: "Myntra",
  Product: "ARMANI PANT",
  Fit: "COMFORT",
  Size: "L",
  Price: 9999,
  Quantity: "3pcs",
  Deliver_Time: "Before 2 days",
};

let Product2 = {
  Company: "Myntra",
  Product: "ARMANI PANT",
  Fit: "COMFORT",
  Size: "M",
  Price: 9999,
  Quantity: "3pcs",
  Deliver_Time: "Before 2 days",
};

let Product3 = {
  Company: "Myntra",
  Product: "ARMANI PANT",
  Fit: "COMFORT",
  Size: "M",
  Price: 9999,
  Quantity: "3pcs",
  Deliver_Time: "Before 2 days",
};

console.log();
console.log(isIdenticalProduct(Product1, ""));
console.log();
console.log(isIdenticalProduct(Product1, Product1));
console.log();
console.log(isIdenticalProduct(Product3, Product2));
console.log();
console.log(isIdenticalProduct(Product2, Product3));
console.log();
console.log(isIdenticalProduct(Product1, Product2));
console.log();
