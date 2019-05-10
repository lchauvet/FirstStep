objects = *.o
# Appending More Text to Variables
objects += MainClient.o

CFLAGS      = $(include_dir)
include_dir = -I./lib/inc/

# Extra flags to give to the C++ compiler
CXXFLAGS = 

all : MainClient

# -L<library path> - specify a lib directiry
# -l<library> - link with library lib<library>.a
# -dl pour dlopen, dlsym, dlclose
MainClient : libPrivate.so MainClient.o
	gcc -g -o MainClient MainClient.o -L. -lPrivate -ldl

# -o <name> - name of the output file
libPrivate.so: lib/src/PrivateTreatment.cpp lib/inc/PrivateTreatment.h
	g++ $(CFLAGS) -c -o CTreatment.o lib/src/CTreatment.cpp
	g++ $(CFLAGS) -c -o CConfig.o lib/src/CConfig.cpp
	g++ $(CFLAGS) -c -o CMethod.o lib/src/CMethod.cpp
	g++ $(CFLAGS) -c -o PrivateTreatment.o lib/src/PrivateTreatment.cpp
	#g++ $(CFLAGS) -c -o CGraph.o lib/algo/CGraph.cpp
	g++ -Wall -shared -fPIC -o libPrivate.so lib/src/PrivateTreatment.cpp \
		lib/src/CTreatment.cpp lib/src/CConfig.cpp lib/src/CMethod.cpp

CTreatment.o : lib/src/CTreatment.cpp lib/inc/CTreatment.h
	g++ -Wall -c lib/src/CTreatment.cpp

install:

# Avoid pb if a file named clean is ever created in this directory
.PHONY: clean
clean: ; @echo 'Destruction des fichiers'
	rm $(objects) *.so
	rm MainClient
