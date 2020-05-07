
objects = output_content.o found.o create_account.o login.o level_loader.o main.o
flags = -pedantic-errors -std=c++11

main: $(objects)
	g++ $(flags) $^ -o $@

output_content.o: output_content.cpp output_content.h
	g++ $(flags) -c $<


found.o: found.cpp found.h
	g++ $(flags) -c $<


level_loader.o: level_loader.cpp level_loader.h
	g++ $(flags) -c $<


create_account.o: create_account.cpp output_content.h create_account.h found.h level_loader.h
	g++ $(flags) -c $<


login.o: login.cpp output_content.h found.h create_account.h login.h level_loader.h
	g++ $(flags) -c $<


main.o: main.cpp login.h create_account.h output_content.h
	g++ $(flags) -c $<


clean:
	rm *.o main

.PHONY: clean