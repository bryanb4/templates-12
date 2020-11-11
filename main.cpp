#include <iostream>
#include "arreglo.h"

using namespace std;

int main()
{
    Arreglo<string> arreglo;

    arreglo.insertar_inicio("amo");
    arreglo.insertar_inicio("te");
    arreglo.insertar_final("dany");
    arreglo.insertar_final("<3");


    for(size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }

    arreglo.insertar("loviu",2);
     for(size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
     for(size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }

    cout << endl;
    return 0;
}
