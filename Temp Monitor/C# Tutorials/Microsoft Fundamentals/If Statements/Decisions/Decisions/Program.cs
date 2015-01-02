using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decisions
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Pick a number between one and three.");
            string userValue;
            userValue = Console.ReadLine();
            if (userValue == "1")
            {
                Console.WriteLine("Incorrect");
                Console.ReadLine();
            }
            else if (userValue == "2")
            {
                Console.WriteLine("Incorrect");
                Console.ReadLine();
            }
            else if (userValue == "3")
            {
                Console.WriteLine("Well done. You have a good taste in numbers.");
                Console.ReadLine();
            }
            else
            {
                Console.WriteLine("You really thought I wouldn't have prepared for this? You underestimated me.");
                Console.ReadLine();
            }
        }
    }
}
