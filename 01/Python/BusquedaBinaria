Array = [ ]
for i in range(100):
    numero = i
    Array.append(numero + 1)

print(Array)

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

busquedaBinaria(Array, numeroAbuscar=1)
