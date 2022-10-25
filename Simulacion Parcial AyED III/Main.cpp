#include <iostream>
#include "./Empresa.cpp"

int main()
{
    Empresa empresa;
    Empleado empleado("Luciano", "Frias");
    Empleado empleado2("Ricardo", "Gutierrez");

    Ficha ficha(empleado, "TESTING");

    empresa.useFichaManager().createFicha(empleado, "TESTING");
    empresa.useFichaManager().createFicha(empleado2, "TESTING 2");

    empresa.useFichaManager().showFichas();

    getchar();
}