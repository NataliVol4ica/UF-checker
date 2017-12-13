
TEST1 = "signed_number_testing" "intmax_t" "0" "2"
TEST2 = "unsigned_number_testing" "uintmax_t" "2" "6"

TESTDIR = ./testers
TESTFILES = signed_number_testing \
			unsigned_number_testing
DFILES = $(patsubst %, $(TESTDIR)/%.c, $(TESTFILES))

EXEDIR = ./executables
FILEDIR = ./files

TESTSCRIPT = $(TESTDIR)/test_comp.sh

main:
	gcc -w -o $(EXEDIR)/e -I. -L. -lftprintf main.c $(DFILES)

test:
	gcc testmaker.c -o $(EXEDIR)/testmaker
	sh $(TESTSCRIPT) $(TEST1) $(EXEDIR)
	sh $(TESTSCRIPT) $(TEST2) $(EXEDIR)
	make main
	$(EXEDIR)/e > $(FILEDIR)/result.txt
