#include <cdhGE/core/Logger.h>

int main(int argc, char*argv[])
{
  cdhGE::Logger::setLogLevel(cdhGE::Logger::LEVEL_TRACE);
  CDHGE_LOG_DEBUG << 111;
  return 0;
}