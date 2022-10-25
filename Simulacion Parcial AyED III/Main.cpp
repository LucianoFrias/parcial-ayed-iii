#include <iostream>
#include "./Empresa.cpp"

int main()
{
    Empresa empresa;
    Empleado empleado;

    empleado.setName("Luciano");
    empleado.setSurname("Frias");

    Ficha ficha;
    ficha.setEmpleado(empleado);
    ficha.setNameEmpresa("TESTING");

    empresa.useFichaManager().createFicha();
    empresa.useFichaManager().loadFicha(ficha);

    empresa.useFichaManager().showFichas();

    getchar();
}