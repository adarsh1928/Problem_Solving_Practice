using Internal;
using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
      Console.WriteLine("Enter The Number");
        int num=Convert.ToInt32(Console.ReadLine());
         
        for(int i=num;i<=num+20;i++){
             Console.Write(i);
             Console.Write(" ");
        }
        Console.WriteLine();
         Console.WriteLine(" Numbers After Operation :");

         for(int i=num;i<=num+20;i++){
           if(i%2==0)  Console.Write(i*4);
           else Console.Write(i*3);
             Console.Write(" ");
        }
    }
}