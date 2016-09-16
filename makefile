main: main.o ingeniero.o aerodinamico.o mecanico.o electronico.o 
	g++ main.o ingeniero.o aerodinamico.o mecanico.o electronico.o -o lab8  
	
main.o:	main.cpp ingeniero.h aerodinamico.h mecanico.h electronico.h 
	g++ -c main.cpp --std=c++11 

ingeniero.o:		ingeniero.cpp ingeniero.h
	g++ -c ingeniero.cpp 

aerodinamico.o:	aerodinamico.cpp aerodinamico.h ingeniero.h
	g++ -c aerodinamico.cpp

mecanico.o:	mecanico.cpp mecanico.h ingeniero.h
	g++ -c mecanico.cpp

electronico.o:	electronico.cpp electronico.h ingeniero.h
	g++ -c electronico.cpp

