#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> v(10); 

    for(int i = 0; i < v.size(); i++){
        v[i] = i; 
    }

    int numeroBuscado = 4;
    
    int izq = 0;
    int der = v.size() - 1;
    int medio;
    bool encontrado = false;
    
    while(izq <= der && !encontrado){
        medio = (izq + der) / 2;

        if(v[medio] == numeroBuscado){ 
            encontrado = true;
            std::cout << "Encontrado en la posicion: " << medio << std::endl;
        }
        else if(v[medio] > numeroBuscado){ 
            der = medio - 1; 
        }
        else{ 
            izq = medio + 1;
        }
    }

    if (!encontrado) {
        std::cout << "El numero no esta en el arreglo." << std::endl;
    }

    return 0;
}