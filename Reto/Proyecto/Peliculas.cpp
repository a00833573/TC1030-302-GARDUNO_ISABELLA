# include "Peliculas.h"
# include <sstream>
# include <fstream>

// Métodos constructores
Peliculas::Peliculas(){
    arrPtrPeliculas[MAX_PEL] = nullptr;
    cantidad  = 0;
}

// Métodos modificadores (sets)
void Peliculas::setPtrPelicula(Pelicula *_ptrPelicula){
    // Recibe apuntador y lo da de alta en la posición del valor que tenga actualmente
    // cantidad e incremente el atributo cantida en 1 unidad
    if (cantidad < 50) {
        arrPtrPeliculas[cantidad++] = _ptrPelicula;
    }
}

void Peliculas::setCantidadPeliculas(int _cantidad){
    // Actualiza el valor del atributo cantidad con el parámetro _cantidad
    cantidad = _cantidad;
}

// Métodos de acceso (gets)
Pelicula *Peliculas::getPtrPelicula(){
    // Retorna el ptr Pelicula que tiene el SId recibido como parámetro de entrada,
    // busca un objeto que tenga ese Id de pelicula, si no existe retorna un nullptr
    return new Pelicula;
}

int Peliculas::getCantidadPeliculas(){
    // Retorna el atributo de cantidad
    return 0;
}

// Otros métodos
void Peliculas::leerArchivo(){
    fstream fin;                            // fin - file input
    string row[6];                          // almacena los datos leídos del archivo :arreglo de strings
    string line, word;                      // linea: almacena la linea leída   word: alacena la palabra que se saca de line

    fin.open("/Users/isabe/OneDrive/Documentos/GitHub/TC1030-302-GARDUNO_ISABELLA/Reto/Proyecto/Pelicula.csv", ios::in); // abrir archivo de entrada

    cantidad = 0;                           // inicializar el atributo cantidad con 0
    while(getline(fin, line)){              // lee una línea del archivo y la almacena en line
        stringstream s(line);               // usando para separar las palabras (split)
        int iR = 0;                         // lee columna de dato y lo almacena en un string 'word'
        while(getline(s, word, ',')) {
            row[iR++] = word;               // añade la word al arreglo row e incementa iR para la proxima palabra
            }
    
        setPtrPelicula(new Pelicula(row[0], row [1], stoi(row[2]), row[3], stod(row[4]), stoi(row[5])));
        
        }
        
        fin.close();                         // sale del ciclo cuando ya no existen más lineas en el archivo

        // Desplegar todas las peliculas leidas
        /*for(int iR = 0; iR < cantidad; iR++){
            cout << iR << "-" << arrPtrPeliculas[iR]->str()<< endl;
        }
        */
    }

void Peliculas::reporteTodasLasPeliculas(){
    // Despliega todas las peliculas del arreglo de apuntadores usa al método str() existente de Pelicula
    // Calcula y despliega al final el promedio de todas las peliculas
    double promedio = 0;
    for(int iR = 0; iR < cantidad; iR++){
            cout << iR << "-" << arrPtrPeliculas[iR]->str()<< endl;
            promedio = (promedio + arrPtrPeliculas[iR]-> getCalificacion());
            cantidad = cantidad + 1;
        }

    if (cantidad > 0){
        cout << "Promedio: " << promedio / cantidad << endl;
    }
    else
        cout << "No hay películas para reportar \n";

}

void Peliculas::reporteConCalificacion(double _calificacionPromedio){
    // Despliega todas las películas que tienen la calificación indicada en el parámetro de entrada,
    // si no hay películas con esa calificación NO despliega 
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++){
        if (arrPtrPeliculas[iR]-> getCalificacion() == _calificacionPromedio){
            cout << iR << ' ' << *arrPtrPeliculas[iR];
            count++;
        }
    }

    if (count == 0){
        cout << "No hay peliculas con la calificación " << _calificacionPromedio;
    }
}

void Peliculas::reporteGenero(string _genero){
    // Despliega todas las películas que tienen el genero indicado en el parámetro de entrada,
    // si no hay películas con esa calificación NO despliega  
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++){
        if (arrPtrPeliculas[iR]-> getGenero() == _genero){
            cout << iR << ' ' << *arrPtrPeliculas[iR];
            count++;
        }
    }

    if (count == 0){
        cout << "No hay peliculas del genero " << _genero;
    }
}