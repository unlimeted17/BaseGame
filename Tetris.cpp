#include "Tetris.h"

Tetris::Tetris(int RowsCount, int ColumnsCount)
{
	Rows = RowsCount; Columns = ColumnsCount;
}

void Tetris::init()
{
    Area = new char* [Rows];
    for (int count = 0; count < Rows; ++count) {
        Area[count] = new char[Columns];
    }

    for (int i = 0; i < Rows; ++i) {
        for (int j = 0; j < Columns - 1; ++j) {
            if (i == 0 || i == Rows - 1 || j == 0 || j == Columns - 2) {
                Area[i][j] = '#';
            }
            else
                Area[i][j] = ' ';

        }
        Area[i][Columns - 1] = '\n';
    }
}

void Tetris::Render()
{
    while (key != 27) {
        system("cls");
        fflush(stdin);
        key = 0;
        key = _getch();
        if (key == 32)
        {
            StartCorY = 0; StartCorX = 0;
            for (int i = 1; i < Rows - 2; ++i)
            {
                for (int j = 1; j < Columns - 2; ++j)
                {
                    Area[i][j] = '*';
              
                }
              
            }
            for (int i = 0; i < Rows; ++i) {
                for (int j = 0; j < Columns; ++j) {
                    printf("%c", Area[i][j]);
                  //  Sleep(100);
                }
                Sleep(100);
            }
        }
        Sleep(500);
       
    }
}

 Tetris::~Tetris()
{
     for (int count = 0; count < Rows; ++count)
         delete[] Area[count];
}