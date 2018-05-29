#include "bank.h"

using namespace std;

Bank::Bank(list<Account> accounts) {
  this->accounts = accounts;
}

Account* Bank::getAccountFromCredentials(int id, int password) {
  for (list<Account>::iterator it = accounts.begin(); it != accounts.end(); ++it){
    if(it->verifyAccount(id, password)) {
      return &*it;
    }
  }
  return NULL;
}
