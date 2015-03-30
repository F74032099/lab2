A: A.o a.o
	g++ -o A A.o a.o

a.o: a.cpp a.h
	g++ -c a.cpp

A.o: A.cpp  
	g++ -c A.cpp

clean:
	rm A *.o

