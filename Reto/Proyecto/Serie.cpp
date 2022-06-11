# include "Serie.h"

// Métodos constructores
Serie::Serie():Video(){
    cantidad = 0;
}

Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio):Video(_iD, _titulo, _duracion, _genero, 0){
    cantidad = 0;
}
    
// Métodos modificadores (sets)
void Serie::setEpisodio(int _index, Episodio _episodio){
    // Validar que el _index sea correcto, si no cumple el index no se cambia el episodio
    if ((cantidad >= 0) && (_index <= cantidad)){
        episodios[_index] = _episodio;
        cantidad = cantidad + 1;
    }
    else
        Episodio();
}

void Serie::setCantidad(int _cantidad){
    cantidad = _cantidad;
}

// Métodos de acceso (gets)
Episodio Serie::getEpisodio(int _index){
    // Validar que el _index sea correcto, si no cumple el index no se cambia el episodio}
    if ((cantidad >= 0) && (_index <= cantidad))
        return episodios[_index];
    else
        return Episodio();
}

int Serie::getCantidad(){
    return cantidad;
}

// Otros métodos
double Serie::calculaCalPromedio(){
    double acomulador = 0;
    for(int index = 0; index < cantidad; index++){
        acomulador = acomulador + episodios[index].getCalificacion();
    }

    if (cantidad > 0)
        return acomulador/cantidad;
    else
        return 0;
}

string Serie::str(){
    // 1° concatenar todos los episodios de la serie
    string acomulador = "\n";
    for(int index = 0; index < cantidad; index++){
        acomulador = acomulador + episodios[index].str() + "\n";
    }

    return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio) + acomulador;
}