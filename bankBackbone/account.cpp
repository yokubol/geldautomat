// classes example
#include "account.h"
using namespace std;

Account::Account (int id, int password, int balance) {
  this->id = id;
  this->password = password;
  this->balance = balance;
}

bool Account::withdraw (int amount) {
  int result = balance-amount;
  if(result >= 0) {
    balance = result;
    return true;
  }
  return false;
}

bool Account::verifyId (int id) {
  if(this->id == id) {
    return true;
  }
  return false;
}

bool Account::verifyPassword (int password) {
  if(this->password == password) {
    return true;
  }
  return false;
}

bool Account::verifyAccount (int id, int password) {
  return verifyId(id) && verifyPassword(password);
}

int Account::getBalance() {
  return balance;
}
