JAVA := java
JAVAC := javac
RM := rm -rf

OUTPUT := Main
SOURCES := $(wildcard *.java)
CLASSES := $(SOURCES:.java=.class)


##############################
# Makefile
##############################

.PHONY: all
all: $(CLASSES)

.PHONY: test
test: all
	$(JAVA) $(OUTPUT)

%.class: %.java
	$(JAVAC) $^

.PHONY: clean
clean:
	$(RM) $(CLASSES)
