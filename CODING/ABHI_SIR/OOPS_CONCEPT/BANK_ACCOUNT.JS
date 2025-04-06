class bankAccount {
  constructor(accountHolderName, Balance, Address) {
    this.accountHolderName = accountHolderName;
    this.Balance = Balance;
    this.Address = Address;
  }
  Withdrawn(Amount) {
    if (Amount > this.Balance) {//CHECK THAT IF BALANCE IS SUFFICIENT OR NOT 
      console.log("--> INSUFFICIENT BALANCE");
      console.log();
    } else {
      this.Balance = this.Balance - Amount;//SUBTRACTS WITHDRAWN AMOUNT FROM THE CURRENT BALANCE
      console.log("--> WITHDRAWN SUCCESSFULLY");
      console.log();
    }
  }
  AddAmount(Amount) {
    this.Balance = this.Balance + Amount;//ADDS DEPOSIT INTO THE CURRENT BALANCE
    console.log(this.Balance/*THIS WILL PRINT O/S BALANCE HERE*/, "--> AMOUNT DEPOSITED");
  }
  CheckBalance() {
    console.log("--> Current balnce: RS.", this.Balance);//FOR CHECKING CURRENT BALANCE
    console.log();
  }
  UserDetails() {//FOR PRINTING ACCOUNT HOLDER DETAILS 
    console.log();
    console.log("--> Name: ", this.accountHolderName);
    console.log();
    console.log("--> Address: ", this.Address);
    console.log();
    console.log("--> Balance: ", this.Balance);
    console.log();
  }
  Loan(Amount) {
    if (this.Balance <= 50000) {
      this.Balance = this.Balance + 100000;
      console.log("--> LOAN APPROVED");
      console.log();
    } else {
      console.log("--> LOAN DENIED");
      console.log();
    }
  }
}

const User1 = new bankAccount("MEET",300000, "RAJKOT,GUJARAT");
User1.UserDetails();
User1.CheckBalance();
User1.Withdrawn(20000);
User1.CheckBalance();
User1.Loan(60000);


