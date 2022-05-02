CPP="g++"
PYTHON="python3"
LD="ld"
JAVAC="javac"

default: test

test: helpme jar
	./helpme
	java -jar thejar.jar

helpme: helpme.o
	$(LD) helpme.o -o helpme

helpme.o: helpme.cpp
	$(CPP) helpme.cpp -o helpme.o

thejar: Main.class
	jar -c -e Main -f thejar.jar *.class

Main.class: Main.java
	$(JAVAC) Main.java

clean:
	rm -f helpme helpme.o
