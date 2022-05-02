CPP="g++"
PYTHON="python3"
LD="ld"

default: test

test: helpme
	./helpme

helpme: helpme.o
	$(LD) helpme.o -o helpme

helpme.o: helpme.cpp
	$(CPP) helpme.cpp -o helpme.o
