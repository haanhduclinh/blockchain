#ifndef TESTCHAIN_BLOCK_H
#define TESTCHAIN_BLOCK_H

  #include <cstdint>
  #include <iostream>
  #include <string>
  #include "sha256.h"
  #include <sstream>
  #include "json.hpp"

// for convenience
  using json = nlohmann::json;
  // for convenience
  using namespace std;

  class Block {
    public:
      string sPrevHash;

      Block(uint64_t nIndexIn, const string &DataIn);

      Block MineBlock(uint64_t nDifficulty, string WalletAddress);

      string GetHash();

      uint64_t _nIndex;
      uint64_t _nNonce;
      string _sData;
      vector<string> _sHash;
      string _sSender;
      string _sRecipient;
      float _fAmount;
      time_t _tTime;

      vector<string> _CalculateHash() const;
  };

#endif