
TEST1 = "signed_number_testing" "intmax_t" "0" "2"
TEST2 = "unsigned_number_testing" "uintmax_t" "2" "6"

FILES = signed_number_testing.c unsigned_number_testing.c

main:
	gcc -o e -I. -L. -lftprintf main.c signed_number_testing.c

test:
	gcc testmaker.c -o testmaker
	sh test_comp.sh $(TEST1)
	sh test_comp.sh $(TEST2)
	make main
	./e > res.txt
