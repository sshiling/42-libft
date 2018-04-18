# libft
### Implementation of some of the Standard C Library functions

Libft is the first project in the study program at School 42 (UNIT Factory).
The purpose of the project is to introduce to students standard C functions that we will be able to use in our future projects.
To give a deeper understanding of functions we needed to create our own realization of standard functions.

All functions are created in accordance with Norm - the bunch of rules how code should be formatted.

#### The project consists of 3 main logical parts:
* Standart Libc functions
* Additional functions
* Bonus part functions

In bonus part, there are functions proposed in the task and some personal functions that I decided to create.

#### How to compile library:

Using Makefile you can create library file libft.a<br/>
Makefile has 4 main options:<br/>
* **make** - to compile C files - create object files and library libft.a<br/>
* **make clean** - to remove object files<br/>
* **make fclean** - remove libft.a file<br/>
* **make re** - recompile the library<br/>

#### Short description of each function:

##### Main part

| Function      | Description                                                                           |
| ------------- | --------------------------------------------------------------------------------------| 
| memset | fill a byte string with a byte value |
| bzero | write zeroes to a byte string |
| memcpy | copy memory area |
| memmove | copy byte string |
| memchr | locate byte in byte string |
| memcmp | compare byte string |
| strlen | find length of string |
| strdup | save a copy of a string |
| strcpy | copy strings |
| strncpy | copy strings size of n |
| strcat | concatenate strings |
| strncat | concatenate n symbols of one string to another |
| strlcat | size-bounded string copying and concatenation |
| strchr | locate character in string |
| strrchr | locate character in string |
| strstr | locate a substring in a string |
| strnstr | locate a substring in a string |
| strncmp | compare strings |
| atoi | convert ASCII string to integer |
| isalpha | alphabetic character test |
| isdigit | decimal-digit character test |
| isalnum | alphanumeric character test |
| isascii | test for ASCII character |
| isprint | printing character test (space character inclusive) |
| toupper | lower case to upper case letter conversion |
| tolower | upper case to lower case letter conversion |

##### Additional functions

| Function      | Description                                                                           |
| ------------- | --------------------------------------------------------------------------------------| 
| ft_memalloc   | allocates (with malloc(3)) and returns a “fresh” memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL |
| ft_memdel     | takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL |
| ft_strnew     | allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. Each character of the string is initialized at ’\0’. If the allocation fails the function returns NULL |
| ft_strdel     | takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL |
| ft_strclr     | sets every character of the string to the value ’\0’ |
| ft_striter    | applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary |
