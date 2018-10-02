USD_INCDIR=-I/home/syoyo/local/USD/include/
USD_LIBDIR=-L/home/syoyo/local/USD/lib
USD_LIBS=-larch -lplug -ltf -lsdf

all:
	clang++ -std=c++11 $(USD_INCDIR) main.cc $(USD_LIBDIR) $(USD_LIBS)
