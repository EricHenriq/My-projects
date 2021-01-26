/* MIT License

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
SOFTWARE. */

/*-------------------------------Software data---------------------------------*/
#define NAME "Hello world"                                                     
#define VERSION "1.3.8"                                                        
#define AUTHOR "Eric Henrique"
/*---------------------------------Libraries-----------------------------------*/
#include <stdlib.h>                     
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#include <unistd.h>
/*--------------------------------------UX-------------------------------------*/
// Text colors
enum DOS_COLORS 
{
    BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN,
    LIGHT_GRAY, DARK_GRAY, LIGHT_BLUE, LIGHT_GREEN, LIGHT_CYAN,
    LIGHT_RED, LIGHT_MAGENTA, YELLOW, WHITE 
};

void textcolor (DOS_COLORS iColor) 
{
    HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
    BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
    bufferInfo.wAttributes &= 0x00F0;
    SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= iColor); 
};
// End
/*----------------------------------Languages----------------------------------*/
#define PORTUGUESE "\nOlá mundo!\n"
#define ITALIAN "\nCiao, mondo!\n"
#define GERMAN "\nHallo, Welt\n"
#define JAPONESE "\nこんにちは、世界! (Kon'nichiwa, sekai!)\n"
#define T_CHINESE "\n世界，你好！(Shìjiè, nǐ hǎo!)\n"
#define RUSSIAN "\nПривет, мир! (Privet, mir!)\n"
#define HEBREW "\nשלום עולם!\n"
#define ENGLISH "\nHello world!\n"
#define SPANISH "\n¡Hola mundo!\n"
#define FRENCH "\nBonjour tout le monde!\n"
/*----------------------------------Functions----------------------------------*/
int choice; // Value of choice
            // Default 0
void helloworld(int choice)
{
    switch (choice)
    {
        case 1:
            textcolor(GREEN);
            printf(PORTUGUESE);
            break;

        case 2:
            textcolor(RED);
            printf(ITALIAN);
            break;

        case 3:
            textcolor(YELLOW);
            printf(GERMAN);
            break;

        case 4:
            textcolor(RED);
            printf(T_CHINESE);
            break;

        case 5:
            textcolor(LIGHT_RED);
            printf(RUSSIAN);
            break;

        case 6:
            textcolor(LIGHT_BLUE);
            printf(HEBREW);
            break;

        case 7:
            textcolor(BLUE);
            printf(ENGLISH);
            break;

        case 8:
            textcolor(YELLOW);
            printf(SPANISH);
            break;

        case 9:
            textcolor(LIGHT_BLUE);
            printf(FRENCH);
            break;

        default:
            textcolor(DARK_GRAY);
            printf("Invalid command!\nQuiting...\n");
    }
}

void menu()
{
    printf("____________________\n");
    printf("Hello world v%s\n", VERSION);
    printf("====================\n");
    printf("Type a option:\n");
    printf("--------------------\n");
    textcolor(GREEN);
    printf("(1) Portuguese\n");
    textcolor(RED);
    printf("(2) Italian\n");
    textcolor(YELLOW);
    printf("(3) German\n");
    textcolor(RED);
    printf("(4) Traditional Chinese\n");
    textcolor(LIGHT_RED);
    printf("(5) Russian\n");
    textcolor(LIGHT_BLUE);
    printf("(6) Hebrew\n");
    textcolor(BLUE);
    printf("(7) English\n");
    textcolor(YELLOW);
    printf("(8) Spanish\n");
    textcolor(LIGHT_BLUE);
    printf("(9) French\n");
    printf("====================\n");
    printf("Choice a option: ");
    scanf("%i", &choice);
    helloworld(choice);
    textcolor(WHITE);
};

void help()
{
    textcolor(BLUE);
    printf("\nUse the following arguments (without quotes):\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==\n");
    printf("'--pt' or '-1': For greeting in Portuguese\n");
    printf("'--it' or '-2': For greeting in Italian\n");
    printf("'--de' or '-3': For greeting in German\n");
    printf("'--jp' or '-4': For greeting in Japonese\n");
    printf("'--cn' or '-5': For greeting in Traditional Chinese\n");
    printf("'--ru' or '-6': For greeting in Russian\n");
    printf("'--il' or '-7': For greeting in Hebrew\n");
    printf("'--en' or '-8': For greeting in English\n");
    printf("'--es' or '-9': For greeting in Spanish\n");
    printf("'--fr' or '-10': For greeting in French\n");
    printf("'--version' or '-v': Show version\n");
    textcolor(WHITE);
}

void version()
{
    textcolor(BLUE);
	printf("\nHello World --- Version: ");
    textcolor(RED);
	printf(VERSION);
	printf("\n");
    textcolor(WHITE);
}
/*-------------------------------------Main------------------------------------*/
int main(int argc, char *argv[])
{
    SetConsoleTitle("Hello world in some languages.");

    if (argv[1] == NULL)
    {
        menu();
    } else {
        if (argc > 2)
        {
            printf("[Error] Too many arguments, just use one!\n");
        } else {

            if (0 == strcmp(argv[1], "--pt") || 0 == strcmp(argv[1], "-1"))
            {
                helloworld(1);
            } 
            else if (0 == strcmp(argv[1], "--it") || 0 == strcmp(argv[1], "-2"))
            {
                helloworld(2);
            }
            else if (0 == strcmp(argv[1], "--de") || 0 == strcmp(argv[1], "-3"))
            {
                helloworld(3);
            }
            else if (0 == strcmp(argv[1], "--jp") || 0 == strcmp(argv[1], "-4"))
            {
                helloworld(4);
            }
            else if (0 == strcmp(argv[1], "--cn") || 0 == strcmp(argv[1], "-5"))
            {
                helloworld(5);
            }
            else if (0 == strcmp(argv[1], "--ru") || 0 == strcmp(argv[1], "-6"))
            {
                helloworld(6);
            }
            else if (0 == strcmp(argv[1], "--il") || 0 == strcmp(argv[1], "-7"))
            {
                helloworld(7);
            }
            else if (0 == strcmp(argv[1], "--en") || 0 == strcmp(argv[1], "-8"))
            {
                helloworld(8);
            }
            else if (0 == strcmp(argv[1], "--es") || 0 == strcmp(argv[1], "-9"))
            {
                helloworld(9);
            }
            else if (0 == strcmp(argv[1], "--fr") || 0 == strcmp(argv[1], "-10"))
            {
                helloworld(10);
            }
            else if (0 == strcmp(argv[1], "--help") || 0 == strcmp(argv[1], "-h")) {
				help();
            }
            else if(0 == strcmp(argv[1], "--version") || 0 == strcmp(argv[1], "-v")) {
				version();
			}
             else {
                textcolor(RED);
                printf("\n[-]Invalid command![-]\n");
            }
        }
    }
    textcolor(WHITE);
    return 0;
}