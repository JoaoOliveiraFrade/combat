PROJECT = combat
COMPILE = gcc
COMPILE_FLAGS = -lm -std=c11 -pedantic -W -Wall #-ansi  
SRC_FOLDER = src
BIN_FOLDER = bin
OBJ_FOLDER = $(BIN_FOLDER)/obj
LIB_FOLDER = $(BIN_FOLDER)/lib

C_FILES = $(shell find . -name "*.c")
H_FILES = $(shell find . -name "*.h")
O_FILES = $(C_FILES:.c=.o)
O2_FILES = $(C_FILES:obj=obj)
# echo H_FILES
# echo O_FILES

ALLEGRO_LIB = C:/dados/allegro/lib/liballegro-5.0.10-monolith-mt.a
ALLEGRO_INCLUDE = C:/dados/allegro/include

dependencies= \
	$(OBJ_FOLDER)/main.o \
	\
	$(OBJ_FOLDER)/allegro/initAllegro.o \
	$(OBJ_FOLDER)/allegro/initDisplay.o \
	$(OBJ_FOLDER)/allegro/initEventQueue.o \
	$(OBJ_FOLDER)/allegro/initKeyboard.o \
	$(OBJ_FOLDER)/allegro/initTime.o \
	$(OBJ_FOLDER)/allegro/initAddon.o \
	$(OBJ_FOLDER)/allegro/initPrimitivesAddon.o \
	$(OBJ_FOLDER)/allegro/loadFonts.o \
	$(OBJ_FOLDER)/allegro/registerEvents.o \
	$(OBJ_FOLDER)/allegro/destroyElements.o \
	\
	$(OBJ_FOLDER)/events/eventDispatch.o \
	$(OBJ_FOLDER)/events/keyDownEvent.o \
	$(OBJ_FOLDER)/events/keyUpEvent.o \
	$(OBJ_FOLDER)/events/mouseEvent.o \
	$(OBJ_FOLDER)/events/timeEvent.o \
	$(OBJ_FOLDER)/events/spentASecond.o \
	\
	$(OBJ_FOLDER)/scenery/drawScenery.o \
	\
	$(OBJ_FOLDER)/grass/drawGrass.o \
	\
	$(OBJ_FOLDER)/ship/initShip.o \
	$(OBJ_FOLDER)/ship/drawShip.o \
	$(OBJ_FOLDER)/ship/updateShip.o \
	\
	$(OBJ_FOLDER)/alien/initAlien.o \
	$(OBJ_FOLDER)/alien/drawAlien.o \
	$(OBJ_FOLDER)/alien/updateAlien.o \
	$(OBJ_FOLDER)/alien/colisaoAlienSolo.o \
	\
	$(OBJ_FOLDER)/tank/initTank.o \
	$(OBJ_FOLDER)/tank/drawTank.o \
	$(OBJ_FOLDER)/tank/updateTank.o \
	$(OBJ_FOLDER)/tank/collisionBlocksAndTank.o \
	$(OBJ_FOLDER)/tank/checkTankOnDisplayLimit.o \
	$(OBJ_FOLDER)/tank/rotatesTank.o \
	\
	$(OBJ_FOLDER)/block/initBlock.o \
	$(OBJ_FOLDER)/block/drawBlock.o
	
all: $(PROJECT)

$(PROJECT): $(dependencies)
	$(COMPILE) \
		$(OBJ_FOLDER)/*.o \
		$(OBJ_FOLDER)/allegro/*.o \
		$(OBJ_FOLDER)/events/*.o \
		$(OBJ_FOLDER)/grass/*.o \
		$(OBJ_FOLDER)/scenery/*.o \
		$(OBJ_FOLDER)/ship/*.o \
		$(OBJ_FOLDER)/alien/*.o \
		$(OBJ_FOLDER)/tank/*.o \
		$(OBJ_FOLDER)/block/*.o \
		$(ALLEGRO_LIB) \
		-o $(BIN_FOLDER)/$(PROJECT)

$(OBJ_FOLDER)/%.o: $(SRC_FOLDER)/%.c 
	$(COMPILE) $(COMPILE_FLAGS) -c $< -I $(ALLEGRO_INCLUDE) -o $@

run:
	clear
	$(BIN_FOLDER)/$(PROJECT).exe

library:
	ar -rcs $(LIB_FOLDER)/libCombat.a $(OBJ_FOLDER)/*.o

clean:
	clear
	@rm -rvf $(OBJ_FOLDER)/*.o
	@rm -rvf $(OBJ_FOLDER)/allegro/*.o
	@rm -rvf $(OBJ_FOLDER)/events/*.o
	@rm -rvf $(OBJ_FOLDER)/grass/*.o
	@rm -rvf $(OBJ_FOLDER)/scenery/*.o
	@rm -rvf $(OBJ_FOLDER)/ship/*.o
	@rm -rvf $(OBJ_FOLDER)/alien/*.o
	@rm -rvf $(OBJ_FOLDER)/tank/*.o
	@rm -rvf $(OBJ_FOLDER)/block/*.o
	@rm -rvf $(LIB_FOLDER)/*.a
	@rm -rvf $(BIN_FOLDER)/*.exe

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
# LIB_FOLDER = ./lib
# BIN_FOLDER = ./bin
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
# 	$(COMPILE) -lAllegro -lCombat -L $(LIB_FOLDER) -L $(INCLUDE) -o $(BIN_FOLDER)/combat  

# $(OBJ)/%.o: $(SRC)/%.c 
# 	$(COMPILE) -c $< -I $(ALLEGRO_INCLUDE) $(COMPILE_FLAGS) -o $@

# run:
# 	$(BIN_FOLDER)/combat.exe

# library:   
# 	ar -rcs $(LIB_FOLDER)/libCombat.a $(OBJ)/*.o

# clean:
# 	rm $(OBJ)/*.o 
# 	rm $(BIN_FOLDER)/*.exe
# 	rm $(LIB_FOLDER)/*.a
