#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct Persona {
    std::string nombre;
    std::string apellido;
    std::string direccion;
    std::string ADN;
    std::string Ciudad;
    std::string numero;
    bool visitado;
};


int main() {
    std::ifstream file("people.txt");
    Persona p;
    std::vector<Persona> personas;
    char comma; // to read the commas between fields
    
    while (getline(file, p.nombre, ',') &&
           getline(file, p.apellido, ',') &&
           getline(file, p.direccion, ',') &&
           getline(file, p.ADN, ',') &&
           getline(file, p.Ciudad, ',') &&
           getline(file, p.numero)) {
        
        p.visitado = false;
        personas.push_back(p);
    }
    return 0;
}
