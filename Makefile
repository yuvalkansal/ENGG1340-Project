output_content.o: output_content.cpp output_content.h
	g++ -c output_content.cpp

found.o: found.cpp found.h
	g++ -c found.cpp

create_account.o: create_account.cpp output_content.h create_account.h found.h
	g++ -c create_account.cpp

login.o: login.cpp output_content.h found.h create_account.h login.h
	g++ -c login.cpp

login: output_content.o found.o create_account.o login.o
	g++ login.o create_account.o output_content.o found.o -o login

clean:
	rm *.o login

.PHONY: clean