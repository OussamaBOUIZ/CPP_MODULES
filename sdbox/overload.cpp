#include <iostream>

class Account {
    int deposits;
    int withdrawals;
    int total;
    public:
        Account(int dep, int wit, int tot);
        Account &operator+ ( Account const &obj1, Account const &obj2);
        void    displayInfos( void ) const;
};

Account::Account(int dep, int wit, int tot) : deposits(dep), withdrawals(wit), total(tot) {}

Account &Account::operator+ (Account const  &obj1, Account const &obj2) {
    deposits = obj1.deposits + obj2.deposits;
    withdrawals = obj1.withdrawals + obj2.withdrawals;
    total = obj1.total + obj2.total;
    return (*this);
}

void    Account::displayInfos( void ) const {
    std::cout << deposits << std::endl;
    std::cout << withdrawals << std::endl;
    std::cout << total << std::endl;
}

int main()
{
    Account samAccount(4, 5, 6);
    Account noiceAccount(2, 3, 4);

    Account samNoice = samAccount + noiceAccount;

    samNoice.displayInfos();
}