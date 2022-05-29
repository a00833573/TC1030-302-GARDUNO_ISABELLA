# ifndef Serie_h
# define Serie_h

# include <stdio.h>
# include "Video.h"
# include "Episodio.h"

// clase derivada de la clase video
class Serie : public Video {
public:
    // Métodos constructores
    Serie();
    Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);
    
    // Métodos modificadores (sets)
    void setEpisodio(int _index, Episodio _episodio);
    void setCantidad(int _cantidad);

    // Métodos de acceso (gets)
    Episodio getEpisodio(int _index);
    int getCantidad();

    // Otros métodos
    double calculaCalPromedio();
    string str();

private:
    Episodio episodios[5];
    int cantidad;                   // cantidad de episodios de la serie
};

# endif /* Serie_h */
