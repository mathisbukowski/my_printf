
# my_printf

The my_printf project is a first-year project at Epitech. It involves recoding printf from its man (man 3 printf).

## How to use it

### If you want to use my_printf there are a few steps to follow. 

1. Clone the project

```bash
  git clone https://github.com/EpitechPromo2028/B-CPE-101-LIL-1-1-myprintf-mathis.bukowski.git my_printf
```

2. Go to the project directory

```bash
  cd my_printf
```
3. Compile the library

```bash
  make
```
If the compilation of the lib is completed, you have to find a libmy.a in the root of your folder.
4. Use the library
```c
    int main(void)
    {
        my_printf("Hi, you actually use the my_printf :)");
    }
```
5. To compile and obtain a result
```bash
    gcc main.c -L./ -lmy
```
## Specifiers


| Specifier | Type            | Description                                                                          |
|:----------|:----------------|:-------------------------------------------------------------------------------------|
| `%i/%d`   | `int`           | Print a number in the console                                                        |
| `%s`      | `char *`        | Print a string in the console                                                        |
| `%c`      | `unsigned long` | Print a simple character in the console                                              |
| `%o`      | `int`           | Convert and print a number in octal base                                             |
| `%e/%E`   | `double`        | The argument is rounded and converted in the style ***d.ddde±dd*** / ***d.dddE±dd*** |
| `%f/%F`   | `double`        | The argument is rounded and converted to decimal notation                            |
| `%g/%G`   | `double`        | The argument is converted in style %f/%F or %e/%E                                    |
| `%u`      | `unsigned int`  | The argument is converted in a unsigned decimal                                      |
| `%x/%X`   | `unsigned int`  | The argument is converted in a unsigned hexadecimal                                  |
| `%p`      | `void *`        | The  pointer argument is printed in hexadecimal                                      |
| `%%`      | `none`          | A '%' is written. No argument is converted.                                          |


## Some exemples of use 

```c
    int main(void) {
        int count = 54;
        char *word = "Hello World !";
        my_printf("%d \n", 1565);
        my_printf("%d \n", -1565);
        my_printf("%i \n", 1565);
        my_printf("%i \n", -1565);
        my_printf("WoRLD %s \n", "HELLO");
        my_printf("WoRLD %s \n", "H");
        my_printf("WoRLD %s \n", "  ");
        my_printf("%c \n", 'j');
        my_printf("%c \n", '5');
        my_printf("%o \n", 1565);
        my_printf("%o \n", 10);
        my_printf("%X \n", 1565);
        my_printf("%X \n", 16);
        my_printf("%x \n", 1565);
        my_printf("%x \n", 16);
        my_printf("%u \n", 1515151165);
        my_printf("%u \n", -1515151165);
        my_printf("%f \n", 155.551);
        my_printf("%f \n", -0.22535);
        my_printf("%f \n", 155.00000551);
        my_printf("%F \n", 155.551);
        my_printf("%F \n", -0.22535);
        my_printf("%F \n", 155.00000541);
        my_printf("%p \n", &count);
        my_printf("%p \n", &word);
        my_printf("%% \n");
        my_printf("%%a \n");
        my_printf("%%d \n");
        my_printf("%e \n", 1565.0);
        my_printf("%E \n", 1565.0);
        my_printf("%g \n \n", 1565.0);
    }
```
## If you want to edit it

You can edit the source-code of my_printf. For compile it again, you can create a main.c file in the src folder and run the lib again with 
```bash
    make re
```
For compile it, you can at the root of the folder : 
```bash
    gcc main.c -L./ -lmy
```
And run the binary : 
```bash
    ./a.out
```
