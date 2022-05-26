# include "video.h"

// Métodos constructores
video::video(){
    iD = "000";
    titulo = "Tigres perdieron muy triste";
    duracion = 105;
    genero = "Tragedia-Drama";
    calificacionPromedio = 0;
}

video::video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio){
    double _calificacion;
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacionPromedio = _calificacionPromedio;
}

// Métodos modificadores (sets)
void video::setId(string _iD){
    iD = _iD;
}

void video::setTitulo(string _titulo){
    titulo = _titulo;
}

void video::setDuracion(int _duracion){
    duracion = _duracion;
}

void video::setGenero(string _genero){
    genero = _genero;
}

void video::setCalificacion(double _calificacionPromedio){
    calificacionPromedio = _calificacionPromedio;
}

 // Métodos de acceso (gets)
string video::getId(){
    return iD;
}

string video::getTitulo(){
    return titulo;
}

int video::getDuracion(){
    return duracion;
}

string video::getGenero(){
    return genero;
}

double video::setCalificacion(){
    return calificacionPromedio;
}

// Otros métodos
string video::str(){
    return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio);
}