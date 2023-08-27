import java.time.*;

class Main {
  public static void main(String[] args) {

    Instant inicio = Instant.now();
      Main miMain = new Main(100000000,500000000);
    Instant fin = Instant.now();
    Duration duracion = Duration.between(inicio, fin);
     System.out.println("Tiempo de busqueda " + duracion);
    
  }
      private final int Array [];
    private final int numeroAbuscar;
    
    public Main(int largoArray, int numeroAbuscar){
        
        Array = new int[largoArray];
        
        for(int i = 0; i < largoArray; i++){
            
            Array[i] = i;
        }
        
        this.numeroAbuscar = numeroAbuscar;
    }
    
 
    public int search(){
    
        boolean flag = false;
        int max = Array.length -1;
        int min = 0;
        int pivote = 0;
        
        while(flag != true && min <= max){
            
            pivote = (int) (min+max)/2;
         
            if(Array[pivote] == numeroAbuscar){
              
                flag = true;
            }else if(Array[pivote] > numeroAbuscar){
              
                max = pivote;
            }else {
              
              min = pivote;
            }
            
        }
        
        return pivote;
    }
}
