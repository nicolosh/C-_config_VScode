# Basic VScode C++ Configuration

This repository can be used as template when creating a new repository here on GitHub. Students are encouraged to create personal private repositories where they will keep their exercises, tests and assignements.

By default it contains two example folders `cd Projects\hello` and `cd Projects\prime` with sample code. New projects/exercises will be put into new folders. 

Compilation is performed in a per-folder basis: to compile one of the folders like `hello`, open any of the C++ files inserted in it and launch the task `BUILD`. A binary file `main.exe` will be put into the folder if the build is successfull.  
The task `BUILD and RUN` will compile and then run the program. This is the default build task and can be accessed with a default keyboard binding (`CRTL + SHIFT + B` on Windows).

Or better:
open the terminal (`CTRL + ò`) on PC Windows, move the path to the folder where the executed file is such `cd hello` if you are not already inside it.  
Then write `g++ filename.cpp -o whateverName` and the build is done (if you have more files like in the `cd prime` folder remember to put all the cpp and header files in the same folder (`prime`): in this case you need to put `g++ prime.cpp main.cpp -o whateverName` to make the build successfull).  

`whateverName` is the name of the executable (can be anything).  

Finally, just type (on `Windows`) `./whateverName` to run the program  

[Tests](https://github.com/nicolosh/Cpp_config_VScode/tree/main/tests) folder included to run tests.


