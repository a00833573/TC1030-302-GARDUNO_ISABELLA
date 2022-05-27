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

    // Declaración de una serie default
    Episodio episodio1;

    // Delaración de un video con parámetros
    Episodio episodio2{"Friends", 10, 8};

    // Desplegar el video1
    cout << episodio1.str() << endl;
    cout << episodio2.str() << endl;
}
