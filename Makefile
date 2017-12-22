
### TEST[NUM] = "[FUNC & FILE NAME]" "[VAR TYPE]" "[FLAGS]" "[TYPES]" "[IS BONUS?]"
### bs == big s == S, etc.
### '@' is replaced with ' '. This was implemented in order to give an opportunity to use pointers * 

# MAIN TESTS

TEST0 = "testing_percent" "int@" " 0+-\#" "%" "0"
TEST1 = "testing_diouxbx" "intmax_t@" " 0+-\#" "diouxX" "0" 
TEST2 = "testing_cbc" "wchar_t@" " 0+-\#" "cC" "0"
TEST3 = "testing_sbs" "wchar_t@*" " 0+-\#" "sS" "0"
TEST4 = "testing_bdbobu" "intmax_t@" " 0+-\#" "DOU" "0"
TEST5 = "testing_p" "void@*" " 0+-\#" "p" "0"

# BONUS

TEST8 = "testing_apostrophe_numeric" "intmax_t@" " 0+-\#\'" "%dDioOuUxXaAeEfFgG" "1"
TEST9 = "testing_apostrophe_cbc" "wchar_t@" " 0+-\#\'" "cC" "1"
TEST10 = "testing_apostrophe_sbs" "wchar_t@*" " 0+-\#\'" "sS" "1"
TEST11 = "testing_apostrophe_p" "void@*" " 0+-\#\'" "p" "1"

TESTDIR = ./testers
MAINTESTFILES = testing_percent \
				testing_diouxbx \
				testing_cbc \
				testing_sbs \
				testing_bdbobu \
				testing_p
MAINDFILES = $(patsubst %, $(TESTDIR)/%.c, $(MAINTESTFILES))
BONUSTESTFILES =	testing_apostrophe_numeric \
					testing_apostrophe_cbc \
					testing_apostrophe_sbs \
					testing_apostrophe_p
BONUSDFILES = $(patsubst %, $(TESTDIR)/%.c, $(BONUSTESTFILES))

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
	gcc $(FLAGS) -o $(EXEDIR)/main_tester -I. -L. -lftprintf tests_main.c $(MAINDFILES)
	gcc $(FLAGS) -o $(EXEDIR)/bonus_tester -I. -L. -lftprintf tests_bonus.c $(BONUSDFILES)

testmaker:
	@echo ${CYAN}"[Building a testmaker file]"${NC}
	gcc -o $(EXEDIR)/testmaker testmaker.c

res_delete:
	@rm -rf $(FILEDIR) || true
	@mkdir $(FILEDIR)

test_files:
	@echo ${CYAN}"[Creating test files]"${NC}
	sh $(TESTSCRIPT) $(TEST0) $(EXEDIR)
	sh $(TESTSCRIPT) $(TEST1) $(EXEDIR)
	sh $(TESTSCRIPT) $(TEST2) $(EXEDIR)
	sh $(TESTSCRIPT) $(TEST3) $(EXEDIR)
	sh $(TESTSCRIPT) $(TEST4) $(EXEDIR)
	sh $(TESTSCRIPT) $(TEST5) $(EXEDIR)

	sh $(TESTSCRIPT) $(TEST8) $(EXEDIR)
	sh $(TESTSCRIPT) $(TEST9) $(EXEDIR)
	sh $(TESTSCRIPT) $(TEST10) $(EXEDIR)
	sh $(TESTSCRIPT) $(TEST11) $(EXEDIR)

do_testing:
	@echo ${PURPLE}"[Running tests]"${NC}
	$(EXEDIR)/main_tester > files/main_ft_printf_res
	$(EXEDIR)/bonus_tester > files/bonus_ft_printf_res

print_res:
	@echo ${GREEN}"[========| Test results |========]"${NC}
	@$(EXEDIR)/differ

differ:
	@echo ${CYAN}"[Compiling diff finder]"${NC}
	gcc $(FLAGS) -o $(EXEDIR)/differ $(DIFDIR)/*.c

test:
	@echo ${RED}"[========| Test building |========]"${NC}
	@make res_delete
	@make testmaker
	@make test_files
	@make main
	@make do_testing
	@make differ
	@make print_res

only_test:
	@make res_delete
	@make do_testing
	@make print_res

getlib:
	@rm libftprintf.a || true
	@make -C ../../ft_printf/ || true
	@cp ../../ft_printf/libftprintf.a .
