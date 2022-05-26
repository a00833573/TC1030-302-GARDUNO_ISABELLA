# include <iostream>
# include "video.cpp"
# include "pelicula.cpp"
# include "serie.cpp"
# include "episodio.cpp"


int main() {
    // Declaración de un video default
    video video1;

    // Delaración de un video con parámetros
    video video2{"001", "Drama de los Rayados", 120, "Drama, Super Tragedia, Elmiminacion", -100};

    // Desplegar el video1
    cout << video1.str() << endl;
    cout << video2.str() << endl;

    // Declaración de una película
    pelicula pelicula1{"002", "Parasite", 132, "Thriller, Comedia, Drama", 9, 4};

    // Desplegar la película
    cout << pelicula1.str() << endl;

    // Declaración de una serie default
    episodio episodio1;

    // Delaración de un video con parámetros
    episodio episodio2{"Friends", 10, 8};

    // Desplegar el video1
    cout << episodio1.str() << endl;
    cout << episodio2.str() << endl;
}
