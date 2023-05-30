#ifndef BANK_H
#define BANK_H

#include <string>
class Account;

class Bank
{
    private:
        Account* accounts;
        //used to keep track of used account,
        //specially when an account is closed, so we can reuse its number.
        bool* usedAccount;
        Bank();
        Bank(const Bank& other);
    public:
        virtual ~Bank();

        static Bank& getInstance();
        void openAccount(const std::string& fName, const std::string& lName,const float& balance);
        int balanceInquiry(const long& accountNumber);
        void deposit(const long& accountNumber, const float& amount);
        void withdraw(const long& accountNumber, const float& amount);
        void closeAccount(const long& accountNumber);
        void showAllAccounts();

};

#endif // BANK_H
