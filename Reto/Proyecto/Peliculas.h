# ifndef Peliculas_h
# define Peliculas_h

# include <stdio.h>
# include <iostream>
# include "Pelicula.h"

using namespace std;

const int MAX_PEL = 50;

class Peliculas {
public:
    // Métodos constructores
    Peliculas();

    // Métodos modificadores (sets)
    void setPtrPelicula(Pelicula *_ptrPelicula);
    void setCantidadPeliculas(int _cantidad);

    // Métodos de acceso (gets)
    Pelicula *getPtrPelicula();
    int getCantidadPeliculas();

    // Otros métodos
    void leerArchivo();
    void reporteTodasLasPeliculas();
    void reporteConCalificacion(double _calificacionPromedio);
    void reporteGenero(string _genero);

private:
    Pelicula *arrPtrPeliculas[MAX_PEL];
    int cantidad;
};

# endif /* Peliculas_h */
