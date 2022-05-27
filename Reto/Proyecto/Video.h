# ifndef Video_h
# define Video_h

# include <stdio.h>
# include <iostream>
using namespace std;

class Video {

public:
    // Métodos constructores
    Video();
    Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);

    // Métodos modificadores (sets)
    void setId(string _iD);
    void setTitulo(string _titulo);
    void setDuracion(int _duracion);
    void setGenero(string _genero);
    void setCalificacion(double _calificacionPromedio);

    // Métodos de acceso (gets)
    string getId();
    string getTitulo();
    int getDuracion();
    string getGenero();
    double setCalificacion();

    // Otros métodos
    string str();

protected:
    string iD;
    string titulo;
    int duracion;
    string genero;
    double calificacionPromedio;

};

# endif /* Video_h */
