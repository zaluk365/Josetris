g++ -Iinclude -c src/main.cpp src/Game.cpp src/Player.cpp src/Menu.cpp
g++ main.o Game.o Player.o Menu.o -o jueguito -Llib -lsfml-graphics -lsfml-window -lsfml-system