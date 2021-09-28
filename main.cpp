
/* Работа осуществляется управляющими стрелками  */
/* Либо клавишей "Пробел"  */
#include "Snake.h"
#include "Tetris.h"
using namespace std;

BasePlayer *bp[10];
int countClass = 0;

int main()
{
   
    Snacke snacke(20, 60);
   Tetris* tetris = new Tetris(30, 60);
    bp[countClass] = &snacke; // Полиморфизм
   ++countClass;
   bp[countClass] = tetris; // Полиморфизм
    ++countClass;
    bp[0]->init();
   bp[1]->init(); // Полиморфизм
    bp[0]->Render();



   // delete tetris;
    
    return 0;
}

