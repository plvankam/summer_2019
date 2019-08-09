ass Base
{
    public:
            virtual ~Base() = 0;
                virtual void method();
};

Base::~Base()
{
  // Compulsory virtual destructor definition,
  // even if it's empty
  }

  void Base::method()
  {
    // Default implementation.
      // Derived classes can just inherit it, if needed
      }

      // We can now derive from Base, inheriting the
      // implementation of method()
      //
      class Derived : public Base
      {
      public:
          ~Derived()
              {}
              };

