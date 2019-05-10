#include "./../inc/CreateException.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char* choice[ERROR_NUM] =
{
  "Couldn't find %s.",                    // ERROR_FILE_NOT_FOUND
  "Not enough memory to load %s.",        // ERROR_OUT_OF_MEMORY
  "Unit test : Error assertion with %s"   // ERROR_UNIT_TEST
};

CreateException::CreateException(E_ErrorCode c, const char* msg)
{
  const char* reasonString = choice[code];
  char* errorString = new char[strlen(reasonString) + strlen(msg)+1];
  sprintf(errorString, reasonString, msg);
  printf(errorString);
  reason = errorString;
  code   = c;
}

CreateException::~ CreateException()
{
  delete reason;
}


char* CreateException::getReason()
{
  return(reason);
}

E_ErrorCode CreateException::getCode()
{
  return(code);
}
