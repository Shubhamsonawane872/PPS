#include <iostream>
using namespace std;

class BankAccount{
  private :
  //Private Data members
  string accountNumber ;
  double balance ;
  
  public :
  //Constructor to initialize the bank account 
  BankAccount(string accNum , double initialBalance){
    accountNumber = accNum;
  balance = initialBalance;
  }
  //Public method to deposit money
  void deposit (double amount){
    if(amount > 0){
      balance += amount ;
    }
  }
  
  //Public Method to withdraw money 
  void withdraw(double amount){
    if(amount > 0 && amount <= balance){
      balance -=amount ;
    }else{
      cout<< "Insufficient Funds or invalid amount"<< endl;
    }
  }
  //Public method to check the balance
  double getBalance()const{
    return balance;
  }
  
  //Public method to display account details 
  void displayAccountDetails()const{
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: $"<< balance << endl;
  }
};



int main() 
{
    //Create a BankAccount Object 
    BankAccount myAccount("123456789 ", 1000.00);
    
    //Display account details 
    myAccount.displayAccountDetails();
    //Deposit money 
    myAccount.deposit(500.00);
    cout<< "After deposit"<< endl;
    myAccount.displayAccountDetails();
    
    //withdraw money 
    myAccount.withdraw (200.00);
    cout<< "After withdrawal:"<< endl;
    myAccount.displayAccountDetails();
    
    //Attempt to access private members directly (will cause a compile-time error)
    //myAccount.balance = 500.00; //Error : 'balance' is private
    // cout << myAccount.balance ; // Error: 'balance' is private
    return 0;
}