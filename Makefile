test: main.cpp Factory.h Registrar.h Circle.h Circle.cpp Rectangle.h Rectangle.cpp
	gcc main.cpp Circle.cpp Rectangle.cpp -Wall -Wextra -pedantic -lstdc++ -std=c++14