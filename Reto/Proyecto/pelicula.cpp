# include "pelicula.h"

// Métodos constructores
pelicula::pelicula() : video() {
    oscares = 7;  
}

pelicula::pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares) : video(_iD, _titulo, _duracion, _genero, _calificacionPromedio){
    oscares  = _oscares;
}
    
// Métodos modificadores (sets)
void pelicula::setOscares(int _oscares){
    oscares = _oscares;
}

// Métodos de acceso (gets)
int pelicula::getOscares(){
    return oscares;
}

// Otros métodos
string pelicula::str(){
    return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio) + ',' + to_string(oscares);
}