#include <iostream>
using namespace std;
// Clase
class Cuenta {
private:
    double saldo; 

public:
// Constructor 
Cuenta(double saldoInicial) {
    saldo = saldoInicial;
    }
    // Método para depositar dinero
    void depositar(double monto) {
        if (monto > 0) {
            saldo += monto;
            cout << "Depósito exitoso." << saldo << endl;
            cout << "Tu salfo actual es de : " << saldo << endl;
        } else {
            cout << "El monto invalido." << endl;
        }
    }

    // Método para retirar dinero
    void retirar(double monto) {
        if (monto > 0 && monto <= saldo) {
            saldo -= monto;
            cout << "Retiro exitoso." << endl;
             cout << "Nuevo saldo: " << saldo << endl;
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
	cout<<" Escriba una opcion :  ";cin >> opcion;

        switch (opcion) {
        case 1:
            cuenta.verSaldo();
            break;
        case 2: {
            double monto;
            short n;
            cout<<" Opciones de retiro :"<<endl;
			cout<<" 1 - $ 20		4 - $ 100 "<<endl;
			cout<<" 2 - $ 40		5 - $ 200 "<<endl;
			cout<<" 3 - $ 60		6 - Cancelar transaccion "<<endl;
			cout << "Seleccione una opcion: ";cin >> n;
         switch (n) {
        case 1:
            monto = 20;
            cout << "Has seleccionado retirar $" << monto << endl;
            break;
        case 2:
            monto = 40;
            cout << "Has seleccionado retirar $" << monto << endl;
            break;
        case 3:
            monto = 60;
            cout << "Has seleccionado retirar $" << monto << endl;
            break;
        case 4:
            monto = 100;
            cout << "Has seleccionado retirar $" << monto << endl;
            break;
        case 5:
            monto = 200;
            cout << "Has seleccionado retirar $" << monto << endl;
            break;
        case 6:
            cout << "Has cancelado la transaccion." << endl;
            break;
        default:
            cout << "Opcion invalida. Por favor, intenta nuevamente." << endl;
            break;
    }
            cuenta.retirar(monto);
            break;
        }
        case 3 : {
            double monto;
            cout << "Ingrese el monto a depositar: ";cin >> monto;
            cuenta.depositar(monto);
            break;
        } 
        case 4:
            cout << "Gracias por usar el cajero automatico " << endl;
            break;
        default:
            cout << "Opcion invalida. Intente nuevamente." << endl;
            break;
        }
    } while (opcion != 4);

    return 0;
}
