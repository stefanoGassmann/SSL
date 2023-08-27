import java.time.*;

class Main {
  public static void main(String[] args) {

    Instant inicio = Instant.now();

    int cantidadSerie = 64;
    Main miMain = new Main();

      for(int i = 0; i < cantidadSerie; i++ ){
            
            System.out.println(miMain.fibonacci(i));
      }
    
    Instant fin = Instant.now();
    Duration duracion = Duration.between(inicio, fin);
     System.out.println("Tiempo de busqueda " + duracion);
    
  }

  int fibonacci(int n){
        
        if(n == 0){
            
            return 0;
        }else if(n == 1){
            
            return 1;
        }else{
            
            return(fibonacci(n-1) + fibonacci(n-2));
        }
    }
    
}
