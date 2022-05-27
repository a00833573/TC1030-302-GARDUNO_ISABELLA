# include "Serie.h"

// Métodos constructores
Serie::Serie( ) : Video( ) {

}
    
// Métodos modificadores (sets)
void Serie::setEpisodio(int _episodio){

}

void Serie::setCantidad(int _cantidad){
    cantidad = _cantidad;
}

// Métodos de acceso (gets)
int Serie::getEpisodio(){
    
}

int Serie::getCantidad(){
    return cantidad;
}

// Otros métodos
double Serie::calculaCalPromedio(){

}

string Serie::str(){
    return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio);
}