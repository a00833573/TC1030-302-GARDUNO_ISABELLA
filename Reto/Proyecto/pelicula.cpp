# include "Pelicula.h"

// Métodos constructores
Pelicula::Pelicula() : Video() {
    oscares = 7;  
}

Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares) : Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio){
    oscares  = _oscares;
}
    
// Métodos modificadores (sets)
void Pelicula::setOscares(int _oscares){
    oscares = _oscares;
}

// Métodos de acceso (gets)
int Pelicula::getOscares(){
    return oscares;
}

// Otros métodos
string Pelicula::str(){
    return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio) + ',' + to_string(oscares);
}