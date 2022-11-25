game_start.o: game_start.cpp game_start.h
	g++ -c game_start.cpp

file_io.o: file_io.cpp file_io.h
	g++ -c file_io.cpp

process.o: process.cpp process.h
	g++ -c process.cpp

boss.o: boss.cpp boss.h
	g++ -c boss.cpp

printLeaderBoard.o: printLeaderBoard.cpp printLeaderBoard.h
	g++ -c printLeaderBoard.cpp

main.o: main.cpp game_start.h file_io.h process.h boss.h printLeaderBoard.h
	g++ -c main.cpp 

main: game_start.o file_io.o process.o boss.o printLeaderBoard.o main.o
	g++ game_start.o file_io.o process.o boss.o printLeaderBoard.o main.o -o main

clean:
	rm -f game_start.o file_io.o process.o boss.o printLeaderBoard.o main.o main

.PHONY: clean