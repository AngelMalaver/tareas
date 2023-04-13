#include <stdio.h>
#include <stdlib.h>

// Estructura de datos para libros
typedef struct {
    int codigo;
    char titulo[50];
    char autor[50];
    int anio_publicacion;
} Libro;

// Estructura de datos para nodos de la cola
typedef struct nodo {
    Libro libro;
    struct nodo *siguiente;
} Nodo;

// Funciones para manejar la cola
void crear_cola(Nodo **frente, Nodo **final) {
    *frente = NULL;
    *final = NULL;
}

void agregar_elemento(Nodo **frente, Nodo **final, Libro libro) {
    Nodo *nuevo_nodo = (Nodo*) malloc(sizeof(Nodo));
    nuevo_nodo->libro = libro;
    nuevo_nodo->siguiente = NULL;
    if (*frente == NULL) {
        *frente = nuevo_nodo;
    } else {
        (*final)->siguiente = nuevo_nodo;
    }
    *final = nuevo_nodo;
}

void borrar_elemento(Nodo **frente, Nodo **final) {
    if (*frente == NULL) {
        printf("La cola esta vacia.\n");
        return;
    }
    Nodo *nodo_borrado = *frente;
    *frente = (*frente)->siguiente;
    free(nodo_borrado);
}

void mostrar_cola(Nodo *frente) {
    if (frente == NULL) {
        printf("La cola esta vacia.\n");
        return;
    }
    printf("\n Elementos en la cola:\n");
    while (frente != NULL) {
        printf("Codigo: %d, Titulo: %s, Autor: %s, Anos de publicacion: %d\n", frente->libro.codigo, frente->libro.titulo, frente->libro.autor, frente->libro.anio_publicacion);
        frente = frente->siguiente;
    }
}

int main() {
    Nodo *frente, *final;
    crear_cola(&frente, &final);

    // Agregar algunos libros a la cola
    Libro libro1 = {1, "El tunel", "Ernesto Sabato", 1948};
    agregar_elemento(&frente, &final, libro1);
    Libro libro2 = {2, "Cien anos de soledad", "Gabriel Garcia Marquez", 1967};
    agregar_elemento(&frente, &final, libro2);
    Libro libro3 = {3, "Rayuela", "Julio Cortazar", 1963};
    agregar_elemento(&frente, &final, libro3);

    // Mostrar la cola actual
    mostrar_cola(frente);

    // Borrar un elemento de la cola
    borrar_elemento(&frente, &final);

    // Mostrar la cola actualizada
    mostrar_cola(frente);

    return 0;
}