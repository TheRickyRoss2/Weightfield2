#
# Compiler flags
#
EXE  = weightfield

CC     = g++
CFLAGS = -Wall -Wextra  `root-config --cflags` -L./deps/yaml-cpp/build
LINK_FLAGS = `root-config --glibs` -lyaml-cpp
INCLUDE_FLAGS = -I./deps/yaml-cpp/include/yaml-cpp -Iinclude -I. -I./deps/yaml-cpp/include
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
DBG_DIR = debug
DBGEXE = $(DBG_DIR)/$(EXE)
DBG_OBJ = $(SRC:$(SRC_DIR)/%.cxx=$(DBG_DIR)/%.o)
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
debug: prep $(DBGEXE)

$(DBGEXE): $(DBG_OBJ)
	$(CC) $(CFLAGS) $(DBGCFLAGS) $^ -o $@ $(LINK_FLAGS)

$(DBG_DIR)/%.o: $(SRC_DIR)/%.cxx
	$(CC) $(CFLAGS) $(DBGCFLAGS) $(INCLUDE_FLAGS) -c $< -o $@

#
# Release rules
#
release: $(RELEXE)

$(RELEXE): $(OBJ)
	$(CC) $(CFLAGS) $(RELCFLAGS) $^ -o $@ $(LINK_FLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cxx
	$(CC) $(CFLAGS) $(RELCFLAGS) $(INCLUDE_FLAGS) -c $< -o $@

#
# Other rules
#
prep:
	# Build yaml parser dependancy
	@mkdir -p $(DBG_DIR) $(REL_DIR) $(OBJ_DIR) ./deps/yaml-cpp/build
	cd ./deps/yaml-cpp/build; cmake -DYAML_CPP_BUILD_TESTS=OFF .. ; make
	$(CLING) $(CLING_FLAGS) $(SRC_DIR)/Dict.cxx -c $(INCLUDE_DIR)/WFGUI.h $(INCLUDE_DIR)/LinkDef.h
	mv $(SRC_DIR)/Dict_rdict.pcm .

remake: clean all

clean:
	rm -f $(RELEXE) $(OBJ) $(DBGEXE) $(DBG_OBJ) Dict_rdict.pcm

