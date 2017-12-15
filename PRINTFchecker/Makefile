
TEST1 = "signed_number_testing" "long_long_int_" "0" "2"
TEST2 = "unsigned_number_testing" "long_long_int_" "2" "6"

TESTDIR = ./testers
TESTFILES = signed_number_testing \
			unsigned_number_testing
DFILES = $(patsubst %, $(TESTDIR)/%.c, $(TESTFILES))

EXEDIR = ./executables
FILEDIR = ./files

TESTSCRIPT = $(TESTDIR)/test_comp.sh

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
	gcc -w -o $(EXEDIR)/e -I. -L. -lftprintf main.c $(DFILES)

testmaker:
	@echo ${CYAN}"[Building a testmaker file]"${NC}
	gcc -w -o $(EXEDIR)/testmaker testmaker.c

res_delete:
	@rm $(FILEDIR)/printf_res || true
	@rm $(FILEDIR)/ft_printf_res || true
	@rm $(FILEDIR)/printf_ret || true
	@rm $(FILEDIR)/ft_printf_ret || true

test_files:
	@echo ${CYAN}"[Creating test files]"${NC}
	sh $(TESTSCRIPT) $(TEST1) $(EXEDIR)
	sh $(TESTSCRIPT) $(TEST2) $(EXEDIR)

do_testing:
	@echo ${PURPLE}"[Running tests. This may take some time.]"${NC}
	$(EXEDIR)/e > files/ft_printf_res

print_res:
	@echo ${GREEN}"[========| Test results |========]"${NC}
	@make diff2

diff_finder: diff_finder.c
	@echo ${CYAN}"[Compiling diff finder]"${NC}
	gcc -w -o $(EXEDIR)/differ diff_finder.c

test:
	@echo ${RED}"[========| Test building |========]"${NC}
	@make testmaker
	@make res_delete
	@make test_files
	@make main
	@make do_testing
	@make diff_finder
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