objects = *.o
# Appending More Text to Variables
# objects += MainClient.o

CFLAGS      = $(include_dir)
include_dir = -I./

# Extra flags to give to the C++ compiler
CXXFLAGS = 

all : MainClient

# -L<library path> - specify a lib directiry
# -l<library> - link with library lib<library>.a
# -dl pour dlopen, dlsym, dlclose
MainClient : libPrivate.so MainClient.o
	gcc -g -o MainClient MainClient.o -L. -lPrivate -ldl

# -o <name> - name of the output file
libPrivate.so: PrivateTreatment.cpp PrivateTreatment.h
	g++ $(CFLAGS) -c -o CTreatment.o CTreatment.cpp
	g++ $(CFLAGS) -c -o PrivateTreatment.o PrivateTreatment.cpp
	g++ $(CFLAGS) -c -o CreateException.o  CreateException.cpp
	g++ -Wall -shared -fPIC -o libPrivate.so PrivateTreatment.cpp \
		CTreatment.cpp \
		CreateException.cpp

CTreatment.o : CTreatment.cpp CTreatment.h
	g++ -Wall -c CTreatment.cpp

install:

# Avoid pb if a file named clean is ever created in this directory
.PHONY: clean
clean: ; @echo 'Destruction des fichiers'
	rm $(objects) *.so
	rm MainClient
