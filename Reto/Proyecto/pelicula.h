# ifndef pelicula_h
# define pelicula_h
# include <stdio.h>
# include "video.h"

// clase derivada de la clase video
class pelicula : public video {
public:
    // Métodos constructores
    pelicula();
    pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);
    
    // Métodos modificadores (sets)
    void setOscares(int _oscares);

    // Métodos de acceso (gets)
    int getOscares();

    // Otros métodos
    string str();

private:
    int oscares;
};

# endif /* pelicula_h */