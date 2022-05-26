# ifndef serie_h
# define serie_h
# include <stdio.h>
# include "video.h"

// clase derivada de la clase video
class serie : public video {
public:
    // Métodos constructores
    serie();
    
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

# endif /* serie_h */