// 🌟 Scenario: Bank Account Management System
#include<bits/stdc++.h>
using namespace std;

class Bank{
    private:  //using private variables to restrict the direct access
    string accountHolderName;
    string accountNumber;
    double balance;
    public:  // public methods getters and setters to access and update values
    string getaccountHolderName(){
        return accountHolderName;
    }
    string getaccountNumber(){
        return accountNumber;
    }
    double getBalance(){
        return balance;
    }
    void deposit(double amt){
        balance+=amt;
        cout<<"Deposited: "<<amt<<endl;
    }
    void withdraw(double amt){
        if(amt<balance){
        balance-=amt;
        cout<<"Withdrawn: "<<amt<<endl; }
        else{
            cout<<"Amount can not be withdrawn."<<endl;
        }
    }
    Bank(string accountHolderName, string accountNumber, double balance){
        this->accountHolderName=accountHolderName;
        this->accountNumber=accountNumber;
        this->balance=balance;
    }
    ~Bank(){
         cout << "Account of " << accountHolderName << " is being closed.\n";
    }

};

int main(){
    Bank* b1=new Bank("Mr Vikas Doda", "pnb18990", 100000);
    cout<<"accountHolderName is : "<<b1->getaccountHolderName()<<endl;
    cout<<"accountNumber is: "<<b1->getaccountNumber()<<endl;
    cout<<"balance is: "<<b1->getBalance()<<endl;
    b1->deposit(500);
       cout<<"balance is: "<<b1->getBalance()<<endl;
    b1->withdraw(200);
        cout<<"balance is: "<<b1->getBalance()<<endl;
    delete b1;
    return 0;
}