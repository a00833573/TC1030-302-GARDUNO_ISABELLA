# include "Episodio.h"

// Métodos constructores
Episodio::Episodio() : Serie(){
    titulo = "Supernatural";
    temporada = 15;
    calificacion = 10;
}

Episodio::Episodio(string _titulo, int _temporada, int _calificacion) : Serie () {
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}

// Métodos modificadores (sets)
void Episodio::setTitulo(string _titulo){
    titulo = _titulo;
}

void Episodio::setTemporada(int _temporada){
    temporada = _temporada;
}

void Episodio::setCalificacion(int _calificacion){
    calificacion = _calificacion;
}

// Métodos de acceso (gets)
string Episodio::getTitulo(){
    return titulo;
}

int Episodio::getTemporada(){
    return temporada;
}

int Episodio::getCalificacion(){
    return calificacion;
}

// Otros métodos
string Episodio::str(){
    return titulo + ',' + to_string(temporada) + ','  + to_string(calificacion);
}