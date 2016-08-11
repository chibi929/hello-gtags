CXX := g++
RM := rm -rf

OUTPUT := Main
SOURCES := $(wildcard *.cpp)
OBJECTS := $(SOURCES:.cpp=.o)

##############################
# Makefile
##############################

.PHONY: all
all: $(OBJECTS)
	$(CXX) -o $(OUTPUT) $^

.PHONY: test
test: all
	./$(OUTPUT)

%.o: %.cpp
	$(CXX) -o $@ -c $^

.PHONY: clean
clean:
	$(RM) $(OUTPUT)
	$(RM) $(OBJECTS)
