
EXE_DIR = ./executables
TOOLS_DIR = ./tools
TOOLS_OBJ_DIR = $(TOOLS_DIR)/obj
TESTER_DIR = ./testers
FILES_DIR = ./files

TOOLS = default_tools \
		differ_tools \
		errors \
		list_tools \
		read_line_tools
C_TOOLS = $(patsubst %, $(TOOLS_DIR)/%.c, $(TOOLS))
O_TOOLS = $(patsubst %, $(TOOLS_OBJ_DIR)/%.o, $(TOOLS))

# COLORS

RED = '\033[0;31m'
GREEN = '\033[0;32m'
BLUE = '\033[0;34m'
PURPLE = '\033[0;35m'
CYAN = '\033[0;36m'
YELLOW = '\033[1;33m'
LBLUE = '\033[1;34m'
PINK = '\033[1;35m'
WHITE = '\033[1;37m'
NC = '\033[0m' # No Color

all:
	@make clean
	@make mkfilemaker
	@make run_mkfilemaker
	@make testmaker
	@echo ${GREEN}"[Creating testers]"${NC}
	@make -C $(TESTER_DIR)/ create_testers
	@make -C $(TESTER_DIR)/ compile_testers
	@make test
	@make differ

clean:
	@echo ${GREEN}"[Recreating testers folder]"${NC}
	rm -rf $(TESTER_DIR) || true
	mkdir $(TESTER_DIR)
	@echo ${GREEN}"[Recreating files folder]"${NC}
	rm -rf $(FILES_DIR) || true
	mkdir $(FILES_DIR)
	@echo ${GREEN}"[Recreating exe folders]"${NC}
	rm -rf $(EXE_DIR) || true
	mkdir $(EXE_DIR)
	mkdir $(EXE_DIR)/testers

# DIFFERENCE FINDER

differ:
	@echo ${CYAN}"[Compiling differ]"${NC}
	gcc -o $(EXE_DIR)/differ diff_finder.c $(O_TOOLS) -I$(TOOLS_DIR)

# TEST

test:
	@make -C $(TESTER_DIR)/ run_testers

# TESTMAKER

testmaker: $(TOOLS_OBJ_DIR) $(O_TOOLS)
	@echo ${CYAN}"[Compiling testmaker]"${NC}
	gcc -o $(EXE_DIR)/testmaker testmaker.c $(O_TOOLS) -I$(TOOLS_DIR)

# MKFILEMAKER

mkfilemaker: $(TOOLS_OBJ_DIR) $(O_TOOLS)
	@echo ${CYAN}"[Compiling mkfilemaker]"${NC}
	gcc -o $(EXE_DIR)/mkfilemaker mkfilemaker.c $(O_TOOLS) -I$(TOOLS_DIR)

$(TOOLS_OBJ_DIR)/%.o: $(TOOLS_DIR)/%.c
	gcc -o $@ -c $< -I$(TOOLS_DIR)

$(TOOLS_OBJ_DIR):
	@echo ${CYAN}"[Creating $(TOOLS_OBJ_DIR)]"${NC}
	mkdir $(TOOLS_OBJ_DIR)

run_mkfilemaker:
	@echo ${PURPLE}"[Running mkfilemaker]"${NC}
	$(EXE_DIR)/mkfilemaker
