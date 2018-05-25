#ifndef TESTCHAIN_LOG_H
#define TESTCHAIN_LOG_H

  #include <iostream>
  #include <string>
  #include <ctime>
  #include <sstream>

  using namespace std;

  class Log{
    public:
      Log();
      
      void printLog(string sInputLog);

      string getCurrentTime();
  };

#endif