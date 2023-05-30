#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <iostream>
using namespace std;

class Account
{
    private:
        string firstName;
        string lastName;
        int accountNo;
        int balance;
    public:
        static int nextAccountNo;

        Account();
        Account(string fName,string lName,int blnc);
        Account(const Account& other);
        virtual ~Account();
        //Methods
        void deposit(const float& amount);
        void withdraw(const float& amount);
        //Setters
        void setFirstName(const string& fName);
        void setLastName(const string& lName);
        void setBalance(const int& blnc);
        //Getters
        string getFName()const;
        string getLName()const;
        int getBalance()const;
        int getAccountNo()const;
        friend ostream& operator<<(ostream& out, const Account& acc);
        //ostream& operator<<(ostream& out);

};

#endif // ACCOUNT_H
