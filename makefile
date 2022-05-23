CC="gcc"
CPP="g++"
PYTHON="python3"
JAVAC="javac"

default: all

test: all
	./helpme
	java -jar thejar.jar

all: helpme thejar bea

helpme: helpme.o
	$(CPP) helpme.o -o helpme

bea: bea.o
	$(CC) bea.o -o bea

bea.o: bea.c
	$(CC) -c bea.c -o bea.o

helpme.o: helpme.cpp
	$(CPP) -c helpme.cpp -o helpme.o

thejar: BeA.class
	jar -c -e BeA -f thejar.jar *.class

BeA.class: BeA.java
	$(JAVAC) BeA.java

clean:
	rm -f helpme helpme.o *.class *.jar a.out
