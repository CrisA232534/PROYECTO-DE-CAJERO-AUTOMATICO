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



int main() {
    // Crear una cuenta con saldo inicial
    Cuenta cuenta(1000.0);

    int opcion;
    do {
    //MENU 
	cout<<"---------------MENU PRINCIPAL-----------------"<<endl;
	cout<<" 1 - Ver mi saldo "<<endl;
	cout<<" 2 - Retirar efectivo "<<endl;
	cout<<" 3 - Depositar fondos  "<<endl;
	cout<<" 4 - salir  "<<endl;
	cout<<" Escriba una opcion :  ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cuenta.verSaldo();
            break;
        case 2: {
            double monto;
            cout << "Ingrese el monto a depositar: ";
            cin >> monto;
            cuenta.depositar(monto);
            break;
        }
        case 3: {
            double monto;
            cout << "Ingrese el monto a retirar: ";
            cin >> monto;
            cuenta.retirar(monto);
            break;
        }
        case 4:
            cout << "Gracias por usar el cajero automatico " << endl;
            break;
        default:
            cout << "Opcion invalida. Intente nuevamente." << endl;
            break;
        }
    } while (opcion != 4)
    return 0;
}

