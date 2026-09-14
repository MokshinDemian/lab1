#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void name() {
    setlocale(LC_ALL, ".UTF8");
    puts("********************************************************");
    puts("*      тема: Разработка консольного приложения         *");
    puts("*           выполнил Мокшин Д.Д.                       *");
    puts("********************************************************");
    return 0;
}
void date() {
    puts("__      __  __   __  ___ ");
    puts("_| /|  |  |   | |  | |_| ");
    puts("|_  |  |__|   | |__| |_| ");
    return 0;
}

void main() {
    name();
    date();
    return 0;
}