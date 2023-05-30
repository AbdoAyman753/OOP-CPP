#include "Bank.h"
#include "Account.h"
#include <iostream>
using namespace std;

//Here the accounts array has a fixed size,
//if we want to add more account, we can use another array with a bigger size and memcopy the data to it.
//Or just use vector instead of array.
//Incase of real data, the data is stored on the hard disk (in a file) not the memory.
Bank::Bank():accounts(new Account[1000]),usedAccount(new bool[1000])
{
    //ctor
    //Account::nextAccountNo -= Account::nextAccountNo;
}

Bank::Bank(const Bank& other) = delete;

Bank::~Bank()
{
    if(accounts != nullptr)
        delete [] Bank::accounts;
}

Bank& Bank::getInstance(){
    static Bank object;
    return object;
}

void Bank::openAccount(const string& fName,const string& lName,const float& balance){
    Account temp (fName,lName,balance);
    accounts[temp.getAccountNo()] = temp;
    usedAccount[temp.getAccountNo()]=1;
    /*Bank::accounts[Account::nextAccountNo].setFirstName(fName);
    Bank::accounts[Account::nextAccountNo].setLastName(lName);
    Bank::accounts[Account::nextAccountNo].setBalance(balance);
    Bank::
    Account::nextAccountNo++;*/
}
int Bank::balanceInquiry(const long& accountNumber){
    return accounts[accountNumber].getBalance();
}
void Bank::deposit(const long& accountNumber,const float& amount){
    accounts[accountNumber].deposit(amount);
}
void Bank::withdraw(const long& accountNumber,const float& amount){
    accounts[accountNumber].withdraw(amount);
}
void Bank::closeAccount(const long& accountNumber){

    cout<<accounts[accountNumber].getFName()<<" "
    <<accounts[accountNumber].getLName()<<" account closed..."<<endl;

    accounts[accountNumber].setFirstName("");
    accounts[accountNumber].setLastName("");
    accounts[accountNumber].setBalance(0);
    usedAccount[accountNumber] = 0;
}
void Bank::showAllAccounts(){
    for(int i = 0; i< Account::nextAccountNo;i++){
        if(usedAccount[i]){
            cout<< accounts[i] <<endl;
        }
    }
}
