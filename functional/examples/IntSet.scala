object IntSet
{
  def main(args: List[String]) : Unit = 
  {
  
  }
}

// IntSet ABSTRACT CLASS
//==============================
abstract class IntSet {
  def incl    (x: Int): IntSet
  def contains(x: Int): Boolean
}

// Empty CLASS extends IntSet
//==============================
// class Empty extends IntSet{
// create a single empty tree
object Empty extends IntSet{
  def contains(x: Int): Boolean = false
  def incl    (x: Int): IntSet  = new NonEmpty(x, Empty, Empty)
}

// NonEmpty CLASS extends IntSet 
//==============================
class NonEmpty(elem: Int, left: IntSet, right: IntSet) extends IntSet {
  def contains(x: Int): Boolean = {
    if      (x < elem) left contains x
    else if (x > elem) right contains x
    else               true
  }
  def incl     (x: Int): IntSet = {
    if      (x < elem) new NonEmpty(elem, left incl x, right)
    else if (x > elem) new NonEmpty(elem, left       , right incl x)
    else               this
  }
}


