PROJECT_NAME = bill
TEST_PROJECT_NAME= Test_$(PROJECT_NAME)

Build= build

SRC=src/main.c\



INC= inc
INC_TEST= unity

TEST_SRC=src/main.c\
unity/unity.c

ifdef OS
	RM=del
	FixPath=$(subst /,\,$1)
	EXEC=exe

else
	ifeq ($(shell uname),Linux)
		RM=rm -rf
		FixPath=$1
		EXEC=out
	endif

endif			

.PHONY: run clean test doc all

all:
	gcc -I $(INC) $(SRC)  -o $(call FixPath, $(PROJECT_NAME).$(EXEC))


run:
	$(call FixPath,$(PROJECT_NAME).$(EXEC))	


cppcheck:
	cppcheck --enable= all $(SRC) test.c

debug:
	gcc -I $(INC) $(SRC)  -g -o $(PROJECT_NAME).$(EXEC)
	gdb $(PROJECT_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJECT_NAME).$(EXEC)	 


test:
	gcc -I $(INC) -I $(INC_TEST) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJECT_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJECT_NAME).$(EXEC))