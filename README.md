# CLI_Tester
This will be a command line unit test tool.

## What I Want
I want this to be a very simple framework. Ideally it would be a single header file but I may include a .c file that must be built along side everything else. I want a nice looking list of tests and if they passed.

## Ideal Usage
1. Create a .c or .cpp file for your testing. Include this header file.
2. Create whatever unit tests you want using your classes / functions / objects.
3. In the main function, call some method from this framework that includes your argc and argv.
4. If you want the tests to run, compile your program and run it as such:
```
./{EXECUTABLE} --test
```
This will forgo anything in your main function after your call to the framwork function.
