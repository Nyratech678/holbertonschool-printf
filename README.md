<Create a function that imitates printf>

					📝 Description

This project involves the implementation of a custom C function named _printf, which mimics the behavior of the standard printf function. The purpose of this project is to gain a deep understanding of how printf works by recreating its essential functionalities, particularly handling basic conversion specifiers.

Key features include handling conversion specifiers for characters (%c), strings (%s), integers (%d, %i), and the percentage character (%%).

					📦 Installation

To install and use this project locally, follow the steps below.

Prerequisites
A Linux development environment (Ubuntu 20.04 LTS recommended).

GCC compiler.

Dependencies
This project uses the following standard functions and macros:

	 malloc (man 2 write)

	free (man 3 free)

	va_start (man 3 va_start)

	va_end (man 3 va_end)

	va_copy (man 3 va_copy)

	va_arg (man 3 va_arg)


Installation Commands
Clone the repository:

	git clone https://github.com/Nyratech678/holbertonschool-printf.git

Navigate into the project directory:

	cd holbertonschool-printf

Compile the project:
This project is compiled with gcc using the options -Wall -Werror -Wextra -pedantic -std=gnu89. A Makefile is usually used to automate this process. If not, you will need to manually compile your source files with the specified options.
Example compilation (if you have a test main.c):

	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c

Or for a simple executable:

	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c _printf.c -o _printf_test

					 🚀 Usage

Here's how to use your _printf function in your own C projects.

Function Prototype
int _printf(const char *format, ...);

Usage Examples
To use _printf, include the main.h header file and link your program with your compiled files.

<img width="350" height="412" alt="Example_main" src="https://github.com/user-attachments/assets/82ecca06-c2dc-44e4-b488-e6882b6f467a" />
<img width="389" height="412" alt="Example_out" src="https://github.com/user-attachments/assets/324a247d-ef56-4d34-8565-1cb3a5490994" />

  					 🧪 Tests

Tests are crucial to ensure the correct functionality of _printf.

Tools Used
GCC for compilation.

Betty style checker scripts (betty-style.pl and betty-doc.pl) for code style compliance.

Instructions for Running Tests
Although a test main.c file might be provided, it should not be included in the final repository. To test your implementation, our own main.c files will be used during compilation. Ensure your _printf function adheres to the defined prototype and correctly handles the required conversion specifiers.

You can run the Betty style checkers as follows (make sure you have the scripts at the root of your project):

	betty-style.pl *.c
	betty-doc.pl *.c

				   📁 Project Structure

Here is the directory and main file structure for this project:
				 
	 .
	 ├── main.h             # Header file containing all function prototypes.
	 ├── _printf.c          # Implementation of the _printf function and helper functions.
	 ├── man_3_printf       # Man page file for _printf.
	 ├── README.md          # This README file.
	 └── ...                # Other source files (.c) for helper functions if necessary.


				    📚 Documentation

A man page is available for the _printf function. You can view it by using the terminal command :

   man ./man_3_printf
 
				    🙋‍♂️ Contributors

https://github.com/Nyratech678

					💬 Contact
										
For any questions or feedback, you can reach the project maintainers via:

GitHub Issues: Open an issue on this repository.

Email: 11507@holbertonschool.com
