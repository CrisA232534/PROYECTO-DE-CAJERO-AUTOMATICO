#include<iostream>

using namespace std;


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
