#include "Account.h"


int Account::nextAccountNo = 1;
//Default CTOR
Account::Account():firstName(""),lastName(""),accountNo(0),balance(0){}

//Parametrized CTOR
Account::Account(string fName,string lName,int blnc):firstName(fName),
lastName(lName),accountNo(nextAccountNo++),balance(blnc){}

//Copy CTRO
Account::Account(const Account& other):firstName(other.firstName),
lastName(other.lastName),accountNo(other.accountNo),balance(other.balance){}

//DTOR
Account::~Account(){}

//Methods
void Account::deposit(const float& amount){
    balance += static_cast<int>(amount);
}
void Account::withdraw(const float& amount){
    if(Account::balance >= static_cast<int>(amount))
        Account::balance -= static_cast<int>(amount);
    else
        std::cout<<"Insufficient Funds."<<std::endl;
}
//Setters
void Account::setFirstName(const string& fName){
    Account::firstName = fName;
}
void Account::setLastName(const string& lName){
    Account::lastName = lName;
}
void Account::setBalance(const int& blnc){
    Account::balance = blnc;
}
//Getters
string Account::getFName()const{
    return Account::firstName;
}
string Account::getLName()const{
    return Account::lastName;
}
int Account::getBalance()const{
    return Account::balance;
}
int Account::getAccountNo()const{
    return Account::accountNo;
}

ostream& operator<<(ostream& out, const Account& acc ){
    //ostream out;
    out<<"[Name: "<<acc.getFName()<<" "<<acc.getLName()<<" , Balance: "
    <<acc.getBalance()<<" ,Account No.: "<<acc.getAccountNo()<<"]";

    return out;
}
