
<!-- Destructor -->

Destructor is a member function of the class which is used to release the resources hold by the object.

Destructor do not deallocate memory of object.

Destructor is considered as special function of the class due to following reasons:

Its name is same as class name which precedes with tild( ~ ) operator.

It doesnt take any parameter or return any value.

It is designed to call implicitly.

If we do not provide destructor for the class then compiler provide one destructor for the class by
deafult. It is called default destructor.

Destructor calling sequence is exactly opposite of constructor calling sequence.

We can not declare destructor static/const.

We can overload constructor but we can not overload destructor.




<!-- Why we can not overload destructor? -->

To overload function, either number parameters / type parameters or order of type of parameters must be different.

But destructor do not take any parameter. Hence we can not overload destructor.
