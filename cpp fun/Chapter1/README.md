# Chapter 1 Summary/Notes

	• Preprocessor directive == #include …
		○ Indicates to compiler that we want to use a method/function from a specific library or file.
	• Favour List initalization (narrowing conversion is restricted.)
		○ Int width {5} ; //direct list initial. 
		○ Int height = {6}; copy list initalization
		○ Int depth {}; value initalization
	• Initailize with {0} if variable needs to be 0
	• Initialize with {} if variable is temp and is updated immediately. (input for example)
	• [[maybe_unused]] (C++17) allows for unused variables without generating a warning.
	• Std::endl -> flushes the cout buffer and moves to next line. 
	• /n does not flush. (preferred)

INPUT/Output

	• Std::cout << the stuff you want displayed
	• Std::cin >> the variable to store the input. (uses a copy initial.)
  
 Thoughts:
 
 - Unsurprisingly, much of the basics of C++ inherits many of the syntax from C. 
 - However, I am surprised to learn that C++ common practice to use int height {5}) over the traditional int height = 5 when assignment values to a variable.

