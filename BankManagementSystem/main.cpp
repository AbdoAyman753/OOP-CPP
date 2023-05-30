#include <iostream>

#include "Account.h"
#include "Bank.h"
using namespace std;

enum transaction{
    QUIT = 0,
    OPENACCOUNT = 1,
    BALANCEINQUIRY =2,
    DEPOSIT = 3,
    WITHDRAW = 4,
    CLOSEACCOUNT = 5

};
//int Account::nextAccountNo = 1;

/*ostream& operator<<(ostream& out, const Account& acc){
    //ostream out;
    out<<"[Name: "<<acc.getFName()<<" "<<acc.getLName()<<" , Balance: "
    <<acc.getBalance()<<" , Account No.: "<<acc.getAccountNo()<<"]";

    return out;
}*/

int main()
{
    Bank& bank = Bank::getInstance();
    int user_transaction;
    string first_name, last_name;
    long accountNumber;
    float balance, amount;
    do {
        cout<<"What operation you want to do?"<<endl
        <<"1) Open Account \n2) Balance Inquiry\n3) Deposit\n4) Withdraw\nPress 0 to Quit."<<endl;
        cin>>user_transaction;
        if (user_transaction == OPENACCOUNT){
            cout<<"Please Enter your[first name, last name, balance]:"<<endl;
            cin>>first_name>>last_name>>balance;
            bank.openAccount(first_name,last_name,balance);
            cout<<"Test Monitor, All accounts registered: "<<endl;
            bank.showAllAccounts();
            cout<<endl;
        }else if(user_transaction == BALANCEINQUIRY){
            cout<<"Please Enter Account Number:"<<endl;
            cin>>accountNumber;
            cout<<"Your balance is: "<<bank.balanceInquiry(accountNumber)<<endl;
        }else if(user_transaction == DEPOSIT){
            cout<<"Please Enter Account Number and Amount to deposit:"<<endl;
            cin>>accountNumber>>amount;
            bank.deposit(accountNumber,amount);
            cout<<"Your balance is: "<<bank.balanceInquiry(accountNumber)<<endl;
        }else if(user_transaction == WITHDRAW){
            cout<<"Please Enter Account Number and Amount to withdraw:"<<endl;
            cin>>accountNumber>>amount;
            bank.withdraw(accountNumber,amount);
            cout<<"Your balance is: "<<bank.balanceInquiry(accountNumber)<<endl;
        }else if(user_transaction == CLOSEACCOUNT){
            cout<<"Please Enter Account Number :"<<endl;
            cin>>accountNumber;
            bank.closeAccount(accountNumber);
            cout<<"Your Account has been closed."<<endl;
        }
        // Continue the other transactions.
        } while(user_transaction != QUIT);
        cout<<"Thank you for using our Services."<<endl;
    /*bank.openAccount("Abdelrahman","ayman",200);
    bank.openAccount("Ali","Mohamed",30000);
    bank.openAccount("Loay","Mohamed",600);
    bank.openAccount("John","Paul",70000);
    bank.closeAccount(1);
    bank.showAllAccounts();*/
    return 0;
}
