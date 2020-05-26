using System;

namespace AdvancedCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            object obj = "Mosh";
            Console.WriteLine(obj.GetHashCode());

            dynamic excelObject = "mosh";
            Console.WriteLine(excelObject.Optimize());
            //excelObject.Optimize();

            Console.WriteLine("Hello World!");
        }
    }
}
