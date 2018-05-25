#ifndef TESTCHAIN_BLOCKCHAIN_H
#define TESTCHAIN_BLOCKCHAIN_H

  #include <cstdint>
  #include <vector>
  #include "block.h"

  using namespace std;

  class Blockchain {
    public:
      Blockchain();

      void AddBlock(Block bNew,string WalletAddress);

    private:
      uint64_t _nDifficulty;
      vector<Block> _vChain;

      Block _GetLastBlock() const;
  };

#endif