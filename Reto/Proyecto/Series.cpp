# include "Series.h"
# include <sstream>
# include <fstream>

// Métodos constructores
Series::Series(){
    arrPtrSeries[MAX_SERIES] = nullptr;
    cantidad  = 0;
}

// Métodos modificadores (sets)
void Series::setPtrSerie(Serie *_ptrSerie){
    if(cantidad < 50){
        arrPtrSeries[cantidad++] = _ptrSerie;
    }
}

void Series::setCantidadSeries(int _cantidad){
    cantidad = _cantidad;
}

// Métodos de acceso (gets)
Serie *Series::getPtrSerie(string _iD){
    return new Serie;
}

int Series::getCantidadSeries(){
    return 0;
}

// Otros métodos
// Leer todas series y sus episodios desde un archivo
void Series::leerArchivo(){
    string linea, dato, row[6];                 // Declaración de variables para usarlas al leer cada líjea del archivo
    int iRow{}, iS{}, cantEpisodios{};          // Variable para llevar el contador de cantidad de series leídas del archivo
    fstream lectura;                            // Declaración de variable para el archivo
    Episodio *episodio;

    lectura.open("/Users/isabe/OneDrive/Documentos/GitHub/TC1030-302-GARDUNO_ISABELLA/Reto/Proyecto/Serie.csv", ios::in);
    cantidad = 0;                               // inicializar el atributo cantidad de Series con 0

    // Ciclo para leer todo el archivo
    while(getline(lectura, linea)){             // lee ina lína de archivo, correspondiente a una serie
        std::stringstream registro(linea);
        iRow = 0;

        // Ciclo para separar los elementos de la serie (string)
        while(getline(registro, dato, ',')){    // Separar los elementos de la serie leída
            cout << dato << endl;
            row[iRow++] = dato;
        }

        // Crear un objeto de la clase Serie, new retorna un pointer
        arrPtrSeries[cantidad] = new Serie(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), 0);
        cantidad++;                           // Va por la siguiente serie del archivo, incrementa para la siguiente
    }
    lectura.close();

    // Leer los episodios de la serie
    lectura.open("/Users/isabe/OneDrive/Documentos/GitHub/TC1030-302-GARDUNO_ISABELLA/Reto/Proyecto/Episodio.csv", ios::in);

    // Ciclo para leer todo el archivo
    while(getline(lectura, linea)){
        std::stringstream registro(linea);
        iRow = 0;

        while(getline(registro, dato, ',')){
            row[iRow++] = dato;
        }

        // iD - convertir int - sacar la posición de la serie 500 - 0, 501 -1, 502
        iS = stoi(row[0]) - 500;                                        // Posición del arreglo donde esta el ptr de la serie pertenece el episodio
        episodio = new Episodio(row[1], stoi(row[2]), stod(row[3]));    // Crea el episodio
        cantEpisodios = arrPtrSeries[iS]->getCantidad();                // Traer cantidad de episodios de la serie iS - la 1a vez retorna 0

        // Verificar si todavía podemos añadir otro Episodio al arreglo
        if(cantEpisodios < 5){
            arrPtrSeries[iS]->setEpisodio(cantEpisodios, *(episodio));
            arrPtrSeries[iS]->setCantidad(++cantEpisodios);
        }
    }
    lectura.close();
}

void Series::reporteTodasLasSeries(){
    int promedio = 0;
    for(int iR = 0; iR < cantidad; iR++){
            cout << iR << "-" << arrPtrSeries[iR]->str()<< endl;

            promedio = (promedio + arrPtrSeries[iR]-> getCalificacion());

            cantidad = cantidad + 1;
        }
    promedio = promedio/cantidad;
    cout << "El promedio de todas las series" << endl;
}

void Series::reporteConCalificacion(double _calificacionPromedio){
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++){
        if (arrPtrSeries[iR]-> getCalificacion() == _calificacionPromedio){
            cout << iR << ' ' << *arrPtrSeries[iR];
            count++;
        }
    }

    if (count == 0){
        cout << "No hay peliculas con la calificacion " << _calificacionPromedio;
    }
}

void Series::reporteGenero(string _genero){
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++){
        if (arrPtrSeries[iR]-> getGenero() == _genero){
            cout << iR << arrPtrSeries[iR]->str() << endl;
            count++;
        }
    }

    if (count == 0){
        cout << "No hay series del genero " << _genero;
    }
}

void Series::calcularCalificacionSeries(){
// Calcular la calificacion de cada serie en base a sus episodios
// Mandar a llamar al métoodo calculaCalPromedio de la clase Serie para que calcule la calificación promedio de la Serie
    double valor = 0;
    for (int iR = 0; iR < cantidad; iR++){
        valor = valor + arrPtrSeries[iR]-> calculaCalPromedio();
    }
}