#include "blockchain.h"
#include "log.h"

int main(){
  Blockchain bchain = Blockchain();
  Log lLog = Log();

  lLog.printLog("Mining block 1...");

  for(int i = 2; i < 10; ++i){
    stringstream text_log;

    text_log << "Mining block " << i << "...";

    Block b = Block(i, text_log.str());
    string myWallet = sha256("haanhduclinh");

    bchain.AddBlock(b, myWallet);

    lLog.printLog(text_log.str());
  }
  
  return 0;
}