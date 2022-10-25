#ifndef EMPLEADO_CPP
#define EMPLEADO_CPP

#include <iostream>

class Empleado
{
    private:
    std::string name;
    std::string surname;

    public:

    Empleado(){}

    Empleado(std::string name, std::string surname)
    {
        this->name = name;
        this->surname = surname;
    }

    void setName(std::string name)
    {
        this->name = name;
    }

    std::string getName()
    {
        return this->name;
    }

    void setSurname(std::string surname)
    {
        this->surname = surname;
    }

    std::string getSurname()
    {
        return this->surname;
    }

};

#endif