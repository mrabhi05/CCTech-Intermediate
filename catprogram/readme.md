# Test Cases for Cat Command
Motivation
To implement 'cat' command 


Test Cases

1. When no input arg is given, reads and prints the input
2. If no directory, prints no directory
3. If the input arg is a directory, then prints "Is a directory"
4. If multiple files are given then concatenate all file content/error


# Obj ective
To perform a Golden master testing on unix
2.
3.
4.
5.
6.
7.
# Test cases
1. When no arguments provided, then it EOF is read by the program, then it read will cat command. the inputs from terminal (stdin) and print them right away, exit without printing any new line to tel untill 
Single argument then single argument is provided, If an argument is directory, 
    >> cat DirectoryName
    then
    then
    check if it Directory of fileName
print out "DirectoryName/: Is a directory" .
cat: DirectoryName/: Is a directory
If file is present, Print contents of file to terminal
>> cat file
If file is absent, then show error msg in terminal .
cat: Hi: No such" file or directory
ultiple arguments
When multiple arguments are provided, then concatenate the contents of file in a sequence.
if file is missing, then throw an error for the file which is not present
When one of the argument is a directory, show msg "cat: DirectoryName/: Is a directory" in the sequence.

