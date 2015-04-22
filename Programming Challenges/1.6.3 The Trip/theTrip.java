import java.util.ArrayList;
import java.util.Scanner;
import java.text.DecimalFormat;

public class Main {
		private static int nA;
		private static DecimalFormat deci = new DecimalFormat("0.000");
		private static Scanner ler = new Scanner(System.in);
		private static ArrayList<Double> costs = new ArrayList<Double>();
		
		public static void main(String[] args){
			do{
				nA = ler.nextInt(); 
				for(int i = 0; i < nA; i++){
					costs.add(ler.nextDouble());
				}
				if(nA != 0){
					System.out.println(deci.format(calcular(nA)));
				}
			}while(nA != 0);
		}
		
		public static double calcular(int nA){
			double soma = 0.0, media, exValue = 0.0;
			
			for(int i = 0; i < nA; i++){
				soma += costs.get(i);
			}
			media = soma / nA;
			for(int i = 0; i < nA; i++){
				if(costs.get(i) < media){
					exValue += media - costs.get(i);
				}
			}
			return exValue;
		}
}
