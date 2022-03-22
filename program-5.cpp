// Write a class ACCOUNT that represents your bank account and then use it.
// The class should allow you to
// deposit money,
// withdraw money,
// calculate intrest
// send you a message if you have insufficient balance
#include <iostream>

using namespace std;

class Account
{
private:
    int ac_num;
    double balance = 0;

public:
    Account(int num)
    {
        ac_num = num;
    }
    double getBalance()
    {
        return balance;
    }
    double getAccNum()
    {
        return ac_num;
    }
    void deposit(double money);
    void withdraw(double money);
    double simpleIntrest(double rate, double years);
};

void Account::deposit(double money)
{
    balance += money;
}
void Account::withdraw(double money)
{
    if (money > balance)
    {
        cout << "You have insufficient balance\n";
    }
    else
    {
        balance -= money;
    }
}
double Account::simpleIntrest(double rate, double years)
{
    return (balance * rate * years) / 100;
}
int main()
{
    int acc_num, input = 0;
    double money, rate, tm;
    cout << "Bank Accout" << endl;
    cout << "Enter an account number to create an account: ";
    cin >> acc_num;
    Account ac1 = acc_num;
    while (input >= 0 && input < 6)
    {
        cout << "\n\nChose one of the following operations: \n"
             << "1.Get Account Number\n"
             << "2.Get Balance\n"
             << "3.Deposite Money\n"
             << "4.Withdraw Money\n"
             << "5.Calculate Simple Intrest\n"
             << "6.Exit\n";
        cout << "Enter your choice: ";
        cin >> input;
        switch (input)
        {
        case 1:
            cout << "Account Number: " << ac1.getAccNum() << endl;
            break;
        case 2:
            cout << "Balance: " << ac1.getBalance() << endl;
            break;
        case 3:
            cout << "Enter amount to deposit: ";
            cin >> money;
            ac1.deposit(money);
            cout << money << " has been successfully deposited.\n";
            break;
        case 4:
            cout << "Enter amount to Withdraw: ";
            cin >> money;
            ac1.withdraw(money);
            break;
        case 5:
            cout << "Enter Rate for Intrest: ";
            cin >> rate;
            cout << "Enter time in years: ";
            cin >> tm;
            cout << "Simple Intrest is: " << ac1.simpleIntrest(rate, tm) << '\n';
            break;
        default:
            cout << "Please Enter a valid option\n";
        }
    }

    return 0;
}
