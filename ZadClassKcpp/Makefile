# Nazwa kompilatora
CXX = g++

# Flagi kompilatora (-I pozwala szukac plikow .h w osobnym katalogu)
CXXFLAGS = -std=c++11 -Wall -Iinclude

# Plik wynikowy
TARGET = program_menu.exe

# Pliki zrodlowe i obiektowe
SRCS = main.cc src/ZadKcpp.cc src/Zadania.cc
OBJS = $(SRCS:.cc=.o)

# Glowna regula kompilacji
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Regula budowania plikow obiektowych
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regula do czyszczenia plikow tymczasowych
clean:
	rm -f src/*.o *.o $(TARGET)