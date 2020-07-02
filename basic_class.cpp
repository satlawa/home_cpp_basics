#include <iostream>
#include <string>

class BankAccount
{
  private:
      // TODO: declare member variables
    int account_nr;
    std::string owner;
    float funds;

  public:
      // TODO: declare setters
    void Account_nr(int acc_nr);
    void Owner(std::string own);
    void Funds(float fund);

      // TODO: declare getters
    int Account_nr() const { return account_nr; }
    std::string Owner() const { return owner; }
    float Funds() const { return funds; }
};

// TODO: implement setters
void BankAccount::Account_nr(int acc_nr) {
    account_nr = acc_nr;
}
void BankAccount::Owner(std::string own) {
    owner = own;
}
void BankAccount::Funds(float fund) {
    funds = fund;
}
// TODO: implement getters

int main(){
    // TODO: instantiate and output a bank account
    BankAccount ba;
    ba.Account_nr(1290);
    ba.Owner("Oleg Machow");
    ba.Funds(3999.02);
    
    std::cout << "+++++++++++++++++++++++++++++++" << std::endl;
    std::cout << "account: " << ba.Account_nr() << std::endl;
    std::cout << "owner: " << ba.Owner() << std::endl;
    std::cout << "funds: " << ba.Funds() << std::endl;
}
