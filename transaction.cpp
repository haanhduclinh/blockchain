#include <iostream>
#include <string>
#include <vector>

class Transaction{
  public:
    Transaction();
    string sender;
    string recipient:
    float amount;

    vector<Transaction> currentTransaction();

    void addTransaction(Transaction tNew);

  private:

    vector<Transaction> _vTransaction;
}

Transaction::Transaction(){
  vector<Transaction> _vTransaction;
}

vector<Transaction> Transaction::currentTransaction(){
  return _vTransaction;
}

void Transaction::addTransaction(Transaction tNew)(){
  if((!tNew.sender) || (!tNew.recipient) || (amount < 0)){
    cout << "Invalid transaction" << endl;
  }else{
    _vTransaction.push_back(tNew)
    cout << "New Transaction" << endl;
  }
}