#include "./Empleado.cpp"
#include "./FichaManager.cpp"
#include <queue>

class Empresa
{
    private:
    std::queue<Empleado> empleados;
    FichaManager fichaManager;

    public:

    Empresa(){};

    void atenderEmpleados()
    {
        
    };

    void addEmpleado(Empleado& empleado)
    {
        empleados.push(empleado);
    }

    FichaManager useFichaManager()
    {
        return fichaManager;
    }


};