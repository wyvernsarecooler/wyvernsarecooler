CPP="g++"
PYTHON="python3"
JAVAC="javac"

default: test

test: helpme thejar
	./helpme
	java -jar thejar.jar

helpme: helpme.o
	$(CPP) helpme.o -o helpme

helpme.o: helpme.cpp
	$(CPP) -c helpme.cpp -o helpme.o

thejar: Main.class
	jar -c -e Main -f thejar.jar *.class

Main.class: Main.java
	$(JAVAC) Main.java

clean:
	rm -f helpme helpme.o *.class *.jar a.out
