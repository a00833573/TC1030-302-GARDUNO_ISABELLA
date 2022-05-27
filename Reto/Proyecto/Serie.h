# ifndef Serie_h
# define Serie_h
# include <stdio.h>
# include "Video.h"

// clase derivada de la clase video
class Serie : public Video {
public:
    // Métodos constructores
    Serie();
    
    // Métodos modificadores (sets)
    void setEpisodio(int _episodio);
    void setCantidad(int _cantidad);

    // Métodos de acceso (gets)
    int getEpisodio();
    int getCantidad();

    // Otros métodos
    double calculaCalPromedio();
    string str();

private:
    int episodio;
    int cantidad;
};

# endif /* Serie_h */
