<!-- Why static member function do not get this pointer? -->

If we call non static member function on object then non static member function get this pointer.

Static member function is designed to call on class name.

Since static member function is not designed to call on object, it does not get this pointer


<!-- Can we declare static member function constant? -->

If we dont want to modify state on only current object inside member function then we should declare that member function constant. In other words, constant member functions are designed to call on object.

Static member function is designed to call on class name.

Since static member function is not designed to call on object, we can not declare static member function constant.



<!-- We can not declare below functions static: -->

1. constructor
2. destructor
3. constant member function
4. main function ( other global functions can be static )
