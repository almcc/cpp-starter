#include <iostream>

#include "Logger.h"
#include "Dummy.h"

using namespace std;

int main(int argc, char *argv[])
{
  int success = 0;
  Logger logger;
  logger.setLevel(SHOUT);
  logger.logWarning("Hello World");

  Dummy dumb;
  logger.logDebug("My message", &dumb);
  return success;
}

