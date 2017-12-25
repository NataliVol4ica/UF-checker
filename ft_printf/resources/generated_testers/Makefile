
#[n$] [flags] [width] [precision] [lengthes] [types]
#[args] [code piece] [do print something extra(for %n)]

# MAIN TESTS

TEST_M00 = "test_m00" "-" " 0+-\#" "0" "."  "-|hh|h|l|ll|j|z" "%" "-" "-" "-"
TEST_M01 = "test_m01" "-" " 0+-\#" "0" ".0" "-|hh|h|l|ll|j|z" "%" "-" "-" "-"
TEST_M02 = "test_m02" "-" " 0+-\#" "2" ".0" "-|hh|h|l|ll|j|z" "%" "-" "-" "-"
TEST_M03 = "test_m03" "-" " 0+-\#" "6" ".5" "-|hh|h|l|ll|j|z" "%" "-" "-" "-"
TEST_M04 = "test_m04" "-" " 0+-\#" "0" ".0" "-|hh|h|l|ll|j|z" "diouxX" "0" "-" "-"
TEST_M05 = "test_m05" "-" " 0+-\#" "0" ".4" "-|hh|h|l|ll|j|z" "diouxX" "0" "-" "-"
TEST_M06 = "test_m06" "-" " 0+-\#" "5" ".3" "-|hh|h|l|ll|j|z" "diouxX" "25" "-" "-"
TEST_M07 = "test_m07" "-" " 0+-\#" "5" ".0" "-|hh|h|l|ll|j|z" "diouxX" "25" "-" "-"
TEST_M08 = "test_m08" "-" " 0+-\#" "5" ".1" "-|hh|h|l|ll|j|z" "diouxX" "25" "-" "-"
TEST_M09 = "test_m09" "-" " 0+-\#" "5" ".4" "-|hh|h|l|ll|j|z" "diouxX" "-25" "-" "-"
TEST_M10 = "test_m10" "-" " 0+-\#" "-5" ".3" "-|hh|h|l|ll|j|z" "diouxX" "-25" "-" "-"
TEST_M11 = "test_m11" "-" " 0+-\#" "-4" ".3" "-|hh|h|l|ll|j|z" "diouxX" "-25" "-" "-"
TEST_M12 = "test_m12" "-" " 0+-\#" "-13" ".12" "-|hh|h|l|ll|j|z" "diouxX" "-2147483648" "-" "-"
TEST_M13 = "test_m13" "-" " 0+-\#" "-13" ".12" "-|hh|h|l|ll|j|z" "diouxX" "2147483648" "-" "-"
TEST_M14 = "test_m14" "-" " 0+-\#" "-13" ".12" "-|hh|h|l|ll|j|z" "diouxX" "2147483647" "-" "-"
TEST_M15 = "test_m15" "-" " 0+-\#" "0" ".0" "-|hh|h|l|ll|j|z" "cC" "L'V'" "-" "-"
TEST_M16 = "test_m16" "-" " 0+-\#" "6" ".5" "-|hh|h|l|ll|j|z" "cC" "L'V'" "-" "-"
TEST_M17 = "test_m17" "-" " 0+-\#" "0" "." "-|hh|h|l|ll|j|z" "cC" "L'V'" "-" "-"
TEST_M18 = "test_m18" "-" " 0+-\#" "2" "." "-|hh|h|l|ll|j|z" "cC" "128" "-" "-"
TEST_M19 = "test_m19" "-" " 0+-\#" "2" "-" "-|hh|h|l|ll|j|z" "cC" "L'α'" "-" "-"
TEST_M20 = "test_m20" "-" " 0+-\#" "2" "." "-|hh|h|l|ll|j|z" "cC" "L'我'" "-" "-"
TEST_M21 = "test_m21" "-" " 0+-\#" "2" "-" "-|hh|h|l|ll|j|z" "cC" "128" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M22 = "test_m22" "-" " 0+-\#" "2" "." "-|hh|h|l|ll|j|z" "cC" "L'α'" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M23 = "test_m23" "-" " 0+-\#" "2" "-" "-|hh|h|l|ll|j|z" "cC" "L'我'" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M24 = "test_m24" "-" " 0+-\#" "0" "-" "-|hh|h|l|ll|j|z" "sS" "L\"\"" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M25 = "test_m25" "-" " 0+-\#" "0" ".0" "-|hh|h|l|ll|j|z" "sS" "L\"\"" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M26 = "test_m26" "-" " 0+-\#" "0" ".5" "-|hh|h|l|ll|j|z" "sS" "L\"\"" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M27 = "test_m27" "-" " 0+-\#" "2" ".1" "-|hh|h|l|ll|j|z" "sS" "L\"\"" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M28 = "test_m28" "-" " 0+-\#" "2" ".0" "-|hh|h|l|ll|j|z" "sS" "L\"casual string\"" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M29 = "test_m29" "-" " 0+-\#" "30" ".20" "-|hh|h|l|ll|j|z" "sS" "L\"casual string\"" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M30 = "test_m30" "-" " 0+-\#" "10" ".0" "-|hh|h|l|ll|j|z" "sS" "L\"casual string\"" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M31 = "test_m31" "-" " 0+-\#" "10" ".20" "-|hh|h|l|ll|j|z" "sS" "L\"casual string\"" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M32 = "test_m32" "-" " 0+-\#" "13" ".12" "-|hh|h|l|ll|j|z" "sS" "L\"casual string\"" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M33 = "test_m33" "-" " 0+-\#" "20" "." "-|hh|h|l|ll|j|z" "sS" "L\"我是一只猫。\"" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M34 = "test_m34" "-" " 0+-\#" "30" "-" "-|hh|h|l|ll|j|z" "sS" "L\"我是一只猫。\"" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_M35 = "test_m35" "-" " 0+-\#" "0" ".0" "-|hh|h|l|ll|j|z" "DOU" "0" "-" "-"
TEST_M36 = "test_m36" "-" " 0+-\#" "0" "." "-|hh|h|l|ll|j|z" "DOU" "0" "-" "-"
TEST_M37 = "test_m37" "-" " 0+-\#" "0" ".4" "-|hh|h|l|ll|j|z" "DOU" "0" "-" "-"
TEST_M38 = "test_m38" "-" " 0+-\#" "5" ".3" "-|hh|h|l|ll|j|z" "DOU" "25" "-" "-"
TEST_M39 = "test_m39" "-" " 0+-\#" "5" ".0" "-|hh|h|l|ll|j|z" "DOU" "25" "-" "-"
TEST_M40 = "test_m40" "-" " 0+-\#" "5" ".1" "-|hh|h|l|ll|j|z" "DOU" "25" "-" "-"
TEST_M41 = "test_m41" "-" " 0+-\#" "5" ".4" "-|hh|h|l|ll|j|z" "DOU" "-25" "-" "-"
TEST_M42 = "test_m42" "-" " 0+-\#" "5" ".3" "-|hh|h|l|ll|j|z" "DOU" "-25" "-" "-"
TEST_M43 = "test_m43" "-" " 0+-\#" "4" ".3" "-|hh|h|l|ll|j|z" "DOU" "-25" "-" "-"
TEST_M44 = "test_m44" "-" " 0+-\#" "13" ".12" "-|hh|h|l|ll|j|z" "DOU" "-2147483648" "-" "-"
TEST_M45 = "test_m45" "-" " 0+-\#" "13" ".12" "-|hh|h|l|ll|j|z" "DOU" "2147483648" "-" "-"
TEST_M46 = "test_m46" "-" " 0+-\#" "13" ".12" "-|hh|h|l|ll|j|z" "DOU" "2147483647" "-" "-"

# BONUS TESTS

TEST_B00 = "test_b00" "-" " 0+-\#\'" "0" "."  "-|hh|h|l|ll|j|z" "%dDioOuUxXaAeEfFgG" "0" "-" "-"
TEST_B01 = "test_b01" "-" " 0+-\#\'" "0" "0"  "-|hh|h|l|ll|j|z" "%dDioOuUxXaAeEfFgG" "0" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_B02 = "test_b02" "-" " 0+-\#\'" "0" "0"  "-|hh|h|l|ll|j|z" "%dDioOuUxXaAeEfFgG" "1024" "setlocale(LC_ALL, \"en_US.UTF-8\");" "-"
TEST_NAMES = test_m00 test_m01 test_m02 test_m03 test_m04 test_m05 test_m06 test_m07 test_m08 test_m09 test_m10 test_m11 test_m12 test_m13 test_m14 test_m15 test_m16 test_m17 test_m18 test_m19 test_m20 test_m21 test_m22 test_m23 test_m24 test_m25 test_m26 test_m27 test_m28 test_m29 test_m30 test_m31 test_m32 test_m33 test_m34 test_m35 test_m36 test_m37 test_m38 test_m39 test_m40 test_m41 test_m42 test_m43 test_m44 test_m45 test_m46 test_b00 test_b01 test_b02
TESTERS_C = $(patsubst %, ../generated_testers/%.c, $(TEST_NAMES))

TEST_EXE = $(patsubst %, ../executables/testers/%, $(TEST_NAMES))

# COLORS

GREEN = '\033[0;32m'
PURPLE = '\033[0;35m'
CYAN = '\033[0;36m'
NC = '\033[0m'

create_testers:
	@../executables/testmaker $(TEST_M00) && printf "."
	@../executables/testmaker $(TEST_M01) && printf "."
	@../executables/testmaker $(TEST_M02) && printf "."
	@../executables/testmaker $(TEST_M03) && printf "."
	@../executables/testmaker $(TEST_M04) && printf "."
	@../executables/testmaker $(TEST_M05) && printf "."
	@../executables/testmaker $(TEST_M06) && printf "."
	@../executables/testmaker $(TEST_M07) && printf "."
	@../executables/testmaker $(TEST_M08) && printf "."
	@../executables/testmaker $(TEST_M09) && printf "."
	@../executables/testmaker $(TEST_M10) && printf "."
	@../executables/testmaker $(TEST_M11) && printf "."
	@../executables/testmaker $(TEST_M12) && printf "."
	@../executables/testmaker $(TEST_M13) && printf "."
	@../executables/testmaker $(TEST_M14) && printf "."
	@../executables/testmaker $(TEST_M15) && printf "."
	@../executables/testmaker $(TEST_M16) && printf "."
	@../executables/testmaker $(TEST_M17) && printf "."
	@../executables/testmaker $(TEST_M18) && printf "."
	@../executables/testmaker $(TEST_M19) && printf "."
	@../executables/testmaker $(TEST_M20) && printf "."
	@../executables/testmaker $(TEST_M21) && printf "."
	@../executables/testmaker $(TEST_M22) && printf "."
	@../executables/testmaker $(TEST_M23) && printf "."
	@../executables/testmaker $(TEST_M24) && printf "."
	@../executables/testmaker $(TEST_M25) && printf "."
	@../executables/testmaker $(TEST_M26) && printf "."
	@../executables/testmaker $(TEST_M27) && printf "."
	@../executables/testmaker $(TEST_M28) && printf "."
	@../executables/testmaker $(TEST_M29) && printf "."
	@../executables/testmaker $(TEST_M30) && printf "."
	@../executables/testmaker $(TEST_M31) && printf "."
	@../executables/testmaker $(TEST_M32) && printf "."
	@../executables/testmaker $(TEST_M33) && printf "."
	@../executables/testmaker $(TEST_M34) && printf "."
	@../executables/testmaker $(TEST_M35) && printf "."
	@../executables/testmaker $(TEST_M36) && printf "."
	@../executables/testmaker $(TEST_M37) && printf "."
	@../executables/testmaker $(TEST_M38) && printf "."
	@../executables/testmaker $(TEST_M39) && printf "."
	@../executables/testmaker $(TEST_M40) && printf "."
	@../executables/testmaker $(TEST_M41) && printf "."
	@../executables/testmaker $(TEST_M42) && printf "."
	@../executables/testmaker $(TEST_M43) && printf "."
	@../executables/testmaker $(TEST_M44) && printf "."
	@../executables/testmaker $(TEST_M45) && printf "."
	@../executables/testmaker $(TEST_M46) && printf "."
	@../executables/testmaker $(TEST_B00) && printf "."
	@../executables/testmaker $(TEST_B01) && printf "."
	@../executables/testmaker $(TEST_B02) && printf "."
	@printf "\n"

../executables/testers/%: ../generated_testers/%.c
	@gcc -w -o $@ $< -I../.. -L../.. -lftprintf
	@printf "."

compiler: $(TEST_EXE)

compile_testers:
	@echo ${CYAN}"[Compiling testers]"${NC}
	@make compiler
	@printf "\n"

run_testers:
	@echo ${PURPLE}"[Running testers]"${NC}
	@../executables/testers/test_m00 > ../testing_results/test_m00_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m01 > ../testing_results/test_m01_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m02 > ../testing_results/test_m02_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m03 > ../testing_results/test_m03_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m04 > ../testing_results/test_m04_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m05 > ../testing_results/test_m05_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m06 > ../testing_results/test_m06_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m07 > ../testing_results/test_m07_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m08 > ../testing_results/test_m08_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m09 > ../testing_results/test_m09_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m10 > ../testing_results/test_m10_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m11 > ../testing_results/test_m11_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m12 > ../testing_results/test_m12_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m13 > ../testing_results/test_m13_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m14 > ../testing_results/test_m14_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m15 > ../testing_results/test_m15_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m16 > ../testing_results/test_m16_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m17 > ../testing_results/test_m17_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m18 > ../testing_results/test_m18_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m19 > ../testing_results/test_m19_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m20 > ../testing_results/test_m20_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m21 > ../testing_results/test_m21_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m22 > ../testing_results/test_m22_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m23 > ../testing_results/test_m23_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m24 > ../testing_results/test_m24_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m25 > ../testing_results/test_m25_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m26 > ../testing_results/test_m26_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m27 > ../testing_results/test_m27_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m28 > ../testing_results/test_m28_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m29 > ../testing_results/test_m29_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m30 > ../testing_results/test_m30_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m31 > ../testing_results/test_m31_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m32 > ../testing_results/test_m32_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m33 > ../testing_results/test_m33_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m34 > ../testing_results/test_m34_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m35 > ../testing_results/test_m35_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m36 > ../testing_results/test_m36_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m37 > ../testing_results/test_m37_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m38 > ../testing_results/test_m38_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m39 > ../testing_results/test_m39_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m40 > ../testing_results/test_m40_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m41 > ../testing_results/test_m41_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m42 > ../testing_results/test_m42_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m43 > ../testing_results/test_m43_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m44 > ../testing_results/test_m44_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m45 > ../testing_results/test_m45_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_m46 > ../testing_results/test_m46_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_b00 > ../testing_results/test_b00_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_b01 > ../testing_results/test_b01_ft_printf_print && printf "." || printf "x"
	@../executables/testers/test_b02 > ../testing_results/test_b02_ft_printf_print && printf "." || printf "x"
	@printf "\n"

diff:
	@echo ${PURPLE}"[Running difference check]"${NC}
	rm fails || true
	../executables/check_difference "47" "3"
