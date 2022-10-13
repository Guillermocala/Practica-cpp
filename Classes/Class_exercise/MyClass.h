#include <string>

class Persona{
    public:
		int nit;
		std::string nombre;
		int edad;

		Persona(int nit, std::string nombre, int edad);
		void showData();
};
