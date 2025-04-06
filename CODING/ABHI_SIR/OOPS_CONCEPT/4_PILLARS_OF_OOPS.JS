/*

-->OOPS IN JS
    1.Variable -> Data member.
    2.Function -> Member function / Method.
 

-->PILLARS OF OOPS
    1.ENCAPSULATION is the process of wrapping up of data and methods into a single unit called class.
    2.ABSTRACTION is the process of hiding the implementation details and showing only the functionality to the user.
    3.INHERITANCE is the process of acquiring the properties and behavior of a class into another class.
    4.POLYMORPHISM is the ability to perform a single action in different ways.
*/
// class Car {
//   constructor(Name, Model) { 
//     Car.Name = Name;
//     //this KEYWORD IS USED TO ACCESS THE CLASS VARIABLE INSIDE THE CLASS. 
//     Car.Model = Model;
//   }

//   printDeatils() {
//     console.log(Car.Name);
//     console.log(Car.Model);
//   }
// }

// const car1 = new Car("BMW", "X5");
// const car2 = new Car("Audi", "A8");
// car1.printDeatils();
// console.log();
// console.log();
// car1.printDeatils();




class Employee{
  constructor(name, id, salary){
    this.name = name;
    this.id = id;
    this.salary = salary;
  }

  printEmpDetails(){
    // console.log(this.name);
    // console.log(this.id);
    // console.log(this.salary);
    console.log(`Name: ${this.name}`);
    console.log(`ID: ${this.id}`);
    console.log(`Salary: ${this.salary}`);
  }
}

const Emp1 = new Employee("MEET", 101, 100000);
const Emp2 = new Employee("YUG", 102, 200000);
const Emp3 = new Employee("ANURAG", 103, 300000);
Emp1.printEmpDetails();
console.log();
console.log();
Emp2.printEmpDetails();
console.log();
console.log();
Emp3.printEmpDetails();

/*

H.W

class BankAccount

withdrawn()
AddAmount()
checkBalance()
userdetails()
loan()
*/
