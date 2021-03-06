/*
MIT License

Copyright (c) 2021 Eric Henrique

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>
#define NAME "StartUp"
#define VERSION "2.6.16"
#define AUTHOR "Eric Henrique"
#define MODIFIED "Mar 06, 2021"

// Colors of DOS

enum DOS_COLORS {
    BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN,
    LIGHT_GRAY, DARK_GRAY, LIGHT_BLUE, LIGHT_GREEN, LIGHT_CYAN,
    LIGHT_RED, LIGHT_MAGENTA, YELLOW, WHITE };


// Colors of letters

void textcolor (DOS_COLORS iColor)
{
    HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
    BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
    bufferInfo.wAttributes &= 0x00F0;
    SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= iColor);
}

int main(void)
{
    // Variables
    int opc = 0;
    
    // Struct time

    struct tm *atual_hour;

    time_t seconds;
    time(&seconds);

    atual_hour = localtime(&seconds); 

    int schedule = atual_hour->tm_hour;
    int minuts = atual_hour->tm_min;

    // Documentation for the Program

    setlocale(LC_ALL, "English");

    SetConsoleTitle("Open program in my machine.");

    // Struct GM, GA, GN for UX

    if ( schedule >= 00 && schedule < 12 )
    {   
        textcolor(LIGHT_BLUE);
        printf("\n|====================================================|\n");
        printf("|Good morning now it's %d:%i hours, have a great job!|", schedule, minuts);
        printf("\n|====================================================|\n");
    }
    else if ( schedule >= 12 && schedule < 18 )
    {
        textcolor(YELLOW);
        printf("\n|======================================================|\n");
        printf("|Good afternoon now it's %d:%i hours, have a great job!|", schedule, minuts);
        printf("\n|======================================================|\n");
    }
    else if ( schedule >= 18 && schedule < 23 )
    {
        textcolor(BLUE);
        printf("\n|==================================================|\n");
        printf("|Good night now it's %d:%i hours, have a great job!|", schedule, minuts);
        printf("\n|==================================================|\n");

    }

    // Interface UX

    printf("\n+___________________________+");
    printf("\n|Select a program to open:  |\n");
    printf("|=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
    printf("|1. Software to organization|\n");
    printf("|2. Open Chrome             |\n");
    printf("|3. Open Visual Studio Code |\n");
    printf("|4. Close this program      |\n");
    printf("+=-=-=-=-=-=-=-=-=-=-=-=-=-=+\n");


    printf("\n\nOption: ");
    textcolor(CYAN);
    scanf("%d", &opc);

    // Main of program

    switch (opc)
    {
        case 1:
            system("start Notion");
            textcolor(BLUE);
            printf("Opening Notion...\n");
            sleep(8);
        break;

        case 2:
            system("start chrome");
            textcolor(DARK_GRAY);
            printf("Opening Google Chrome...\n");
            sleep(8);
        break;

        case 3:
            system("start code");
            textcolor(LIGHT_CYAN);
            printf("Opening Visual Studio Code...\n");
            sleep(8);
        break;

        case 4:
            system("Exit");
        break;
        
        default:
            textcolor(RED);
            printf("Invalid command!\n");
    }
    
    
    // End of condition
textcolor(WHITE);
}
