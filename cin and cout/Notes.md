Variable is a container which is used to store data in RAM.

File is a container which is used to store data in HDD.

Stream is an abstraction(object), which either produce( write) or consume(read) inform from source to destination

<!-- In C, Standard stream objects: -->

<!-- stdin -->

<!-- Standard input stream associated with keyboard which is used to read data. -->

scanf("%d", &number);

//same as
fscanf( stdin, "%d", &number );

<!-- stdout -->

<!-- Standard output stream associated with monitor which is used write data. -->

printf("%d", number);

//same as
fprintf(stdout, "%d", number);

<!-- stderr -->

Standard output stream associated with monitor which is used write error.

fprintf(stderr, "Array index out of bounds.");

<!-- std is a standard namespace of C++ which is declared in header file. -->

cin, cout are external objects declared in std namespace. Hence to use it we should
use std::cin, std::cout.

<!-- Character Output( cout ) -->

typedef basic_ostream<char> ostream;

As shown above, ostream is alias / another name given to the basic_ostream class.

cout is object of ostream class. It is external object declared in std namespace.

It represents monitor which is used to write data on monitor.

<!-- "<<" operator is called as insertion operator. -->

In C language, escape sequence is a character which is used to format the output.
Example: '\n', '\t', '\r' etc.

In C++ language, manipulator is a function which is used to format the output.

Example: endl.




<!-- Character Input( cin ) -->


<!-- typedef basic_istream<char> istream; -->

As shown above, istream is another name given to the basic_istream class.

cin is object of istream class. It is external object declared in std namespace.

It represents keyboard which is used to read data from keyboard.



<!-- ">>" operator is called as extraction operator -->



