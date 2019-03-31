#include "IntMatrix.h"
#include <iostream>

//might need? if main already has this include does this .cpp needs it too? to check!   #include  <iostream>
//might need? if main already has this include does this .cpp needs it too? to check!   #include <string>





void IntMatrix::fill_matrix()
{
	std::cout << "inside fill_matrix" << std::endl;
	for (int i=0; i< _NumOfRows; i++)
	{
		for (int j = 0; j < _NumOfCols; j++)
		{
			std::cout << "enter number for cell :" << i << " " << j << std::endl;
			//check for input is valid
			std::cin >> this->_matrix[i][j];
		}
	}
	
}

//void show_matrix()
/*IntMatrix& IntMatrix::operator+(const IntMatrix& other)
{
}

IntMatrix& IntMatrix::operator+=(const IntMatrix& other)
{
}


IntMatrix& IntMatrix::operator-(const IntMatrix& other)
{
}

IntMatrix& IntMatrix::operator-=(const IntMatrix& other)
{
}

IntMatrix& IntMatrix::operator*(const IntMatrix& other)
{
}

IntMatrix& IntMatrix::operator*=(const IntMatrix& other)
{
}
*/