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

function CLang() {
    console.log('\x1b[36m%s\x1b[0m', '\n#include <stdio.h>\n');
    console.log('\x1b[36m%s\x1b[0m', 'int main(void)');
    console.log('\x1b[36m%s\x1b[0m', '{');
    console.log('\x1b[36m%s\x1b[0m', '   printf("Hello world");');
    console.log('\x1b[36m%s\x1b[0m', '   return 0;');
    console.log('\x1b[36m%s\x1b[0m', '}\n');
}

function JavaLang() {
    console.log('\x1b[36m%s\x1b[0m', '\npackage helloworld;');
    console.log('\x1b[36m%s\x1b[0m', 'public class HelloWorld {');
    console.log('\x1b[36m%s\x1b[0m', '   public static void main(String[] args) {');
    console.log('\x1b[36m%s\x1b[0m', '       System.out.println("Hello world");');
    console.log('\x1b[36m%s\x1b[0m', '   }')
    console.log('\x1b[36m%s\x1b[0m', '}\n');
}

function PHPLang() {
    console.log('\x1b[36m%s\x1b[0m', '\n<?php');
    console.log('\x1b[36m%s\x1b[0m', '   echo "Hello world"; // Or printf("Hello world");');
    console.log('\x1b[36m%s\x1b[0m', '?>\n');
}

function JSLang() {
    console.log('\x1b[36m%s\x1b[0m', '\nconsole.log("Hello world");\n');
}

function PyLang() {
    console.log('\x1b[36m%s\x1b[0m', '\nprint "Hello world"\n');
}

function HTML() {
    console.log('\x1b[36m%s\x1b[0m', '\n<!DOCTYPE html>');
    console.log('\x1b[36m%s\x1b[0m', '<html lang="en-us">');
    console.log('\x1b[36m%s\x1b[0m', '   <head>');
    console.log('\x1b[36m%s\x1b[0m', '       <meta charset="UTF-8">');
    console.log('\x1b[36m%s\x1b[0m', '       <title>Hello world</title>');
    console.log('\x1b[36m%s\x1b[0m', '   </head>');
    console.log('\x1b[36m%s\x1b[0m', '   <body>');
    console.log('\x1b[36m%s\x1b[0m', '       <h1>Hello world</h1>');
    console.log('\x1b[36m%s\x1b[0m', '   </body>');
    console.log('\x1b[36m%s\x1b[0m', '</html>\n');
}

function SHLang() {
    console.log('\x1b[36m%s\x1b[0m', '\n#!/bin/bash\n');
    console.log('\x1b[36m%s\x1b[0m', 'echo "Hello world"\n');
}

function Fortran() {
    console.log('\x1b[36m%s\x1b[0m', '\nprogram hello');
    console.log('\x1b[36m%s\x1b[0m', "print *, 'Hello, World!'");
    console.log('\x1b[36m%s\x1b[0m', 'end program hello\n');
}

function Cobol() {
    console.log('\x1b[36m%s\x1b[0m', '\nIDENTIFICATION DIVISION.');
    console.log('\x1b[36m%s\x1b[0m', 'PROGRAM-ID. HELLO-WORLD.');
    console.log('\x1b[36m%s\x1b[0m', 'PROCEDURE DIVISION.');
    console.log('\x1b[36m%s\x1b[0m', "   DISPLAY 'Hello world!'.");
    console.log('\x1b[36m%s\x1b[0m', '   STOP RUN.\n');
}

function CPP() { // C++ lang
    console.log('\x1b[36m%s\x1b[0m', '\n#include <iostream>\n');
    console.log('\x1b[36m%s\x1b[0m', 'int main(void)');
    console.log('\x1b[36m%s\x1b[0m', '{');
    console.log('\x1b[36m%s\x1b[0m', '   std::cout << "Hello world";');
    console.log('\x1b[36m%s\x1b[0m', '   return 0;');
    console.log('\x1b[36m%s\x1b[0m', '}\n');
}

function CS() {
    console.log('\x1b[36m%s\x1b[0m', '\nusing System;');
    console.log('\x1b[36m%s\x1b[0m', 'using System.Collections.Generic;');
    console.log('\x1b[36m%s\x1b[0m', 'using System.Linq;');
    console.log('\x1b[36m%s\x1b[0m', 'using System.Text;');
    console.log('\x1b[36m%s\x1b[0m', 'using System.Threading.Tasks;\n');
    console.log('\x1b[36m%s\x1b[0m', 'namespace HelloWorldApp {');
    console.log('\x1b[36m%s\x1b[0m', '   class HWApp {');
    console.log('\x1b[36m%s\x1b[0m', '       static void Main(String[] args) {');
    console.log('\x1b[36m%s\x1b[0m', '           Console.WriteLine("Hello world");')
    console.log('\x1b[36m%s\x1b[0m', '           Console.ReadKey();')
    console.log('\x1b[36m%s\x1b[0m', '       }');
    console.log('\x1b[36m%s\x1b[0m', '   }');
    console.log('\x1b[36m%s\x1b[0m', '}\n');
}

function RubyLang() {
    console.log('\x1b[36m%s\x1b[0m', '\nputs "Hello world"\n');
}

function PerlLang() {
    console.log('\x1b[36m%s\x1b[0m', '\n#!/usr/bin/perl\n');
    console.log('\x1b[36m%s\x1b[0m', 'use strict;');
    console.log('\x1b[36m%s\x1b[0m', 'use warnings;\n');
    console.log('\x1b[36m%s\x1b[0m', 'print("Hello world");\n');
}

function AssemblyLang() {
    console.log('\x1b[36m%s\x1b[0m', '\nsection .text align=0\n');
    console.log('\x1b[36m%s\x1b[0m', 'global _start\n');
    console.log('\x1b[36m%s\x1b[0m', "message db 'Hello world', 0x0a\n");
    console.log('\x1b[36m%s\x1b[0m', 'len equ $ - message\n');
    console.log('\x1b[36m%s\x1b[0m', '_start:');
    console.log('\x1b[36m%s\x1b[0m', '   mov eax, 4 ');
    console.log('\x1b[36m%s\x1b[0m', '   mov ebx, 1 ');
    console.log('\x1b[36m%s\x1b[0m', '   mov ecx, message ');
    console.log('\x1b[36m%s\x1b[0m', '   mov edx, len ');
    console.log('\x1b[36m%s\x1b[0m', '   int 0x80\n');
    console.log('\x1b[36m%s\x1b[0m', '   mov eax, 1');
    console.log('\x1b[36m%s\x1b[0m', '   int 0x8\n');
}

function Malbolge() {
    console.log('\x1b[36m%s\x1b[0m', "\n(=<`:9876Z4321UT.-Q+*)M\'&%$H\"!~}|Bzy?=|{z]KwZY44Eq0/{mlk**");
    console.log('\x1b[36m%s\x1b[0m', "hKs_dG5[m_BA{?-Y;;Vb\'rR5431M}/.zHGwEDCBA@98\\6543W10/\n");
}

function VBA() {
    console.log('\x1b[36m%s\x1b[0m', '\nSub HelloWorld()\n\'');
    console.log('\x1b[36m%s\x1b[0m', 'MsgBox "Hello world"')
    console.log('\x1b[36m%s\x1b[0m', 'End Sub\n');
}

function SwiftLang() {
    console.log('\x1b[36m%s\x1b[0m', '\nprint("Hello world")\n');
}

function Binary() {
    console.log('\x1b[36m%s\x1b[0m', '\n01001000 01100101 01101100 01101100 01101111 00100000 01110111 01101111 01110010 01101100 01100100\n');
}

function HEX() {
    console.log('\x1b[36m%s\x1b[0m', '\n48 65 6c 6c 6f 20 77 6f 72 6c 64\n');
}

function About() {
    console.log('\x1b[36m%s\x1b[0m', '\nName: Hello world code criator');
    console.log('\x1b[36m%s\x1b[0m', 'Version: 1.2');
    console.log('\x1b[36m%s\x1b[0m', 'AUTHOR: Eric Henrique');
    console.log('\x1b[36m%s\x1b[0m', 'Modified date: April 18, 2021');

    console.log('\x1b[36m%s\x1b[0m', '\n☼ Thank\'s for read here! ☼\n')
}

function Main() {
    // Menu
    console.log('\x1b[34m%s\x1b[0m', '\n=//Menu\\\\=');
    console.log('\x1b[33m%s\x1b[0m', '   [1] C');
    console.log('\x1b[33m%s\x1b[0m', '   [2] Java');
    console.log('\x1b[33m%s\x1b[0m', '   [3] PHP');
    console.log('\x1b[33m%s\x1b[0m', '   [4] JavaScript');
    console.log('\x1b[33m%s\x1b[0m', '   [5] Python');
    console.log('\x1b[33m%s\x1b[0m', '   [6] HTML');
    console.log('\x1b[33m%s\x1b[0m', '   [7] Shell');
    console.log('\x1b[33m%s\x1b[0m', '   [8] Fortran');
    console.log('\x1b[33m%s\x1b[0m', '   [9] Cobol');
    console.log('\x1b[33m%s\x1b[0m', '   [10] C++');
    console.log('\x1b[33m%s\x1b[0m', '   [11] C#');
    console.log('\x1b[33m%s\x1b[0m', '   [12] Ruby');
    console.log('\x1b[33m%s\x1b[0m', '   [13] Perl');
    console.log('\x1b[33m%s\x1b[0m', '   [14] Assembly');
    console.log('\x1b[33m%s\x1b[0m', '   [15] Malbolge');
    console.log('\x1b[33m%s\x1b[0m', '   [16] VBA');
    console.log('\x1b[33m%s\x1b[0m', '   [17] Swift');
    console.log('\x1b[33m%s\x1b[0m', '   [18] Binary');
    console.log('\x1b[33m%s\x1b[0m', '   [19] Hexadecimal');
    console.log('\x1b[33m%s\x1b[0m', '   [20] About\n');
    // End menu

    var readline = require('readline');
    var response = "";

    var reader = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    reader.question("Select a option: ", function(answer) {
        var response = answer;
        if(response == 1)
        {
            CLang();
        }
        else if(response == 2)
        {
            JavaLang();
        }
        else if(response == 3)
        {
            PHPLang();
        }
        else if(response == 4)
        {
            JSLang();
        }
        else if(response == 5)
        {
            PyLang();
        }
        else if(response == 6)
        {
            HTML();
        }
        else if(response == 7)
        {
            SHLang();
        }
        else if(response == 8)
        {
            Fortran();
        }
        else if(response == 9)
        {
            Cobol();
        }
        else if(response == 10)
        {
            CPP();
        }
        else if(response == 11)
        {
            CS();
        }
        else if(response == 12)
        {
            RubyLang();
        }
        else if(response == 13)
        {
            PerlLang();
        }
        else if(response == 14)
        {
            AssemblyLang();
        }
        else if(response == 15)
        {
            Malbolge();
        }
        else if(response == 16)
        {
            VBA();
        }
        else if(response == 17)
        {
            SwiftLang();
        }
        else if(response == 18)
        {
            Binary();
        }
        else if(response == 19)
        {
            HEX();
        }
        else if(response == 20)
        {
            About();
        }
        else
        {
            console.log('\n[ERROR] Unknown option.');
        }
        
        reader.close();
    });
}

Main();