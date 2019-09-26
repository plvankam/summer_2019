object Fib 
{

   //============================== 
   // FIB()
   //
   def fib(n: Int) : Int = 
   {
     // --
     // fib.go
     def go(counter: Int , x: Int, y: Int) : Int = 
     {
       counter match{
               case 0   => x + y
               case _   => go(counter - 1, y, x + y)
               }
     }

     if      (0 == n) 0
     else if (1 == n) 1
     else             go(n - 2, 0, 1)
    }

    //============================== 
    // FACTORIAL()
    //
    def factorial(num: Int) : Int = 
    {
     // --
     // factorial.go()
     def go(num: Int, acc: Int) : Int = 
     {
       if(0 == num) acc
       else         go(num - 1, num * acc)
     }
     go(num,1)
    }

    //============================== 
    // ABS()
    //
    def abs(x: Int) : Int = { if(x < 0) -x else x}

    //============================== 
    // FORMAT 
    //
    private def format(str: String, x: Int, f: (Int) => Int)  = 
    {
      "%s %12d ==> %12d".format(str,x,f(x))
    }

    //============================== 
    // TEST()
    //
    def test(num: Int) : Unit = 
    {
        val factorial_str    = "Factorial      "
        val absolute_val_str = "Absolute value "
        for(x <- 0 to num)
        {
          println("==============================================")
          println(format(factorial_str    , x,factorial))
          println(format(absolute_val_str , x,abs))
        }
    }

   
    //============================== 
    // MAIN()
    //============================== 
    def main(args: Array[String])
    {
        test(args(0).toInt)
    }

}

