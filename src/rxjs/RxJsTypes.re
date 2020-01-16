type t('a);
type observer('a);
type observable('a);
/* https://en.wikipedia.org/wiki/Unary_function
   A unary function is a function that takes one argument. Here the arg is tuple of `('a,'b)`
   */
type unaryFunction('a, 'b) = 'a => 'b;
/* takes to args which are then passed as a tuple to a function of unaryFunction type */
type operatorFunction('a, 'b) =
  unaryFunction(observable('a), observable('b));

type subscription;
type document;
