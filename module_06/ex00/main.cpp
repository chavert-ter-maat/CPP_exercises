#include "ScalarConverter.hpp"

int main(int argc, char **argv){
	 if (argc != 2)
	 {
		std::cout << "wrong amount of arguments." << std::endl;
		std::cout << "Expected: ./converter <input>" << std::endl;
		return (EXIT_FAILURE);
	 }
	 ScalarConverter::converter(argv[1]);
	 return (EXIT_SUCCESS);
}