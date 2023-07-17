0x09-static_libraries
in creating this library
first your create the header files with their code
second your use the gcc -c *.c to gcc all files to object files
third create a library file using : ar rcs libmy.a
fourth push all .o file to the libmy.a by using the code ar rcs libmy.a *.o
you can text if it went well by typing ar -t libmy.a (name of the library file)
the add, commit and push
