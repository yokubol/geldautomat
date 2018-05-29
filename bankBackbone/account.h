// classes example
#include <iostream>
using namespace std;

class Account {
private:
    int id;
    int password;
    int balance;

  public:
    Account (int id, int password, int balance);

    bool withdraw (int amount);

    bool verifyId (int id);

    bool verifyPassword (int password);

    bool verifyAccount (int id, int password);

    int getBalance();

};
