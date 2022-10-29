#include <iostream>
#include "./Empresa.cpp"

int main()
{
    Empresa empresa;

    Empleado empleado = empresa.addEmpleado("Luciano", "Frias");
    Empleado empleado2 = empresa.addEmpleado("Ricardo", "Gutierrez");


    empresa.useFichaManager()->createFicha(empleado, "TESTING");
    empresa.useFichaManager()->createFicha(empleado2, "TESTING 2");

    
    empresa.useFichaManager()->showFichas();

}