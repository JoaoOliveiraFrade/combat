PROJECT = combat

COMPILE = gcc
COMPILE_FLAGS = -lm -std=c11 -pedantic -W -Wall #-ansi  

DIR_H = h
DIR_C = src
DIR_BIN = bin
DIR_O = $(DIR_BIN)/o
DIR_LIB = $(DIR_BIN)/lib

FILES_H = $(shell find . -name "*.h")
FILES_C = $(shell find . -name "*.c")
FILES_X = $(shell find . -name "*.o")
FILES_O = $(FILES_C:./$(DIR_C)/%.c=./$(DIR_O)/%.o)

ALLEGRO_LIB = D:/allegro/lib/liballegro-5.0.10-monolith-mt.a
ALLEGRO_INCLUDE = D:/allegro/include

all: $(PROJECT)

$(PROJECT): $(FILES_O)
	$(COMPILE) $^ $(ALLEGRO_LIB) -o $(DIR_BIN)/$(PROJECT)

$(FILES_O): $(DIR_O)/%.o : $(DIR_C)/%.c
	$(COMPILE) $< $(COMPILE_FLAGS) -c -I $(ALLEGRO_INCLUDE) -o $@  

run:
	clear
	$(DIR_BIN)/$(PROJECT).exe

library:
	ar -rcs $(DIR_LIB)/libCombat.a $(DIR_O)/*.o

clean:
	rm -rf $(FILES_X)
	rm -rvf $(DIR_BIN)/$(PROJECT).exe

help:
	clear
	@echo
	@echo "    make          - compila e gera arquivo executavel"
	@echo "    make start    - inicia novo projeto usando o modelo de projeto C"
	@echo "    make clean    - limpa projeto removendo binarios"
	@echo "    make run      - roda executavel"
	@echo "    make valgrind - executavel usando a ferramenta valgrind"
	@echo "    make tests    - compila com cmocka e executa o arquivo binario de testes"
	@echo

# ALLEGRO_LIB = D:/allegro/lib/liballegro-5.0.10-monolith-mt.a
# ALLEGRO_INCLUDE = D:/allegro/include
# SRC = ./obj
# OBJ = ./obj
# INCLUDE = ./obj/h/include
# DIR_LIB = ./lib
# DIR_BIN = ./bin
# COMPILE_FLAGS = -std=c11 -ansi -pedantic -Wall 

# combatDependencies= \
# 	$(OBJ)/main.o \
# 	$(OBJ)/init.o \
# 	$(OBJ)/loadFonts.o \
# 	$(OBJ)/createEventQueue.o \
# 	$(OBJ)/registerEvents.o \
# 	$(OBJ)/spentASecond.o \
# 	$(OBJ)/timeEvent.o \
# 	$(OBJ)/processClosingEvents.o \
# 	$(OBJ)/mouseEvent.o \
# 	$(OBJ)/keyDownEvent.o \
# 	$(OBJ)/eventDispatch.o \
# 	$(OBJ)/destroyElements.o \
# 	$(OBJ)/drawScenery.o \
# 	$(OBJ)/drawGrass.o \
# 	$(OBJ)/drawShip.o

# all:	combat

# combat: $(combatDependencies)
# 	$(COMPILE) -lAllegro -lCombat -L $(DIR_LIB) -L $(INCLUDE) -o $(DIR_BIN)/combat  

# $(OBJ)/%.o: $(SRC)/%.c 
# 	$(COMPILE) -c $< -I $(ALLEGRO_INCLUDE) $(COMPILE_FLAGS) -o $@

# run:
# 	$(DIR_BIN)/combat.exe

# library:   
# 	ar -rcs $(DIR_LIB)/libCombat.a $(OBJ)/*.o

# clean:
# 	rm $(OBJ)/*.o 
# 	rm $(DIR_BIN)/*.exe
# 	rm $(DIR_LIB)/*.a
