#Assembled by dawidd6
BASH=$(shell if hash g++ &> /dev/null; then echo "g++"; elif hash clang++ &> /dev/null; then echo "clang++"; fi)
CXX=$(BASH)
CXXFLAGS=-o
TARGET=bundle
SRC=bundle.cpp
DESTDIR=/usr/local/bin/

$(TARGET): $(SRC)
	$(CXX) $(SRC) $(CXXFLAGS) $(TARGET)
.PHONY:
install:
	install $(TARGET) $(DESTDIR)
.PHONY:
uninstall:
	rm $(DESTDIR)$(TARGET)

