main: output_content.o found.o create_account.o login.o level_loader.o main.o
	g++ main.o login.o create_account.o output_content.o found.o level_loader.o -o main

output_content.o: output_content.cpp output_content.h
	g++ -c output_content.cpp

found.o: found.cpp found.h
	g++ -c found.cpp

level_loader.o: level_loader.h level_loader.cpp
	g++ -c level_loader.cpp

create_account.o: create_account.cpp output_content.h create_account.h found.h level_loader.h
	g++ -c create_account.cpp

login.o: login.cpp output_content.h found.h create_account.h login.h level_loader.h
	g++ -c login.cpp


main.o: main.cpp login.h create_account.h output_content.h
	g++ -c main.cpp

clean:
	rm *.o main

.PHONY: clean