#include "PrivateTreatment.h"

#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>

typedef int (*T_func1)(int,char*);
typedef int (*T_func2)(int);

T_func1 func1;
T_func2 func2;

int main(int argc, char** argv) {
   int      res = 0;
   void*    handle;
   char*    error;

   handle = dlopen("libPrivate.so", RTLD_LAZY);
   if (!handle)
   {
      fprintf(stderr,"%s\n",dlerror());
      exit(1);
   }

   func1 = (T_func1) dlsym(handle,"function1");
   if ((error = dlerror()) != NULL)
   {
     fprintf(stderr,"%s\n",error);
     exit(1);
   }
   res = (int)func1(1,NULL);

   printf("\nIn function %s , function1 return %d\n",__FUNCTION__,res);

   func2 = (T_func2) dlsym(handle,"function2");
   if ((error = dlerror()) != NULL)
   {
     fprintf(stderr,"%s\n",error);
     exit(1);
   }
   res = (int)func2(1);
   printf("\nIn function %s , function2 return %d\n",__FUNCTION__,res);

   dlclose(handle);
   return(0);
}
