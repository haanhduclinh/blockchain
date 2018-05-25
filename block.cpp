#include "block.h"

Block::Block(uint64_t nIndexIn, const string &sDataIn) {
    _nNonce = -1;

    _tTime = time(nullptr);

    _sHash = _CalculateHash();
}

string Block::GetHash(){
  return _sHash[0];
}

Block Block::MineBlock(uint64_t nDifficulty, string WalletAddress){
  _sSender = "SYSTEM";
  _sRecipient = WalletAddress;
  _fAmount = 5;

  char cstr[nDifficulty + 1];
  for (uint64_t i = 0; i < nDifficulty; ++i){
    cstr[i] = '0';
  }

  cstr[nDifficulty] = '\0';

  string str(cstr);

  while (_sHash[0].substr(0, nDifficulty) != str){
    _nNonce++;
    _sHash = _CalculateHash();
  }

  cout << "Block mined: " << _sHash[0] << endl;
  cout << "Block detail: " << _sHash[1] << endl;

  Block result(_nIndex, _sData);

  result._nIndex = _nIndex;
  result._nNonce = _nNonce;
  result._sData = _sData;
  result._sSender = _sSender;
  result._sRecipient = _sRecipient;
  result._fAmount = _fAmount;
  result._tTime = _tTime;
  result._sHash = _sHash;
  return result;
}

inline vector<string> Block::_CalculateHash() const {
  json b;

  // block = {
  //   'index': 1,
  //   'timestamp': 1506057125.900785,
  //   'transactions': [
  //       {
  //           'sender': "SYSTEM",
  //           'recipient': "SYSTEM",
  //           'amount': 5,
  //       }
  //   ],
  //   'proof': 324984774000,
  //   'previous_hash': "2cf24dba5fb0a30e26e83b2ac5b9e29e1b161e5c1fa7425e73043362938b9824"
  // }

  b["index"] = _nIndex;
  b["timestamp"] = _tTime;
  b["transactions"][0]["sender"] = _sSender;
  b["transactions"][0]["recipient"] = _sRecipient;
  b["transactions"][0]["amount"] = _fAmount;
  b["proof"] = _sData;
  b["previous_hash"] = sPrevHash;
  b["nonce"] = _nNonce;

  // stringstream ss;
  // ss << _nIndex << _tTime << _sData << _nNonce << sPrevHash;

  // cout << b.dump();
  vector<string> result(2);
  result[0] = sha256(b.dump());
  result[1] = b.dump();

  return result;
}