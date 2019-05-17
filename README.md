FirstStep
==========
This document describes the installation process for linux.

Installation
============
You first need to copy the directory Firstep from github.
You can extract these files in any location you find appropriate.
In this example <directory>.

To generate the library libPrivate.so, use the following commands :
 $ cd /<directory>
 $ make all
 $ make install
               
To test the library written in C++, use the following command :
 $ cd /<directory>
 $ ./MainClient

Known problems
==============

Don't forget to enter the following command :
 $ export LD_LIBRARY_PATH=.
