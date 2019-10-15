CXX=g++
CXXFLAGS=-std=c++17 -Wall -Wpedantic -Wextra
SOURCES=Student.cpp StudentManager.cpp
OBJECTS=$(SOURCES:.cpp=.o)
INCLUDES=includes/*.hpp
INCLUDE_DIRS=-Iincludes
ALL_TARGETS=debug release

.PHONY: all
all: $(ALL_TARGETS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE_DIRS) -c $< -o $@

%.o: %.cpp includes/%.hpp
	$(CXX) $(CXXFLAGS) $(INCLUDE_DIRS) -c $< -o $@

debug: main.o $(OBJECTS)
	$(CXX) $^ -g -o $@
	
release: main.o $(OBJECTS)
	$(CXX) $^ -O3 -o $@

.PHONY: clean
clean:
	rm $(ALL_TARGETS) $(OBJECTS)
