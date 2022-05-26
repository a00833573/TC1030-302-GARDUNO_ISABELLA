# include "episodio.h"

// Métodos constructores
episodio::episodio() : serie(){
    titulo = "Supernatural";
    temporada = 15;
    calificacion = 10;
}

episodio::episodio(string _titulo, int _temporada, int _calificacion) : serie () {
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}

// Métodos modificadores (sets)
void episodio::setTitulo(string _titulo){
    titulo = _titulo;
}

void episodio::setTemporada(int _temporada){
    temporada = _temporada;
}

void episodio::setCalificacion(int _calificacion){
    calificacion = _calificacion;
}

// Métodos de acceso (gets)
string episodio::getTitulo(){
    return titulo;
}

int episodio::getTemporada(){
    return temporada;
}

int episodio::getCalificacion(){
    return calificacion;
}

// Otros métodos
string episodio::str(){
    return titulo + ',' + to_string(temporada) + ','  + to_string(calificacion);
}