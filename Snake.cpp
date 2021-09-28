#include "Snake.h"

Snacke::Snacke(int RowsCount, int ColumnsCount)
{
    Rows = RowsCount; Columns = ColumnsCount;
   
    
}

void Snacke::init()
{
    Area = new char* [Rows];
    for (int count = 0; count < Rows; ++count) {
        Area[count] = new char[Columns];
    }

    for (int i = 0; i < Rows; ++i) {
        for (int j = 0; j < Columns - 1; ++j) {
            if (i == 0 || i == Rows - 1 || j == 0 || j == Columns - 2) {
                Area[i][j] = '*';
            }
            else
                Area[i][j] = ' ';

        }
        Area[i][Columns - 1] = '\n';
    }
}

void Snacke::Render()
{

    char keys;
 
    while (key !=27) {
        //cin.clear();
        //cin.ignore(32767, '\n');
        fflush(stdin);
        //fseek(stdin, 0, SEEK_END);
        key = 0;
        // if (_kbhit()) 

        key = _getch();
        // cin >> keys;

        switch (key)
        {
        case 77:
            //fflush(stdin);
            if (StartCorX < 3)
                StartCorX = 3;
            while (StartCorX < Columns - 1)
            {
                if (_kbhit())
                {
                    //    fflush(stdin);
                    break;
                    //   goto start;
                }
                system("cls");
                Area[StartCorY][StartCorX] = '*';
                Area[StartCorY][StartCorX - 1] = '*';
                Area[StartCorY][StartCorX - 2] = '*';
                Area[StartCorY][StartCorX - 3] = '*';

                for (int i = 0; i < Rows; ++i) {
                    for (int j = 0; j < Columns; ++j) {
                        printf("%c", Area[i][j]);
                    }
                }
                Area[StartCorY][StartCorX] = ' ';
                Area[StartCorY][StartCorX - 1] = ' ';
                Area[StartCorY][StartCorX - 2] = ' ';
                Area[StartCorY][StartCorX - 3] = ' ';

                ++StartCorX;
                Sleep(100);

            }
            break;
        case 80:
            if (StartCorY < 3)
                StartCorY = 3;
            while (StartCorY < Rows - 1)
            {
                if (_kbhit())
                {
                    //    fflush(stdin);
                    break;
                    //   goto start;
                }
                system("cls");
                Area[StartCorY][StartCorX] = '*';
                Area[StartCorY - 1][StartCorX] = '*';
                Area[StartCorY - 2][StartCorX] = '*';
                Area[StartCorY - 3][StartCorX] = '*';

                for (int i = 0; i < Rows; ++i) {
                    for (int j = 0; j < Columns; ++j) {
                        printf("%c", Area[i][j]);
                    }
                }
                Area[StartCorY][StartCorX] = ' ';
                Area[StartCorY - 1][StartCorX] = ' ';
                Area[StartCorY - 2][StartCorX] = ' ';
                Area[StartCorY - 3][StartCorX] = ' ';

                ++StartCorY;
                Sleep(100);
            }
            break;
        case 72:

            while (StartCorY > 1)
            {
                if (StartCorY > Rows - 3)
                    StartCorY = Rows - 4;
                if (_kbhit())
                {
                    //    fflush(stdin);
                    break;
                    //   goto start;
                }
                system("cls");
                Area[StartCorY][StartCorX] = '*';
                Area[StartCorY + 1][StartCorX] = '*';
                Area[StartCorY + 2][StartCorX] = '*';
                Area[StartCorY + 3][StartCorX] = '*';

                for (int i = 0; i < Rows; ++i) {
                    for (int j = 0; j < Columns; ++j) {
                        printf("%c", Area[i][j]);
                    }
                }
                Area[StartCorY][StartCorX] = ' ';
                Area[StartCorY + 1][StartCorX] = ' ';
                Area[StartCorY + 2][StartCorX] = ' ';
                Area[StartCorY + 3][StartCorX] = ' ';

                --StartCorY;
                Sleep(100);
            }
            break;
        case 75:
            //fflush(stdin);
            
            while (StartCorX > 1)
            {
                if (StartCorX > Columns - 3)
                    StartCorX = Columns - 3;
                if (_kbhit())
                {
                    //    fflush(stdin);
                    break;
                    //   goto start;
                }
                system("cls");
                Area[StartCorY][StartCorX] = '*';
                Area[StartCorY][StartCorX + 1] = '*';
                Area[StartCorY][StartCorX + 2] = '*';
                Area[StartCorY][StartCorX + 3] = '*';

                for (int i = 0; i < Rows; ++i) {
                    for (int j = 0; j < Columns; ++j) {
                        printf("%c", Area[i][j]);
                    }
                }
                Area[StartCorY][StartCorX] = ' ';
                Area[StartCorY][StartCorX + 1] = ' ';
                Area[StartCorY][StartCorX + 2] = ' ';
                Area[StartCorY][StartCorX + 3] = ' ';
                --StartCorX;
                Sleep(100);
            }
            break;

        default:
            break;
        }

    }
}


Snacke::~Snacke()
{

    for (int count = 0; count < Rows; ++count)
        delete[] Area[count];
}
