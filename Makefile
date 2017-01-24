#Assembled by dawidd6
CXX=g++
PROGRAM=bundle
DESTDIR=/usr/bin/
SRC=$(wildcard src/*.cpp)
OBJ=$(SRC:.cpp=.o)
START_COLOR=\033[0;33m
CLOSE_COLOR=\033[m

src/%.o: src/%.cpp
	@echo "$(START_COLOR)[CXX]$(CLOSE_COLOR)   $<"
	@$(CXX) -c -o $@ $<

bin/$(PROGRAM): $(OBJ)
	@echo "$(START_COLOR)[CXX]$(CLOSE_COLOR)   $@"
	@mkdir -p bin
	@$(CXX) -o $@ $^

install:
	@echo "$(START_COLOR)[IN]$(CLOSE_COLOR)   $(DESTDIR)$(PROGRAM)"
	@install bin/$(PROGRAM) $(DESTDIR)

uninstall:
	@echo "$(START_COLOR)[RM]$(CLOSE_COLOR)   $(DESTDIR)$(PROGRAM)"
	@rm -rf $(DESTDIR)$(PROGRAM)

objclean:
	@echo "$(START_COLOR)[RM]$(CLOSE_COLOR)   src/*.o"
	@rm -rf $(OBJ)

binclean:
	@echo "$(START_COLOR)[RM]$(CLOSE_COLOR)   bin"
	@rm -rf bin

clean: binclean objclean

.PHONY: install uninstall binclean objclean clean
