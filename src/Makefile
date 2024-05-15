CC = gcc
OS1LVL = $(shell uname)
OS2LVL = $(shell uname -o)
CFLAGS = -Wall -Werror -Wextra -g -std=c11

ALL_FUNC = $(wildcard ./*.c ./another/*.c ./arithmetic/*.c ./comparison/*.c ./convertors/*.c ./helpers/*.c)

SOURCE_TESTS_FUNC = $(wildcard ./tests/*.c ./tests/s21_decimal/*.c)

ifeq ($(OS1LVL), Darwin)
	det_OS = -lcheck -lm -lpthread
	GCOV_FLAGS = -fprofile-arcs -ftest-coverage
else
	ifeq ($(OS2LVL), GNU/Linux)
		det_OS = -lcheck -lm -lpthread -lrt -lsubunit
	else
		det_OS = -lcheck -lm -lpthread -lrt
		GCOV_FLAGS = -fprofile-arcs -ftest-coverage
	endif
endif

all: s21_decimal.a

rebuild:
	make clean
	make all

valgrind:
	valgrind --track-origins=yes --leak-check=yes --show-leak-kinds=all --undef-value-errors=yes --num-callers=20 --error-limit=no --trace-children=yes ./s21_test_decimal 

test: 
	@$(CC) $(CFLAGS) $(ALL_FUNC) $(SOURCE_TESTS_FUNC) --coverage s21_decimal.a -o s21_test_decimal $(det_OS)

	@./s21_test_decimal

s21_decimal.a:
	@$(CC) $(CFLAGS) $(ALL_FUNC) -g -c
	@ar rc s21_decimal.a *.o
	@ranlib s21_decimal.a

gcov_report: clean s21_decimal.a test
	@lcov -t "s21_test_decimal" -o test.info -c -d .
	@genhtml -o report test.info
	open report/index.html
	rm -rf *.gcno *gcda *.gco

clean:
	@rm -rf test *.gcda *.gcno *.o *.info *.a *.h.gch tests/*.gcno report 
	@rm -rf s21_test_decimal
	@rm -rf tests/*.h.gch 

style:
	@clang-format -n -style=google *.h $(ALL_FUNC) $(SOURCE_TESTS_FUNC)
	@rm -rf .clang-format

style_repair:
	@cp ../materials/linters/.clang-format ../src  
	@clang-format -i -style=google *.h $(ALL_FUNC) $(SOURCE_TESTS_FUNC)

leaks:
	valgrind --trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all -s ./s21_test_decimal

install_brew:
	cd ~
	curl -fsSL https://rawgit.com/kube/42homebrew/master/install.sh | zsh
	brew install lcov
