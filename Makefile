#Assembled by dawidd6
CXX=g++
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

