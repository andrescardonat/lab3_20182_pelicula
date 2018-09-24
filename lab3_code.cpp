/* Practica de Laboratorio 3
*  Informatica 2 - 2018_2
*  Prof: Juan Camilo Correa Chica
*  Fecha: Septiembre 10/2018 - Septiembre 17/2018 - Septiembre 24/2018
*  Plazo máximo para enviar enlace para clonar el repositorio: Septiembre 17/2018 11:00pm
*  Estudiante1: Nombres y apellidos completos
*  Estudiante2: Nombres y apellidos completos (Opcional, puede trabajar individualmente)
*  Fecha del ultimo Commit en GitHub: Agregue la fecha y hora del ultimo Commit (aproximada)
*
* 1. Diseñe e implemente una clase llamada "Libro" que tiene los siguientes atributos privados:
*	Un atributo de tipo entero para el codigo de catalogo del libro
*	Un atributo de tipo cadena de caracteres para el nombre del libro
*	Un atributo de tipo char para la materia del libro (L = Literatura, C = Ciencias, G = Geografia, A = Arte, E = Enciclopedia, D = Diccionario)
*	Un atributo de tipo cadena de caracteres para el nombre del autor
*	Un atributo tipo bool para indicar si el libro esta disponible o prestado (True = disponible, False = prestado)
*	
*	Adicionalmente la clase debe contar con metodos publicos para modificar y obtener el valor de los atributos
* La clase debe tener un constructor que permita inicializar todos los atributos de la clase al declarar un objeto (NO es constructor por defecto)
*	Implemente una funcion amiga que permita buscar un "Libro" por Titulo y por Nombre de Autor
*	Implemente una clase amiga que permita saber si un "Libro" esta disponible o prestado
*
* 2. Diseñe e implemente una clase llamada "Movie" que tiene los siguientes atributos privados:
* Un atributo de tipo entero para el ID de la pelicula
* Un atributo de tipo cadena de caracteres para el nombre de la pelicula
* Un atributo de tipo cadena de caracteres para el genero de la pelicula
* Un atributo de tipo cadena de caracteres para el director de la pelicula
* Un atributo tipo float para el "rating promedio" de la pelicula (el rating es un valor de 0.0 a 5.0 con el que los cinefilos califican una pelicula)
* Un atributo tipo int que almacena el número de veces que la pelicula ha sido calificada
*
* El "rating promedio" de una pelicula se calcula como el total de la suma de todas las calificaciones que se le han dado a una pelicula
* sobre el numero de calificaciones.
*
* La clase debe contar con un constructor por defecto, un constructor para inicializar atributos al instanciar objetos de la clase y un
* constructor por copia.
* La clase debe contar con metodos para modificar y obtener el valor de cada atributo individualmente.
*
* 3. Utilizando la clase que acaba de implementar, diseñe una pequeña aplicacion que permite a un usuario calificar peliculas. Si la pelicula ya ha sido calificada previamente (es decir,
* si ya existe en la base de datos) entonces debe pedirle al usuario una calificación de 0.0 a 5.0 para esa pelicula. Si la pelicula no está
* en la base de datos, entonces el programa debe permitirle al usuario ingresar la nueva pelicula a la base de datos, con el diligenciamiento
* de todos sus datos, incluida la calificación de la pelicula por supuesto.
*
* La aplicación debe tener una opcion que sirve para recomendar peliculas a los usuarios. Esta recomendación se debe hacer de acuerdo a la
* popularidad y a la calificación de la pelicula. Es decir, se deben recomendar las peliculas con las calificaciones más altas y con el
* mayor número de calificaciones recibidas, osea que no tiene sentido recomendar una pelicula que ha sido calificada con 5.0 pero tiene
* una sola calificación de un aficionado al cine.
*/
