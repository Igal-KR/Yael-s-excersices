#pragma once
//in Yaels Classes slide there is
#ifndef _IntMatrix_H_
#define _IntMatrix_H_



class IntMatrix
{
public:
	

	IntMatrix(int NumOfRows, int NumOfCols) //Constructor
	{
		_NumOfRows = NumOfRows;
		_NumOfCols = NumOfCols;
		_matrix = new int *[NumOfRows];
		for (int i = 0; i < NumOfRows; i++)
		{
			_matrix[i] = new int[NumOfCols];
		}

	}
	~IntMatrix(); //Destructor

	IntMatrix(const IntMatrix& other_matrix);// Copy constructor


//	Point(const Point &p2) {x = p2.x; y = p2.y; }


public: // overloading functions
	IntMatrix& operator+(const IntMatrix& other_matrix);
	IntMatrix& operator+=(const IntMatrix& other_matrix);
	IntMatrix& operator-(const IntMatrix& other_matrix);
	IntMatrix& operator-=(const IntMatrix& other_matrix);
	IntMatrix& operator*(const IntMatrix& other_matrix);
	IntMatrix& operator*=(const IntMatrix& other_matrix);
	//getters and setters
	int getRows(){return _NumOfRows;}
	int getCols(){return _NumOfCols;}
	void setRows(int num){_NumOfRows = num;}
	void setCols(int num){_NumOfCols = num;}
	void fill_matrix();
	int** getMatrix() { return _matrix; }

private: // private variables
	int _NumOfRows;
	int _NumOfCols;
	int **_matrix;
};

//end of question about yael classes slide
 #endif _IntMatrix_H_
