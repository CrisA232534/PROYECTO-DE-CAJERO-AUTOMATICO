#include<iostream>
using namespace std;
// Clase
class Cuenta {
private:
double saldo; // Saldo de la cuenta
public:
// Constructor 
Cuenta(double saldoInicial) {
saldo = saldoInicial;
}
// Método para depositar dinero
    void depositar(double monto) {
        if (monto > 0) {
            saldo += monto;
            cout << "Depósito exitoso. Nuevo saldo: $" << saldo << endl;
        } else {
            cout << "El monto debe ser positivo." << endl;
        }
    }

    // Método para retirar dinero
    void retirar(double monto) {
        if (monto > 0 && monto <= saldo) {
            saldo -= monto;
            cout << "Retiro exitoso. Nuevo saldo: " << saldo << endl;
        } else if (monto > saldo) {
            cout << "Saldo insuficiente." << endl;
        } else {
            cout << "El monto debe ser positivo." << endl;
        }
    }

    // Método para mostrar el saldo actual
    void verSaldo() const {
        cout << "Saldo actual: " << saldo << endl;
    }
};

// Clase que controla el menu de inicio y compara el ingreso de datos con la base de datos
class PantallaInicio {
private:
	//variables de tipo string para comparar texto en la base de datos
    string nip;
    string contrasena;

public:
    // Método que muestra el menu de inicio
    void mostrarPantalla() {
        cout<< "========================================\n";
        cout<< "               BIENVENIDO!   \n";
        cout<< "========================================\n";
        cout<< "      escriba su numero de cuenta: \n";
        cout<< "               ";
        cin >> nip; // Leer el ID
        cout<< "         escriba su contraseña: \n";
        cout<< "               ";
        cin >> contrasena; // Leer la contraseña
    }
