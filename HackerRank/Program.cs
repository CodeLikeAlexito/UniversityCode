using System;

namespace HackerRank
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            int[] arr = new int[]{ 1, 2, 3 };
            int result = simpleArraySum(arr);

            long[] longArr = new long[]{ 1000000001, 1000000002, 1000000003, 1000000004, 1000000005 };
            long sum = aVeryBigSum(longArr);
            Console.WriteLine($"The long sum is: {sum}");
            Console.WriteLine(result);
        }

        // Complete the aVeryBigSum function below.
        static long aVeryBigSum(long[] ar) {
            long sum = 0;

            foreach(var item in ar)
                sum += item;

            return sum;

        }

        /*
        * Complete the simpleArraySum function below.
        * Function should sum the elements of and integer array.
        */
        static int simpleArraySum(int[] ar)
        {
            /*
            * Write your code here.
            */
            int sum = 0;
            foreach(var item in ar)
                sum += item;

            return sum;
        }
    }
}
