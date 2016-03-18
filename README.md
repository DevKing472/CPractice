A dummy example of separate compilation in C++11 just for reference.

To make the executable on the command line using g++, run the following command:

    g++ -std=c++11 -o main main.cpp something.cpp

I've also added a makefile to execute this command. Just run `make` to accomplish the above separate compilation. Run `make clean` to remove the executable from the directory.

