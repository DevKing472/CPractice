all:
	@g++ -std=c++11 -o main main.cpp something.cpp
	@echo "Files compiled successfully. 'main' executable created."

clean:
	@test -s main || { echo "No 'main' to clean!"; exit 1; }
	@rm main
	@echo "'main' successfully removed."
