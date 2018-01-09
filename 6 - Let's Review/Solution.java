import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
       Scanner in=new Scanner(System.in);
       int n=in.nextInt();
       in.nextLine();
       String str[]=new String[n];
       for(int i=0;i<n;i++)
       {
           str[i]=in.nextLine();
           
       }
      
       int k=0;
       for(k=0;k<n;k++)
       {
            String a=" ",b=" ";
     for(int i=0;i<str[k].length();i++)
     {
         if(i%2==0)
         {
             b=b+str[k].charAt(i);
            
         }
        else
        {
            a=a+str[k].charAt(i);
        }
        
     }
     System.out.println(b+""+a);
     
       }
       System.out.println();
    

    }
}
