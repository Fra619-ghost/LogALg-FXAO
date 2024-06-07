#include <iostream>
#include <locale.h> //para usar  idioma español 
#include "proceso7.cpp"


using namespace std;

int main(int argc, char const *argv[])
{
    setlocale( LC_ALL, "spanish");
    principal();
    return 0;
}
