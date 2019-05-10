#ifndef CREATEEXCEPTION_H
#define CREATEEXCEPTION_H

typedef enum {
  ERROR_FILE_NOT_FOUND,
  ERROR_OUT_OF_MEMORY,
  ERROR_UNIT_TEST,
  ERROR_NUM
} E_ErrorCode;

class CreateException
{
private:
   E_ErrorCode code;
   char*       reason;
public:
   CreateException(E_ErrorCode c, const char* msg);
   virtual ~CreateException();
   E_ErrorCode getCode();
   char* getReason();
};

#endif // CREATEEXCEPTION_H
