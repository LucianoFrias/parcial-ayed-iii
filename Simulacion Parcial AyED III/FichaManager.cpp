#include "./Ficha.cpp"
#include <stack>


class FichaManager
{
    private:
    std::stack<Ficha> fichas;

    public:
    void createFicha()
    {
        std::cout << "Ficha created" << std::endl;
    }

    Ficha getFicha(std::string surname)
    {
       
    }

    void loadFicha(Ficha& ficha)
    {
        this->fichas.push(ficha);
    }

    void showFichas()
    {
        std::stack<Ficha> tempFichas = fichas;

        while (!tempFichas.empty())
        {
            std::cout << tempFichas.top().getEmpleado().getName() << std::endl;
            std::cout << tempFichas.top().getEmpleado().getSurname() << std::endl;
            tempFichas.pop();
        }
    }

};