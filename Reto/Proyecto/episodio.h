# ifndef Episodio_h
# define Episodio_h
# include <stdio.h>
# include "serie.h"

// clase derivada de la clase serie
class Episodio : public Serie {
public:
    // Métodos constructores
    Episodio();
    Episodio(string _titulo, int _temporada, int _calificacion);
    
    // Métodos modificadores (sets)
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(int _calificacion);

    // Métodos de acceso (gets)
    string getTitulo();
    int getTemporada();
    int getCalificacion();

    // Otros métodos
    string str();

private:
    string titulo;
    int temporada;
    int calificacion;
};

# endif /* Episodio_h */