HELPER_FILES=DICE2007Param.cpp	DICE2007Run.cpp	DICE2007Setup.cpp	DICE2007Step.cpp 
HELPER_HEADERS=DICE2007Param.h	DICE2007Run.h	DICE2007Setup.h	DICE2007Step.h

DICE: RollDICE2007.cpp $(HELPER_FILES) $(HELPER_HEADERS)
	gcc -I//Users/matthewgee/Dev/webDICE/cppDICE/cppCODE/codegen/lib -ggdb -Wall -Werror -std=c99 -o RollDICE2007 RollDICE2007.cpp $(HELPER_FILES)
	
clean: 
	rm -f *.o a.out core RollDICE2007
