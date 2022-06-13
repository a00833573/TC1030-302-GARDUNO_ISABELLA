# ifndef Episodio_h
# define Episodio_h

# include <stdio.h>
# include <iostream>
using namespace std;

class Episodio {
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
    string str() const;

private:
    string titulo;
    int temporada;
    double calificacion;
};

# endif /* Episodio_h */
