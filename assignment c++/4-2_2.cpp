#include <iostream>
using namespace std;

class bankAccount
{
    private:

    char Name_of_depositor[50];
    int account_number;
    char type_of_account[50];
    float balance_in_account;

    public:

    void account(char name, int number, char type, float balance)
    {
        Name_of_depositor = name;
        account_number = number;
        type_of_account = type;
        balance_in_account = balance;
    }

    void 

}