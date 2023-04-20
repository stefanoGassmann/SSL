OBJS := hello.o
BYNARY := programa

#Esta regla compila el programa principal
#Estoy aprendiendo a utilizar Makefiles por medio de la siguiente web (https://makefiletutorial.com)
#Nota: Tambien consulto la documentación oficial en (https://www.gnu.org/software/make/manual/make.html)

all: $(BYNARY) clean

programa: $(OBJS)
		gcc -o $(BYNARY) $(OBJS)

hello.o: 
		gcc -c hello.c

#Nota: Borrar el código objeto, no es tan buena idea, ya que make debe recompilar todos los archivos.
#Esto se hace por medio de las fechas y las horas de los archivos, entonces al eliminarlo,
clean: 
		rm -f $(OBJS)