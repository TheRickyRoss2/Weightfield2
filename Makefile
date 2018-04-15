#
# Compiler flags
#
EXE  = weightfield

CC     = g++
CFLAGS = -Wall -Wextra `root-config --cflags --glibs` -Iinclude
CLING = rootcling
CLING_FLAGS = -f

#
# Project files
#
SRC_DIR = src
OBJ_DIR = obj
INCLUDE_DIR = include
SRC = $(wildcard $(SRC_DIR)/*.cxx)
OBJ = $(SRC:$(SRC_DIR)/%.cxx=$(OBJ_DIR)/%.o)

#
# Debug build settings
#
DBGDIR = debug
DBGEXE = $(DBGDIR)/$(EXE)
DBGOBJS = $(SRC:$(SRC_DIR)/%.cxx=$(DBGDIR)/%.o)
DBGCFLAGS = -g -O0 -DDEBUG

#
# Release build settings
#
REL_DIR = bin
RELEXE = $(REL_DIR)/$(EXE)
RELCFLAGS = -O3 -DNDEBUG

.PHONY: all clean debug prep release remake

# Default build
all: prep release

#
# Debug rules
#
debug: prepdbg $(DBGEXE)

$(DBGEXE): $(DBGOBJS)
	$(CC) $(CFLAGS) $(DBGCFLAGS) $^ -o $@

$(DBGDIR)/%.o: $(SRC_DIR)/%.cxx
	$(CC) $(CFLAGS) $(DBGCFLAGS) -c $< -o $@

#
# Release rules
#
release: $(RELEXE)

$(RELEXE): $(OBJ)
	$(CC) $(CFLAGS) $(RELCFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cxx
	$(CC) $(CFLAGS) $(RELCFLAGS) -c $< -o $@

#
# Other rules
#
prep:
	@mkdir -p $(DBGDIR) $(REL_DIR) $(OBJ_DIR)
	$(CLING) $(CLING_FLAGS) $(SRC_DIR)/Dict.cxx -c $(INCLUDE_DIR)/WFGUI.h $(INCLUDE_DIR)/LinkDef.h
	g++ -Wall -Wextra `root-config --cflags --glibs` -I. -O3 -DNDEBUG -c src/Dict.cxx -o obj/Dict.o
	mv src/Dict_rdict.pcm .

prepdbg:
	@mkdir -p $(DBGDIR) $(REL_DIR) $(OBJ_DIR)
	$(CLING) $(CLING_FLAGS) $(SRC_DIR)/Dict.cxx -c $(INCLUDE_DIR)/WFGUI.h $(INCLUDE_DIR)/LinkDef.h
	g++ -Wall -Wextra `root-config --cflags --glibs` -I. -O3 -DNDEBUG -c src/Dict.cxx -o debug/Dict.o
	mv src/Dict_rdict.pcm .

remake: clean all

clean:
	rm -f $(RELEXE) $(OBJ) $(DBGEXE) $(DBGOBJS) Dict_rdict.pcm

