// create a class bankaccount wih private attributes account numebr and balance ,
// implement public methods depsit , withdraw and getbalance and to manage the account

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{

    int accountNo;
    int Balance = 1000;

public:
    // set account no
    void setaccount(int accountN1o)
    {
        accountNo = accountN1o;
    }

    int getaccount()
    {
        return accountNo;
    }

    int deposit(int dep)
    {
        Balance = Balance + dep;
    }

    int withdraw(int wid)
    {
        Balance = Balance - wid;
    }

    int getBalance()
    {
        return Balance;
    }

    void showStatement()
    {

        cout << " Accoutn no: " << getaccount() << endl;
        cout << "Your toal balance is: " << getBalance() << endl;
    }
};

void ATM()
{

    int n;

    do
    {
        BankAccount cus1;
        cus1.setaccount(361076);
        int op;
        int dep;
        int amt;

        cout << "Welcome to sbi account" << endl;
        cout << "Which service do you want:\n click 1. for deposit\n click 2. for withdraw \n click 3. for show statement \n";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "enter deposit amount\n";
            cin >> dep;
            cus1.deposit(dep);
            break;
        case 2:
            cout << "enter amount to withdraw: \n";
            cin >> amt;
            if (cus1.getBalance() == 0)
            {
                cout << "there is no balance in your bank account ";
            }
            else if (amt > cus1.getBalance())
            {
                cout << "you have trying to withdraw more amount than your available balance ! please enter again your amount";
            }
            else
            {
                cus1.withdraw(amt);
                cout << "successfully withdraw" << endl;
            }
            break;
        case 3:
            cus1.showStatement();
            break;

        default:
            break;
        }

        cout << "enter for another operation: \n for exit click 0 \n ";
        cin >> n;

    } while (n != 0);
}

int main()
{
    ATM();

    return 0;
}