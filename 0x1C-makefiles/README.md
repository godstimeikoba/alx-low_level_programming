# 0x1C. C - Makefiles

## About

An introductory project on:

- Makefiles and how to use them
- Explicit and implicit rules
- Setting variables

## Requirements

- Ubuntu 14.04
- gcc 4.8.4
- GNU Make 3.81
- Source files for all Makefiles: [main.c](main.c), [holberton.c](holberton.c), [m.h](m.h)

## File Description

### Mandatory

**[0-Makefile](0-Makefile)**

- Requirements:
  - name of the executable: `holberton`
  - rules: `all`
    - `all`: builds your executable
  - variables: none

**[1-Makefile](1-Makefile)**

- Requirements:
  - name of the executable: `holberton`
  - rules: `all`
    - `all`: builds your executable
  - variables: `CC`, `SRC`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files

**[2-Makefile](2-Makefile)**

- Requirements:
  - name of the executable: `holberton`
  - rules: `all`
    - `all`: builds your executable
  - variables: `CC`, `SRC`, `OBJ`, `NAME`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
  - The `all` rule should recompile only the updated source files
  - You are not allowed to have a list of all the `.o` files

**[3-Makefile](3-Makefile)**

- Requirements:
  - name of the executable: `holberton`
  - rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - `all`: builds your executable
    - `clean`: deletes all Emacs and Vim temporary files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
  - variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the command to delete files
  - The `all` rule should recompile only the updated source files
  - You are not allowed to have a list of all the `.o` files
  - The `clean`, `oclean`, `fclean`, and `re` rules should never fail

**[4-Makefile](4-Makefile)**

- Requirements:
  - name of the executable: `holberton`
  - rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - `all`: builds your executable
    - `clean`: deletes all Emacs and Vim temporary files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
  - variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the command to delete files
    - `CFLAGS`: compiler flags `-Wall -Werror -Wextra -pedantic`
  - The `all` rule should recompile only the updated source files
  - You are not allowed to have a list of all the `.o` files
  - The `clean`, `oclean`, `fclean`, and `re` rules should never fail

### Advanced

**[100-Makefile](100-Makefile)**

- Requirements:
  - name of the executable: `holberton`
  - rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - `all`: builds your executable
    - `clean`: deletes all Emacs and Vim temporary files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
  - variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the command to delete files
    - `CFLAGS`: compiler flags `-Wall -Werror -Wextra -pedantic`
  - The `all` rule should recompile only the updated source files
  - You are not allowed to have a list of all the `.o` files
  - The `clean`, `oclean`, `fclean`, and `re` rules should never fail
  - You have to use `$(RM)` for the cleaning up rules, but you are not allowed to set the `RM` variable
  - You are only allowed to use the string `$(CC)` once in your Makefile
  - You are only allowed to use the string `$(RM)` twice in your Makefile
  - You are not allowed to use the string `$(CFLAGS)` (but the compiler should still use the flags you set in this variable)
  - You are not allowed to have an `$(OBJ)` rule
  - You are not allowed to use the `%.o: %.c` rule
  - Your Makefile should work even if there is a file in the folder that has the same name as one of your rules
  - Your Makefile should not compile if the header file `m.h` is missing

<details>
<summary>For more info check here</summary>
<br>
# C - Makefiles

In this project, I practiced writing Makefiles.

## Tests :heavy_check_mark:

- [tests](./tests): Folder of test files.

## Helper Files :raised_hands:

- [school.c](./school.c): C function that displays a seahorse in text.
  Used for Makefile practice purposes throughout project.

- [main.c](./main.c): Main C function that runs the function defined in
  [school.c](./school.c).

## Header File :file_folder:

- [m.h](./m.h): Header file defining the function prototype used in `school.c`.

## Tasks :page_with_curl:

- **0. make -f 0-Makefile**

  - [0-Makefile](./0-Makefile): Makefile that creates an executable `school` based on
    [school.c](./school.c) and [main.c](./main.c). Includes:
    - Rule `all` that builds the executable.

- **1. make -f 1-Makefile**

  - [1-Makefile](./1-Makefile): Makefile that creates an executable `school` based on
    [school.c](./school.c) and [main.c](./main.c). Builds on [0-Makefile](./0-Makefile)
    with:
    - Variable `CC` that defines the compiler to be used.
    - Variable `SRC` that defines the `.c` files to compile.
    - The `all` rule only recompiles updated source files.

- **2. make -f 2-Makefile**

  - [2-Makefile](./2-Makefile): Makefile that creates an executable `school` based on
    [school.c](./school.c) and [main.c](./main.c). Builds on [1-Makefile](./1-Makefile)
    with:
    - Variable `OBJ` that defines the `.o` files to compile.
    - Variable `NAME` that defines the name of the executable.

- **3. make -f 3-Makefile**

  - [3-Makefile](./3-Makefile): Makefile that creates an executable `school` based on
    [school.c](./school.c) and [main.c](./main.c). Builds on [2-Makefile](./2-Makefile)
    with:
    - Rule `clean` that deletes all Emacs/Vim temporary files as well as the
      executable.
    - Rule `oclean` that deletes the object files.
    - Rule `fclean` that deltes all of the temporary files, executable, and
      object files.
    - Rule `re` that forces recompilation of all source files.
    - Variable `RM` that defines the command to delete files.

- **4. A complete Makefile**

  - [4-Makefile](./4-Makefile): Makefile that creates an executable `school` based on
    [school.c](./school.c) and [main.c](./main.c). Builds on [3-Makefile](./3-Makefile)
    with:
    - Variable `CFLAGS` that defines the compiler flags `-Wall -Werror -Wextra -pedantic`.

- **5. Island Perimeter**

  - [5-island_perimeter.py](./5-island_perimeter.py): Python function that returns the
    perimeter of an island defined in a grid.
  - Prototype: `def island_perimeter(grid):`
  - The parameter `grid` is a list of a list of integers.
    - Water is represented by `0`.
    - Land is represented by `1`.
    - Each element of the lists represents a cell square of side length 1.
    - Grid cells are connected horizontally/verticaly (not diagonally).
    - The grid is rectangular, with a width and height not exceeding 100.
    - The grid is completely surrounded by water, and there is either exactly
      one island or nothing.
    - The island does not contain lakes (water inside disconnected from
      surrounding land).

- **6. make -f 100-Makefile**
  - [100-Makefile](./100-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [4-Makefile](./4-Makefile)
  with:
  _ Does not define the variable `RM`.
  _ Never uses the string `$(CFLAGS)`.
  _ Does not compile if the header `m.h` is missing.
  _ Works even if there are existing files of the same name as any of the
  Makefile rules in the current directory.
  </details>
