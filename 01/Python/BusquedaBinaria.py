
import time
inicio = time.time()

cantidadElemArray = 100000000
elemBuscado = 1

Array = [ ]
for i in range(cantidadElemArray):
    numero = i
    Array.append(numero + 1)

def busquedaBinaria(Array, numeroAbuscar):
  flag = False
  max = len(Array) - 1
  min = 0
  pivote = 0

  while (flag != True & (min <= max)):

    pivote = (min + max) // 2

    if Array[pivote] == numeroAbuscar:
      flag = True
      print("El numero deseado se encuentra en la posicion:{}".format(pivote))

    elif Array[pivote] > numeroAbuscar:
      max = pivote - 1

    else:
      min = pivote + 1

  return pivote

busquedaBinaria(Array, elemBuscado)

fin = time.time()
print(fin-inicio) 
