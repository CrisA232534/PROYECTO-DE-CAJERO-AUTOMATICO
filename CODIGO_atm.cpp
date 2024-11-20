#include<iostream>

using namespace std;

// Definición de la clase
class cajero {
private:
    int cuenta_usuarios[10];
    int NIP_usuario[10];
    int saldo_cajero;
    int saldo_usuario[10];
    

public:
    // Constructor
    cajero(int _cuenta usuario[],int _NIP_usuario[],int _saldo_cajero,int _saldo Usuario[]) {
        
    cuenta_usuarios[10] =   ;
    NIP_usuario[10] = ;
    saldo_cajero = 10000;
    saldo_usuario[10] = ;
    }

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
