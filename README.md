<img src="https://raw.githubusercontent.com/JaeSeoKim/badge42/main/public/badge42_logo.svg" width ="10%"/>
<h1 align="center">
	Libft
</h1>

<p align="center">
	<b><i>Development repo for 42 projects</i></b><br>

---

## 🗣️

> _On this project we will create our own C library. We will recreate usual functions that you'll be allowed to use in all your other projects. <br>
  _En este proyecto crearemos nuestra propia libreria, recrearemos funciones tipicas de c que podremos usar en proyectos futuros.

## 📖

> _This is a glosary of the functions on our library.
  _Un glosario con el uso de las distintas funciones que forman nuestra libreria.
	
	
  	
GLOSARIO DE FUNCIONES

	•	isalpha: Devuelve un valor distinto de 0 si es valor es un caracter, sino 0.
	•	isdigit: Devuelve un valor distinto de 0 si el valor es un dígito, sino 0.
	•	isalnum: Devuelve un valor distinto de 0 si el valor es un alfanumérico, sino 0.
	•	isascii: Comprueba si el valor se encuentra en la tabla ascii.
	•	isprint: Compruebe si el valor es un caracter imprimible.
	•	strlen: Devuelve la longitud (número de letras almacenadas) en una cadena de texto, sin contar el carácter nulo final.
	•	memset: Copia el caracter c(convertido en un unsigned char) en determinados len bytes en el string b.
	•	bzero: La función bzero se puede utilizar para borrar el área de memoria dada con cero bytes (\0). Toma dos argumentos, la dirección inicial de la región de memoria y el número de bytes que deben ponerse a cero.
	•	memcpy: Copia n bytes desde el area de memoria de src a la de dst. Retorna un 	puntero a dst.
	•	memmove: Copia n bytes desde src a dst. Siempre copia de una forma no 	destructiva. Puede haber overlap. Retorna un puntero a dst. (DUDA DIFERENCIA 	ENTRE CONDICIONES)
	•	strlcpy: Copia size - 1 caracteres desde la string terminada en nul src a dst. Terminandola en nul. Retorna el tamaño de la string.
	•	strlcat: Añade src al final de dst. Concatena strings con una longitud limitada y lo termina en NULL siempre que el dstsize sea mayor a el string original de dst. Retorna la longitud del string que esta tratando crear.
	•	toupper: Convierte las minúsculas en mayúsculas. 
	•	tolower: Convierte las mayusculas en minúsculas.
	•	strchr: Busca un char dentro de un string. Devuelve NULL sino la contiene o un puntero a donde se encuentre.
	•	strrchr: Busca la ultima aparición de un carácter dado como un int(convertido en unsigned char). Devuelve NULL sino la contiene o un puntero a donde se encuentre.
	•	strncmp: Compara no más de n caracteres (caracteres posteriores al carácter nulo no se tienen en cuenta) de la cadena apuntada por s1 con la cadena apuntada por s2. Devuelve un int mayor igual o menor que 0. (Porque n -1).
	•	memchr: Localiza la primera aparición del carácter c (convertido a unsigned char) en los primeros n caracteres (cada uno interpretado como un unsigned char) del objeto apuntado por s. Retorna un puntero al carácter localizado, o un puntero nulo si el carácter no apareció en el objeto.
	•	memcmp: Compara los primeros n caracteres del objeto apuntado por s1 (interpretado como unsigned char) con los primeros n caracteres del objeto apuntado por s2 (interpretado como unsigned char).
	•	strnstr: Localiza la primera aparición del string needle en los primeros len bytes en el string haystack. Si needle esta vacía retorna	 haystack, si needle no esta retorna NULL. 
	•	atoi: Se usa para convertir una cadena en un entero. La conversión se detiene en cuanto se encuentra un carácter no aceptable. Si no se puede convertir la cadena, devuelve 0. En caso de desbordamiento, el valor no está definido.
	•	malloc: Asigna el tamaño de memoria solicitado y devuelve el puntero al primer byte del espacio asignado.
	•	calloc: Asigna el espacio para los elementos de la matriz. Inicia los elementos a cero y vuelve a poner un puntero en la memoria.
	•	strdup: Retorna un puntero a la nueva string que es un duplicado de s1. La memoria para la nueva string se reserva con malloc y puede ser liberada con free. Retorna NULL si no hay suficiente memoria.
	•	substr: Reserva con malloc y devuelve una subcadena especificada de una cadena.
	•	strjoin: Reserva (con malloc(3)) y devuelve una nueva string, formada por la concatenación de ’s1’ y ’s2’.	
	•	strtrim: Elimina todos los caracteres de la string set desde el principio y desde el final de s1, hasta encontrar un carácter n perteneciente a set. La string resultante se devuelve con una reserva de malloc.
	•	split: Reserva utilizando malloc un array de strings resultantes de separar la string s en substrings utilizando el caracter c como delimitador. El array debe terminar con un puntero NULL. (REPASAR)
	•	itoa: Utilizando malloc, genera un string que represente un valor entero recibido como argumento. Los números negativos se gestionan. El contrario a atoi. (REPASAR)
	•	strmapi: A cada caracter de la string s aplica la función f dando como parámetros el indice de cada carácter dentro de s y el propio carácter. Genera una nueva string con el resultado del uso sucesivo de f.
	•	striteri: A cada carácter de la string s aplica la función f dando como parámetros el indice de cada carácter dentro de s y la dirección del propio carácter, que podrá modificarse si es necesario.
	•	putchar_fd: Envia el caracter c al file descriptor especificado.
	•	putstr_fd: Envia la string s al file descriptor especificado.
	•	putendl_fd: Envia la string s al file descriptor dado seguido de un salto de linea.
	•	putnbr_fd: Envia el numero n al file descritor dado.
	•	lstnew: Crea un nuevo nodo utilizando malloc.
	•	lstadd_front: Añade el nodo al principio de a lista.
	•	lstsize: Cuenta el numero de nodos de una lista.
	•	lstlast: Devuelve el ultimo nodo de una lista.
	•	lstadd_back: Añade un nodo al final de la lista.
	•	lstdelone: Toma un nodo y libera la memoria del contenido utilizando la función dada como parámetros, ademas de liberar el nodo. La memoria de next no se libera.
	•	lstclear: Elimina y libera el nodo y todos los consecutivos utilizando la función del y free.
	•	lstiter: Itera la lista y aplica la función f en el contenido de cada nodo.
	•	lstmap:Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo. Crea una lista resultante de la aplicación correcta y sucesiva de la función ’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar el contenido de un nodo, si hace falta.
