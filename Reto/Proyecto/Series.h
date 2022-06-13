# ifndef Series_h
# define Sereies_h

# include <stdio.h>
# include <iostream>
# include "Serie.h"

using namespace std;

const int MAX_SERIES = 50;

class Series {
public:
    // Métodos constructores
    Series();

    // Métodos modificadores (sets)
    void setPtrSerie(Serie *_ptrSerie);
    void setCantidadSeries(int _cantidad);

    // Métodos de acceso (gets)
    Serie *getPtrSerie(string _iD);
    int getCantidadSeries();

    // Otros métodos
    void leerArchivo();
    void reporteTodasLasSeries();
    void reporteConCalificacion(double _calificacion);
    void reporteGenero(string _genero);
    void calcularCalificacionSeries();

private:
    Serie *arrPtrSeries[MAX_SERIES];
    int cantidad{};
};

# endif /* Series_h */
