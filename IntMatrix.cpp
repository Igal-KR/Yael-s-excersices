#include "IntMatrix.h"
#include <iostream>

//might need? if main already has this include does this .cpp needs it too? to check!   #include  <iostream>
//might need? if main already has this include does this .cpp needs it too? to check!   #include <string>

void fill_matrix(IntMatrix* other)
{
	std::cout << "inside fill_matrix" << std::endl;
	for (int i = 0; i < other->getRows(); i++)
	{
		for (int j = 0; j < other->getCols(); j++)
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