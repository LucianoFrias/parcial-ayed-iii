#ifndef FICHA_CPP
#define FICHA_CPP

#include "./Empleado.cpp"
#include <vector>

class Ficha
{

    private:
    Empleado empleado;
    std::vector<std::string> questions;
    std::string nameEmpresa;
    std::vector<std::string> controlesAmbulatorios;


    public:

    Ficha()
    {
        
    }

    void setEmpleado(Empleado& empleado)
    {
        this->empleado = empleado;
    }

    Empleado getEmpleado()
    {
        return this->empleado;
    }

    void setNameEmpresa(std::string nameEmpresa)
    {
        this->nameEmpresa = nameEmpresa;
    }

    std::string getNameEmpresa()
    {
        return this->nameEmpresa;
    }

    void addQuestion(std::string question)
    {
        this->questions.push_back(question);
    }

    void addControlAmbulatorio(std::string controlAmbulatorio)
    {
        this->controlesAmbulatorios.push_back(controlAmbulatorio);
    }

};

#endif