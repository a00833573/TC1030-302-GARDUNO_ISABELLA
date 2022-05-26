# include "serie.h"

// Métodos constructores
serie::serie( ) : video( ) {

}
    
// Métodos modificadores (sets)
void serie::setEpisodio(int _episodio){

}

void serie::setCantidad(int _cantidad){
    cantidad = _cantidad;
}

// Métodos de acceso (gets)
int serie::getEpisodio(){
    
}

int serie::getCantidad(){
    return cantidad;
}

// Otros métodos
double serie::calculaCalPromedio(){

}

string serie::str(){
    return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio);
}