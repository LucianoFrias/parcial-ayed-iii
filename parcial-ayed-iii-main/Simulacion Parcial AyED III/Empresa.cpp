#include "./Empleado.cpp"
#include "./FichaManager.cpp"
#include <queue>

class Empresa
{
    private:
    std::queue<Empleado> empleados;
    FichaManager* fichaManager;

    public:

    Empresa(){
        fichaManager = new FichaManager();
    };

    void atenderEmpleados()
    {
        
    };

    Empleado addEmpleado(std::string name, std::string surname)
    {
        Empleado empleado(name, surname);
        empleados.push(empleado);

        return empleado;
    }

    void showEmpleados()
    {
        std::queue<Empleado> tempEmpleados = empleados;

        while(!tempEmpleados.empty())
        {
            std::cout << tempEmpleados.front().getName() << std::endl;
            std::cout << tempEmpleados.front().getSurname() << std::endl;
            std::cout << "" << std::endl;
            tempEmpleados.pop();
        }
        
    }


    // MANAGERS

    FichaManager* useFichaManager()
    {
        return fichaManager;
    }


};