compile: src/boardState.cpp src/choiceConvert.cpp src/dealerLoop.cpp src/handDraw.cpp src/playerLoop.cpp src/scoreFinder.cpp src/shuffleDeck.cpp src/winState.cpp main.cpp
	g++ src/boardState.cpp src/choiceConvert.cpp src/dealerLoop.cpp src/handDraw.cpp src/playerLoop.cpp src/scoreFinder.cpp src/shuffleDeck.cpp src/winState.cpp main.cpp -o main.out

run: main.out
	./main.out