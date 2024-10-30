#include <iostream>
using namespace std;

struct Punto{
    
    int x; // Coordenada x
    int y; // Coordenada y
    
    // punto 1 + punto2 pertenecen al tipo de dato Punto
    // 
    Punto Suma(Punto punto2){
        Punto resultado;
        resultado.x = x + punto2.x; 
        resultado.y = y + punto2.y;
        
        return resultado;
    }
    void inicializar(int x, int y){
        // necesario usar this
        // this -> x: se refiere al elemento de Punto y no al parametro de Suma
        this -> x = x; // this es un puntero implicito
        this -> y = y;
    }
    
};

int main()
{
    Punto p1 = {3, 4};
    Punto p2 = {1, 2}; // Crea otro punto en (1,2)
    Punto p3;
    
    Punto resultado = p1.Suma(p2);
    cout << "La suma de puntos es: (" << resultado.x << ", " << resultado.y << ")" << endl;

    
    /*
    estructura: es un tipo de dato definido por el usuario.
    
    */

    return 0;
}
