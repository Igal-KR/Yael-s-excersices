#include <iostream>
#include "IntMatrix.cpp"
#include "IntMatrix.h"
#include "Log.cpp"
#include <string>





void print_matrix()
{
}


int main()
{
	Log log;
	log.SetLevel(log.DebugLevel);
	int rows, cols;
	std::cout << "enter Matrix rows : " << std::endl;
	std::cin >> rows;
	std::cout << "enter Matrix cols : " << std::endl;
	std::cin >> cols;
	IntMatrix *p = new IntMatrix(rows,cols); //making new instance of matrix
	p->fill_matrix(p);
		
	
	
	

	
	/*int user_choice;

	std::cout << "enter desired operation: " << std::endl; 
	std::cout << "1 - add matrixes" << std::endl;
	std::cout << "2 - subtract matrixes" << std::endl;
	std::cout << "3 - multiply matrixes" << std::endl;
	std::cout << "4 - transpose matrix" << std::endl;
	std::cout << "5 - trace matrix" << std::endl;

	std::cin >> user_choice;
	
	log.Debug("users choice: " + std::to_string(user_choice));
	*/
	std::cin.get();

}