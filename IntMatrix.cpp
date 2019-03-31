#include "IntMatrix.h"
#include <iostream>

//might need? if main already has this include does this .cpp needs it too? to check!   #include  <iostream>
//might need? if main already has this include does this .cpp needs it too? to check!   #include <string>





void IntMatrix::fill_matrix()
{
	std::cout << "inside fill_matrix" << std::endl;
	for (int i = 0; i < IntMatrix::getRows(); i++)
	{
		for (int j = 0; j < IntMatrix::getCols(); j++)
		{
			std::cout << "enter number for cell :" << i << " " << j << std::endl;
		}
	}
	
}
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