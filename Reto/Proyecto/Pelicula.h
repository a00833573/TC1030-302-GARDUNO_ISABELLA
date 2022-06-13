# ifndef Pelicula_h
# define Pelicula_h
# include <stdio.h>
# include "Video.h"

// clase derivada de la clase video
class Pelicula : public Video {
public:
    // Métodos constructores
    Pelicula();
    Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);
    
    // Métodos modificadores (sets)
    void setOscares(int _oscares);

    // Métodos de acceso (gets)
    int getOscares();

    // Otros métodos
    string str();

    // Sobrecarga de operadores << con función amiga 
    friend ostream & operator<<(ostream &out, const Pelicula &p);

private:
    int oscares;
};

# endif /* Pelicula_h */
