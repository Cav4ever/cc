######### Makefile COMMON ########  
EXTENSION = cc
CC = g++
EXE = main
SUBDIR = src
OBJ = obj

CPPFLAGS += -I /home/kouwq/github/cc/inc
#LDFLAGS +=
CFLAGS += -g -O0
CXX_SOURCES = $(foreach dir,$(SUBDIR), $(wildcard $(dir)/*.$(EXTENSION)))
CXX_OBJECTS = $(patsubst  %.$(EXTENSION), $(OBJ)/%.o, $(notdir $(CXX_SOURCES)))

$(EXE): $(CXX_OBJECTS)
	$(CC) $(CXX_OBJECTS) -o $(EXE)

$(OBJ)/%.o: $(SUBDIR)/%.$(EXTENSION)
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

.PHONY:clean
clean:
	-rm -f $(CXX_OBJECTS) $(EXE)
