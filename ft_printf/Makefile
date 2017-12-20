
### TEST[NUM] = "[FUNC & FILE NAME]" "[VAR TYPE]" "[FLAGS]" "[TYPES]"
### bs == big s == S, etc.
### '@' is replaced with ' '. This was implemented in order to give an opportunity to use pointers * 

# MAIN TESTS

TEST0 = "testing_percent" "int@" " 0+-\#" "%"
TEST1 = "testing_diouxbx" "intmax_t@" " 0+-\#" "diouxX" 
TEST2 = "testing_cbc" "wchar_t@" " 0+-\#" "cC"
TEST3 = "testing_sbs" "wchar_t@*" " 0+-\#" "sS"

# BONUS

TEST10 = "testing_diouxbx_bonus" "intmax_t@" " 0+-\#\'" "diufF" 

TESTDIR = ./testers
TESTFILES = testing_percent \
			testing_diouxbx \
			testing_cbc \
			testing_sbs
DFILES = $(patsubst %, $(TESTDIR)/%.c, $(TESTFILES))

EXEDIR = ./executables
FILEDIR = ./files
DIFDIR = ./diff_finder

TESTSCRIPT = $(TESTDIR)/test_comp.sh

FLAGS = -w

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

main:
	@echo ${CYAN}"[Compiling main]"${NC}
	gcc $(FLAGS) -o $(EXEDIR)/e -I. -L. -lftprintf main.c $(DFILES)

testmaker:
	@echo ${CYAN}"[Building a testmaker file]"${NC}
	gcc -o $(EXEDIR)/testmaker testmaker.c

res_delete:
	@rm $(FILEDIR)/printf_res || true
	@rm $(FILEDIR)/ft_printf_res || true
	@rm $(FILEDIR)/printf_ret || true
	@rm $(FILEDIR)/ft_printf_ret || true

test_files:
	@echo ${CYAN}"[Creating test files]"${NC}
	sh $(TESTSCRIPT) $(TEST0) $(EXEDIR)
	sh $(TESTSCRIPT) $(TEST1) $(EXEDIR)
	sh $(TESTSCRIPT) $(TEST2) $(EXEDIR)
	sh $(TESTSCRIPT) $(TEST3) $(EXEDIR)

do_testing:
	@echo ${PURPLE}"[Running tests. This may take some time.]"${NC}
	$(EXEDIR)/e > files/ft_printf_res

print_res:
	@echo ${GREEN}"[========| Test results |========]"${NC}
	@make diff2

differ:
	@echo ${CYAN}"[Compiling diff finder]"${NC}
	gcc $(FLAGS) -o $(EXEDIR)/differ $(DIFDIR)/*.c

test:
	@echo ${RED}"[========| Test building |========]"${NC}
	@mkdir files || true
	@make testmaker
	@make res_delete
	@make test_files
	@make main
	@make do_testing
	@make differ
	@make print_res

diff2:
	@$(EXEDIR)/differ

diff:
	@diff $(FILEDIR)/ft_printf_ret $(FILEDIR)/printf_ret > $(FILEDIR)/diff_ret || true
	@diff $(FILEDIR)/ft_printf_res $(FILEDIR)/printf_res > $(FILEDIR)/diff_res || true
	@echo "print diff:"
	@wc -l < $(FILEDIR)/diff_res
	@echo "return diff:"
	@wc -l < $(FILEDIR)/diff_ret