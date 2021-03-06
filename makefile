# This program is free software; you can redistribute
# it and/or modify it under the terms of the GNU
# General Public License

objects = *.o
# Appending More Text to Variables
#objects += MainClient.o

CFLAGS      = $(include_dir)
include_dir = -I./lib/inc/

INCDIR      = lib/inc
SRCDIR	    = lib/src

# Extra flags to give to the C++ compiler
CXXFLAGS = 
CDEBUG   = -g

all : MainClient

# -L<library path> - specify a lib directory
# -l<library> - link with library lib<library>.a
# -dl pour dlopen, dlsym, dlclose
MainClient : libPrivate.so MainClient.o
	gcc $(CDEBUG) -o MainClient MainClient.o -L. -lPrivate -ldl

# -o <name> - name of the output file
libPrivate.so: lib/src/PrivateTreatment.cpp lib/inc/PrivateTreatment.h
	g++ $(CFLAGS) -c -o CTreatment.o $(SRCDIR)/CTreatment.cpp
	g++ $(CFLAGS) -c -o CConfig.o $(SRCDIR)/CConfig.cpp
	g++ $(CFLAGS) -c -o CMethod.o $(SRCDIR)/CMethod.cpp
	g++ $(CFLAGS) -c -o PrivateTreatment.o lib/src/PrivateTreatment.cpp
	g++ $(CFLAGS) -c -o CGraph.o lib/algo/CGraph.cpp
	# Can build this shared object libPrivate.so
	g++ -Wall -shared -fPIC -o libPrivate.so $(SRCDIR)/PrivateTreatment.cpp \
		$(SRCDIR)/CTreatment.cpp $(SRCDIR)/CConfig.cpp $(SRCDIR)/CMethod.cpp

CTreatment.o : lib/src/CTreatment.cpp  lib/inc/CTreatment.h
	g++ -Wall -c $(SRCDIR)/CTreatment.cpp

install:
	LD_LIBRARY_PATH=.
	export LD_LIBRARY_PATH

# Avoid pb if a file named clean is ever created in this directory
.PHONY: clean
clean:
	rm $(objects) *.so
	rm MainClient
	@echo 'suppression effectuee'
