import java.util.Scanner;
import java.math.*;

class chefston{
public static void  main(String[] args){
	Scanner input = new Scanner(System.in);
	int t, n, k, temp, i;
	int a[] = new int[100004];
	int b[] = new int[100004];
	BigInteger b1, b2, b3, big;
	t = input.nextInt();
	while(t > 0){
		t--;
		n = input.nextInt();
		k = input.nextInt();
		for(i = 0; i < n; i++){
			temp = input.nextInt();
			a[i] = k/temp;
		}
		big = new BigInteger("0");
		for(i = 0; i < n; i++){
			//b[i] = input.next()
			b1 = new BigInteger(input.next());
			b2 = new BigInteger(Integer.toString(a[i]));
			b3 = b1.multiply(b2);
			big = b3.max(big);
		}
		System.out.println(big);	
	}
}
}
