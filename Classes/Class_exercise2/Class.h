#include <string>

class Cuenta{
    public:
        std::string titular;
        double cantidad;

        Cuenta();
        Cuenta(std::string titular);
        Cuenta(std::string titular, double cantidad);
        void ingresar(double cantidad);
        void retirar(double cantidad);

        std::string getTitular();
        void setTitular(std::string titular);

        double getCantidad();
        void setCantidad(double cantidad);

        std::string toString();
};