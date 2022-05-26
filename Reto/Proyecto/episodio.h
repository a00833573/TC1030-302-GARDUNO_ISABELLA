# ifndef episodio_h
# define episodio_h
# include <stdio.h>
# include "serie.h"

// clase derivada de la clase serie
class episodio : public serie {
public:
    // Métodos constructores
    episodio();
    episodio(string _titulo, int _temporada, int _calificacion);
    
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

# endif /* episodio_h */