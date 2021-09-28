#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <thread>
#include <csignal>
#include "BasePlayer.h"
class Tetris :
    public BasePlayer
{
public:
	Tetris(int, int);
	~Tetris();
    void Render();
    void init();
private:
	int StartCorX = 10;
	int StartCorY = 8;
	char key = 0;
	int Rows = 0;
	int Columns = 0;
	char** Area;
};

