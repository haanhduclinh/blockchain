# simple c++ blockchain
basic component block chain. Create block, mining

# How to compile

```
make
sudo chmod +x ./blockchain
./blockchain
```

# Result

```
duclinh@debian ~/source $ ./blockchain 
INFO: 2018-5-25-14:32:13
Mining block 1...
Block mined: 0000069934d4fb5c1ecd70ec28015322e5c66b6124b1c0bcee475ec20abf5589
Block detail: {"index":65280,"nonce":1218985,"previous_hash":"885db35525b8fe9ff8c60145629cd6857b466dd830b96fbe9ba4e9acb7fbbdf1","proof":"","timestamp":1527233533,"transactions":[{"amount":5.0,"recipient":"e064ae7ff58d666ac8d96b1d86d213257d9dab9b541ed81d0d20b8b553ef3d66","sender":"SYSTEM"}]}
INFO: 2018-5-25-14:32:54
Mining block 2...
Block mined: 00000c4f3256df0647780a79c7629f27f788f8f386cb099d04d410a473cca4cf
Block detail: {"index":65280,"nonce":530136,"previous_hash":"0000069934d4fb5c1ecd70ec28015322e5c66b6124b1c0bcee475ec20abf5589","proof":"","timestamp":1527233574,"transactions":[{"amount":5.0,"recipient":"e064ae7ff58d666ac8d96b1d86d213257d9dab9b541ed81d0d20b8b553ef3d66","sender":"SYSTEM"}]}
INFO: 2018-5-25-14:33:12
Mining block 3...
Block mined: 00000c3ebed0183852072598dfdea25c13c40d9e88f682726798f9bb063eeffa
Block detail: {"index":65280,"nonce":1279871,"previous_hash":"00000c4f3256df0647780a79c7629f27f788f8f386cb099d04d410a473cca4cf","proof":"","timestamp":1527233592,"transactions":[{"amount":5.0,"recipient":"e064ae7ff58d666ac8d96b1d86d213257d9dab9b541ed81d0d20b8b553ef3d66","sender":"SYSTEM"}]}
INFO: 2018-5-25-14:33:56
Mining block 4...
Block mined: 00000354c4127243d22ac3d595a030f866be298d801fb5659ec52f74578aadcc
Block detail: {"index":65280,"nonce":579077,"previous_hash":"00000c3ebed0183852072598dfdea25c13c40d9e88f682726798f9bb063eeffa","proof":"","timestamp":1527233636,"transactions":[{"amount":5.0,"recipient":"e064ae7ff58d666ac8d96b1d86d213257d9dab9b541ed81d0d20b8b553ef3d66","sender":"SYSTEM"}]}
INFO: 2018-5-25-14:34:16
Mining block 5...
Block mined: 00000213a27f9705d77e3ce7f95bc445dfd8fbec3fb3a82e47b9007754e9c848
Block detail: {"index":65280,"nonce":57284,"previous_hash":"00000354c4127243d22ac3d595a030f866be298d801fb5659ec52f74578aadcc","proof":"","timestamp":1527233656,"transactions":[{"amount":5.0,"recipient":"e064ae7ff58d666ac8d96b1d86d213257d9dab9b541ed81d0d20b8b553ef3d66","sender":"SYSTEM"}]}
INFO: 2018-5-25-14:34:18
Mining block 6...
Block mined: 00000cb51572753d7b7ef472eca857c29f8db8c2527ff072ff43eae45782f33e
Block detail: {"index":65280,"nonce":162642,"previous_hash":"00000213a27f9705d77e3ce7f95bc445dfd8fbec3fb3a82e47b9007754e9c848","proof":"","timestamp":1527233658,"transactions":[{"amount":5.0,"recipient":"e064ae7ff58d666ac8d96b1d86d213257d9dab9b541ed81d0d20b8b553ef3d66","sender":"SYSTEM"}]}
INFO: 2018-5-25-14:34:23
Mining block 7...
Block mined: 000002c7002ba34c050cebb05131cc720107211a4ee584526fe11c25ba807c3f
Block detail: {"index":65280,"nonce":535557,"previous_hash":"00000cb51572753d7b7ef472eca857c29f8db8c2527ff072ff43eae45782f33e","proof":"","timestamp":1527233663,"transactions":[{"amount":5.0,"recipient":"e064ae7ff58d666ac8d96b1d86d213257d9dab9b541ed81d0d20b8b553ef3d66","sender":"SYSTEM"}]}
INFO: 2018-5-25-14:34:42
Mining block 8...
Block mined: 0000053a909ff9cc557c9d39a13dcde5c0abdab90b53a6dd8ad2af6d4e5cdeca
Block detail: {"index":65280,"nonce":1016721,"previous_hash":"000002c7002ba34c050cebb05131cc720107211a4ee584526fe11c25ba807c3f","proof":"","timestamp":1527233682,"transactions":[{"amount":5.0,"recipient":"e064ae7ff58d666ac8d96b1d86d213257d9dab9b541ed81d0d20b8b553ef3d66","sender":"SYSTEM"}]}
INFO: 2018-5-25-14:35:17

```