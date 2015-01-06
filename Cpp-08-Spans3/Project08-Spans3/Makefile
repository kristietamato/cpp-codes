cc = g++
FLAGS = -std=c++11

.PHONY : clean run

run : span
	-./span

span : main.o Tools.o Span.o
	$(cc) $(FLAGS) main.o Tools.o Span.o -o span

main.o : main.cpp Tools.h Span.h
	$(cc) $(FLAGS) -c main.cpp

Span.o : Span.cpp Span.h
	$(cc) $(FLAGS) -c Span.cpp

Tools.o : Tools.cpp Tools.h
	$(cc) $(FLAGS) -c Tools.cpp

clean :
	-\rm *.o
	-\rm span

