// classes example
#include <iostream>
#include<list>
#include "account.h"
using namespace std;

class Bank {
  private:
    list<Account> accounts;
  public:
    Bank(list<Account>);
    Account* getAccountFromCredentials(int id, int password);
};
