//  shape.cpp

#include "shape.h"
#include "tools.h"
#include <iomanip>

#include <iostream>
using namespace std;

shape::shape(int sizeInput, bool fillInput, int shapeInput)
{
    size = sizeInput;
    fill = fillInput;
    shapeChoice = shapeInput;
}

void shape::printShape(int shapeInput)
{
    switch (shapeInput)
    {
        case 1:
            shape1();
            break;
        case 2:
            shape2();
            break;
        case 3:
            shape3();
            break;
        case 4:
            shape4();
            break;
        case 5:
            shape5();
            break;
        case 6:
            shape6();
            break;
        case 7:
            shape7();
            break;
        case 8:
            shape8();
            break;
        case 9:
            shape9();
            break;
        case 10:
            shape10();
            break;
        case 11:
            shape11();
            break;
        case 12:
            cout << "O";
            break;
    }
}

// Square
void shape::shape1(void)
{
    if (fill)
    {
        for ( int row = 1; row <= size; ++row) // for every row up to size
        {
            for (int column = 1; column <= size; ++column) // go to every column up to size
            {
                cout << "*"; // and print *
            }
            cout << endl;
        }
    }
    else
    {
        for ( int row = 1; row <= size; ++row)
        {
            for (int column = 1; column <= size; ++column)
            {
                // prints " " in the center
                if (row > 1 && row < size
                    && column > 1 && column < size)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
}

// Rectangle
void shape::shape2(void)
{
    if (fill)
    {
        for ( int row = 1; row <= size; ++row)
        {
            // 2 doubles shape length
            for (int column = 1; column <= (size * 2); ++column)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else
    {
        for ( int row = 1; row <= size; ++row)
        {
            for (int column = 1; column <= (size * 2); ++column)
            {
                // prints " " in the center
                if (row > 1 && row < size
                    && column > 1 && column < (size * 2))
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
}

// Triangle with right angle pointing southwest
void shape::shape3(void)
{
    if(fill)
    {
        for(int row = 1; row <= size; row++)
        {
            // column iteration increases with row iteration
            for(int column = 1; column <= row; column++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else
    {
        for(int row = 1; row <= size; row++)
        {
            for(int column = 1; column <= row; column++)
            {
                // prints " " in center
                if (row > 1 && row < size
                    && column > 1 && column < row)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
}

// Triangle with right angle pointing southeast
void shape::shape4(void)
{
    if(fill)
    {
        for(int row = size; row > 0; row--)
        {
            for(int column = 1; column <= size; column++)
            {
                // decreases " " in rows
                if(column < row)
                {
                    cout << ' ';
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
    else
    {
        for(int row = size; row > 0; row--)
        {
            for(int column = 1; column <= size; column++)
            {
                if(row == 1)
                {
                    cout << "*";
                }
                else
                {
                    if(column == size || column == row)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    }
}

// Triangle with right angle pointing northwest
// modified shape 3
void shape::shape5(void)
{
    if(fill)
    {
        for(int row = size; row >= 1; row--)
        {
            for(int column = 1; column <= row; column++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else
    {
        for(int row = size; row >= 1; row--)
        {
            for(int column = 1; column <= row; column++)
            {
                // prints " " in center
                if (row > 1 && row < size
                    && column > 1 && column < row)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
}

// Triangle with right angle pointing northeast
void shape::shape6(void)
{
    if(fill)
    {
        for (int row = 1; row <= size; row++)
        {
            for (int column = 1; column <= size; column++)
            {
                if (column >= row || row == 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    else
    {
        for (int row = 1; row <= size; row++)
        {
            for (int column = 1; column <= size; column++)
            {
                if (row == column || column == size || row == 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}

// Triangle with right angle (pyramid) pointing north
void shape::shape7(void)
{
    if(fill)
    {
        int row2 = size;
        for (int row1 = size; row1 >= 1; row1--)
        {
            for (int column = 1; column <= ((size * 2)-1); column++)
            {
                if ((column >= row1 && column <= row2) || row1 == 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            row2++;
            cout << endl;
        }
    }
    else
    {
        int row2 = size;
        for (int row1 = size; row1 >= 1; row1--)
        {
            for (int column = 1; column <= ((size * 2)-1); column++)
            {
                if (column == row1 || column == row2 || row1 == 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            row2++;
            cout << endl;
        }
    }
}

// Triangle with right angle pointing east
void shape::shape8(void)
{
    if(fill)
    {
        int maxRow = size * 2;
        int edgeOfTriangle = 1;
        bool isIncrement = true;

        for (int row = 1; row < maxRow; row++)
        {
            for(int column = 1; column <= size; column++)
            {
                if (column <= edgeOfTriangle)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            if (row >= 6)
            {
                isIncrement = false;
            }
            if (isIncrement)
            {
                edgeOfTriangle++;
            }
            else
            {
                edgeOfTriangle--;
            }
            cout << endl;
        }
    }
    else
    {
        int maxRow = size * 2;
        int edgeOfTriangle = 1;
        bool isIncrement = true;

        for (int row = 1; row < maxRow; row++)
        {
            for(int column = 1; column <= size; column++)
            {
                if (column == edgeOfTriangle || column == 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            if (row >= 6)
            {
                isIncrement = false;
            }
            if (isIncrement)
            {
                edgeOfTriangle++;
            }
            else
            {
                edgeOfTriangle--;
            }
            cout << endl;
        }
    }
}

// Triangle with right angle pointing west
void shape::shape9(void)
{
    if(fill)
    {
        int maxRow = size * 2;
        int edgeOfTriangle = size;
        bool isIncrement = false;

        for (int row = 1; row < maxRow; row++)
        {
            for(int column = 1; column <= size; column++)
            {
                if (column >= edgeOfTriangle)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            if (row >= 6)
            {
                isIncrement = true;
            }
            if (isIncrement)
            {
                edgeOfTriangle++;
            }
            else
            {
                edgeOfTriangle--;
            }
            cout << endl;
        }
    }
    else
    {
        int maxRow = size * 2;
        int edgeOfTriangle = size;
        bool isIncrement = false;

        for (int row = 1; row < maxRow; row++)
        {
            for(int column = 1; column <= size; column++)
            {
                if (column == edgeOfTriangle || column == size)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            if (row >= 6)
            {
                isIncrement = true;
            }
            if (isIncrement)
            {
                edgeOfTriangle++;
            }
            else
            {
                edgeOfTriangle--;
            }
            cout << endl;
        }
    }
}

// Triangle with right angle pointing south
void shape::shape10(void)
{
    if(fill)
    {
        int maxSize = size * 2;

        for (int row = 1; row <= size; row++)
        {
            for (int column = 1; column < maxSize; column++)
            {
                if(column >= row && column <= maxSize - row)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    else
    {
        int maxSize = size * 2;

        for (int row = 1; row <= size; row++)
        {
            for (int column = 1; column < maxSize; column++)
            {
                if(row == 1 || column == row || column == maxSize - row)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}

// Diamond
void shape::shape11(void)
{
    if((size&1) == 0) // test if number is even using bitwise &
    {
        size++;
        cout << "Rounding size up to odd number: " << size;
        cout << endl;
    }

    if(fill)
    {
        bool isNorth = true;
        int edgeCounter = (size + 1)/2;

        for(int row = 1; row <= size; row++)
        {
            for(int column = 1; column <= size; column++)
            {
                if(column >= edgeCounter && column <= (size + 1) - edgeCounter)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
            
            if(edgeCounter == 1 && row != 1)
            {
                isNorth = false;
            }
            
            if(isNorth)
            {
                edgeCounter--;
            }
            else
            {
                edgeCounter++;
            }
        }
    }
    else
    {
        bool isNorth = true;
        int edgeCounter = (size + 1)/2;

        for(int row = 1; row <= size; row++)
        {
            for(int column = 1; column <= size; column++)
            {
                if(column == edgeCounter || column == (size + 1) - edgeCounter)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;

            if(edgeCounter == 1 && row != 1)
            {
                isNorth = false;
            }

            if(isNorth)
            {
                edgeCounter--;
            }
            else
            {
                edgeCounter++;
            }
        }
    }
}