object session
{

  def abs(num: Double) : Double = 
  {
    if (num >= 0) num else -num
  }

  def sqrtIter(guess: Double, x: Double) : Double =
  {
    if(isGoodEnough(guess, x)) guess
    else                       sqrtIter(improve(guess, x), x)
  }

  def isGoodEnough(guess: Double, x: Double) : Boolean = 
  {
    val acceptable_error = 0.01
    abs((guess * guess) - x) < acceptable_error 
  }
  def improve(guess: Double, x: Double) : Double = 
  {
    (guess + (x / guess)) / 2.0 
  }
  def sqrt(x: Double) : Double = 
  {
    sqrtIter(1.0, x)
  }

  sqrt(2)

}
