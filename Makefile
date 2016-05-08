#Assembled by dawidd6
CXX=g++
CXXFLAGS=-Wall -o
TARGET=bundle
SRC=src/*.cpp
DESTDIR=/usr/bin/

build:
	$(CXX) $(SRC) $(CXXFLAGS) $(TARGET)

install:
	install $(TARGET) $(DESTDIR)

uninstall:
	rm -f $(DESTDIR)$(TARGET)

clean:
	rm -f $(TARGET)
	
.PHONY: install uninstall clean

