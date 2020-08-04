#To change mingw32-make to only be the command make
#	Use File Explorer to browse to C:\MinGW\bin
#	Make a copy of mingw32-make.exe, and call it make
#	Note: keep it in the same folder, C:\MinGW\bin
#	Now you can run "run" and "clean" by typing 
#	"make run" and "make clean"

#PROGNAME is a variable that need to be changed to the name of your
#	program.  So if I have a code file named code.c
#	the PROGNAME variable needs to be code.c
#	The rest of this "script" will plug the variable in appropriately
#	To reference your code file
PROGNAME = code.c
#EXENAME is the name of the executable file to run your code
#   IF YOU CHANGE THIS, also change this line in launch.json
#	"program": "${workspaceFolder}/program.exe"
#	else the debugger will throw an error
EXENAME = program.exe

#This creates the executable file (what you use to run your code)
#	Essentially, it uses a command to use the MinGW compiler to 
#	compile our program
${EXENAME}: ${PROGNAME}
	c:/MinGW/bin/gcc -Wall -o ${EXENAME} ${PROGNAME}

#run is being defined here as a command we can use.
#	In the terminal, we can now type mingw32-make run to run our program
run: ${EXENAME}
	.\${EXENAME}

#clean is being defined here as a command we can use
#	In the terminal, we can type mingw-make clean to delete the exectuable file
clean:
	del /Q ${EXENAME}
