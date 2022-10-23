#pragma once


#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
#include<iomanip>
#include<windows.h>
#include<conio.h>

void system_color(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);

}

void loading(int load_time , int bar_length , int color_code)
{
    system_color(color_code);
    std::cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
    std::cout << "\t\t\t\t\t\t\tLOADING Please wait ..... : \n\n";

char x = 178;
    for(int i = 0 ; i < bar_length ; i++)
    {
        std::cout << x ;
        Sleep(load_time);
    }

system("cls");
}