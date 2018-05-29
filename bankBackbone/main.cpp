#include <iostream>
#include <string>
#include <stdlib.h>
#include <list>
#include <fstream>

#include "bank.h"

using namespace std;

int main(){
  int id, password, amount, false_try = 0;

  fstream file;
  string str;
  file.open("/dev/ttyACM0");
  // file >> str; // press a button to assign a string

  Account account1(1,123,1000);
  Account account2(2,456,2000);

  list<Account> accounts;

  for(int i = 1; i <= 10; i++) {
    Account account(i,101+i,1000*i);
    accounts.push_back(account);
  }

  Bank bank(accounts);

  while(false_try < 3) {
    cout << "Please enter your id (then confirm): ";
    cin >> id; // read from computer keyboard

    file >> str; // wait for button to be pressed

    cout << endl << "Please enter your password (then confirm): ";
    cin >> password; // user enter password here. read from computer keyboard

    file >> str; // wait for button to be pressed

    Account* account = bank.getAccountFromCredentials(id,password);

    if(account != NULL) {
        cout << endl << "Your credential is correct." << endl << "Please enter amount you want to withdraw (then confirm): ";
        cin >> amount; // read from computer keyboard

        file >> str; // wait for button to be pressed

        if(account->withdraw(amount)) {
          cout << endl << "You withdrawed " << amount << ". ";
          cout << "Your current balance is " << account->getBalance() << "." << endl;
          cout << "Thank you." << endl;
          break;
        }
        else
        {
          cout << "Not enough money." << endl;
        }
    }
    else {
      cout << "Wrong credential. Try again." << endl;
      false_try++;
    }
  }
	return 0;
}
