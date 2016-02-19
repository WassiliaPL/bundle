CXX=g++
CXXFLAGS=-o
TARGET=bundle
SRC=bundle.cpp
DESTDIR=/usr/local/bin/

$(TARGET): $(SRC)
	$(CXX) $(SRC) $(CXXFLAGS) $(TARGET)
	
.PHONY:
install:
	mv $(TARGET) $(DESTDIR)

.PHONY:
uninstall:
	rm $(DESTDIR)$(TARGET)
