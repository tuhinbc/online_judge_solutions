/**
 * @(#)Main.java
 *
 * Main application
 *
 * @author 
 * @version 1.00 2012/9/17
 */
import java.math.BigInteger;
import java.util.*;
public class Main {
    
    public static void main(String[] args) {
    	
    	Scanner sc=new Scanner(System.in);
    	BigInteger bg=BigInteger.valueOf(0);
    	BigInteger sum=BigInteger.valueOf(0);
    	
 
    	while(true)
    	{
    		bg=sc.nextBigInteger();
    		if(bg.compareTo(BigInteger.ZERO)==0) break;
    			
    		sum=sum.add(bg);    		
    	}
    	System.out.println(sum);
    	
    }
}
