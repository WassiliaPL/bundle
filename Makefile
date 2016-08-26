#Assembled by dawidd6
CXX=g++
TARGET=bundle
DESTDIR=/usr/bin/
SRC=$(wildcard src/*.cpp)
OBJ=$(SRC:.cpp=.o)
START_COLOR=\033[0;33m
CLOSE_COLOR=\033[m

src/%.o: src/%.cpp
	@echo "$(START_COLOR)[CXX]$(CLOSE_COLOR) $<"
	@$(CXX) -c -o $@ $<

$(TARGET): $(OBJ)
	@echo "$(START_COLOR)[CXX]$(CLOSE_COLOR) $@"
	@$(CXX) -o $@ $^

install:
	install $(TARGET) $(DESTDIR)

uninstall:
	rm $(DESTDIR)$(TARGET)

clean:
	@echo "$(START_COLOR)[RM]$(CLOSE_COLOR) $(TARGET) src/*.o"
	@rm -rf $(TARGET) src/*.o

.PHONY: install uninstall clean
