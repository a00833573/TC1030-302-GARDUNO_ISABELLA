# include <iostream>
# include "Video.cpp"
# include "Pelicula.cpp"
# include "Serie.cpp"
# include "Episodio.cpp"


int main() {
    // Declaración de un video default
    Video video1;

    // Delaración de un video con parámetros
    Video video2{"001", "Drama de los Rayados", 120, "Drama, Super Tragedia, Elmiminacion", -100};

    // Desplegar el video1
    cout << video1.str() << endl;
    cout << video2.str() << endl;

    
    // Declaración de una película
    Pelicula pelicula1{"002", "Parasite", 132, "Thriller, Comedia, Drama", 9, 4};

    // Desplegar la película
    cout << pelicula1.str() << endl;

    
    // Declaración de una serie
    Serie serie1 {"003", "She-Ra and the Princesses of Power", 5, "Dibujos animados, Fantasia", 9};

    // Desplegar la serie 1
    cout << serie1.str() << endl;

    // Declaración de los episodios
    Episodio episodio1{"The Sword Part 1", 1, 8};
    Episodio episodio2{"The Sword Part 2", 1, 7};
    Episodio episodio3{"Razz", 1, 6};
    Episodio episodio4{"Flowers for She-Ra", 1, 9};
    Episodio episodio5{"The Sea Gate", 1, 9};

    // Juntar la serie con el episodio
    serie1.setEpisodio(0, episodio1);
    serie1.setEpisodio(1, episodio2);
    serie1.setEpisodio(2, episodio3);
    serie1.setEpisodio(3, episodio4);
    serie1.setEpisodio(4, episodio5);
    
    serie1.setCantidad(serie1.getCantidad() + 5);

    // Desplegar la serie con sus episodios
    cout << serie1.str() << endl;

    cout << serie1.getCantidad() << endl;
}
