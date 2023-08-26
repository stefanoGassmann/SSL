
import time
inicio = time.time()

def fibonacci(n):
    if(n == 0):
        return 0
    elif(n == 1):
        return 1
    else:
        return (fibonacci(n - 1) + fibonacci(n - 2))

posicion = 64
print("Fibonacci:", end = ' ')
for posicion in range(0, posicion+1):
   print(fibonacci(posicion), end = ' ')

fin = time.time()
print(fin-inicio) 
