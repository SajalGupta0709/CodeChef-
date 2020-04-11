/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{   public static int Prec(char ch) 
    { 
        switch (ch) 
        { 
        case '+': 
        case '-': 
            return 1; 
       
        case '*': 
        case '/': 
            return 2; 
       
        case '^': 
            return 3; 
        } 
        return -1;
    } 
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
		    int n=sc.nextInt();
		    String exp=sc.next();
		    String result ="";
        Stack<Character> stack = new Stack<>(); 
          
        for (int i = 0; i<exp.length(); ++i) 
        { 
            char c = exp.charAt(i);  
            if (Character.isLetterOrDigit(c)) 
                result += c; 
            else if (c == '(') 
                stack.push(c); 
            else if (c == ')') 
            { 
                while (!stack.isEmpty() && stack.peek() != '(') 
                    result += stack.pop(); 
                stack.pop(); 
            } 
            else
            { 
                while (!stack.isEmpty() && Prec(c) <= Prec(stack.peek())) 
                    result += stack.pop(); 
              
               stack.push(c); 
            } 
       
        } 
        while (!stack.isEmpty())
            result += stack.pop(); 
        System.out.println(result); 
		    
		}
		
	}
}
