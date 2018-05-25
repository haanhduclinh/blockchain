#include "log.h"

Log::Log(){}

string Log::getCurrentTime(){
  stringstream ss;
  time_t t = time(0);   // get time now
  tm* now = localtime(&t);
  ss << (now->tm_year + 1900) \
     << '-' << (now->tm_mon + 1) \
     << '-' <<  now->tm_mday \
     << '-' <<  now->tm_hour \
     << ':' <<  now->tm_min \
     << ':' <<  now->tm_sec \
     << "\n";
  return ss.str();
}

void Log::printLog(string sInputLog){
  cout << "INFO: " << getCurrentTime() << sInputLog << endl;
}