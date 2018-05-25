#include "blockchain.h"

Blockchain::Blockchain(){
  _vChain.emplace_back(Block(0, "Zero Block"));
  _nDifficulty = 5;
}

void Blockchain::AddBlock(Block bNew,string WalletAddress){
  bNew.sPrevHash = _GetLastBlock().GetHash();
  Block b = bNew.MineBlock(_nDifficulty, WalletAddress);
  _vChain.push_back(b);
}

Block Blockchain::_GetLastBlock() const {
  return _vChain.back();
}