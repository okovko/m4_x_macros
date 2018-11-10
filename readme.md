# m4 X macros

Generate X Macros for your C header files using x_macros.m4. Static asserts to
check the generated X Macros for basic validity are also generated.

Usage: x_macros.m4 -D input_file=header.h > header.x.h

x_macros.m4 is convenient to invoke from a text editor, or from a makefile. You
can run the C preprocessor on the input file first if you use macros to declare
structs.

The output looks like this:

    #define X_name8_s \
    int field1; \
    int* field2; \
    int** field3; \
    int*** field4; \
    struct name9_s var5;


    _Static_assert(sizeof(name8_s) == sizeof(
    struct {
    int field1;
    int* field2;
    int** field3;
    int*** field4;
    struct name9_s var5;
    }), "invalid xmacro for name8_s generated by x_macros.m4");

Currently, rarely used features like anonymous structs and nested struct
declarations are not implemented, and the asserts will fail in those cases most
of the time.

Soon to be implemented is support for anonymous structs and nested struct
declarations, along with better more thorough and portable asserts.
