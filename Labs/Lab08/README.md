# Lab 08

## Getting Started

Download the Windows-Template or MacLinux-Template file from Pilot.  This contains settings  
for programming in VS Code.  Extract the file to a directory of your choice (such as CEG2170).  
You will now have a folder named Template that contains:
* .vscode
* code.c
* Makefile

Folder structure:
* Create a folder named Lab08-Lastname.

In Visual Studio Code, go to File, Open Folder, and open the folder corresponding to which part of  
this lab your are working on.

Rename code.c if desired.  If you rename it, be sure to update the Makefile variable PROGNAME  
with the new name of your file.

To run from VS Code, use the shortcut `Ctrl + Shift + C` to open the Windows Command Terminal.  
The file path should be your project folder by default.

Type `make run` - this will compile and run your code file.  
If it fails, see the Troubleshooting Guide in [Setting Up Your Environment](https://github.com/pattonsgirl/Spring2020-CEG2170)

This link to [Structures in C](https://www.geeksforgeeks.org/structures-c/) and [Files in C](https://www.geeksforgeeks.org/basics-file-handling-c/) are good resources for this lab.

## My Manual DNS (Domain Name Server)
IPv4 internet addresses are of the form:
```
AAA.BBB.CCC.DDD
```
Where each letter represents a sectioned "subnet".  Computers also have an associated hostname.  
For fun, you can find out your computer's hostname by opening a terminal and typing `hostname`.  
You are going to write a program that with a series of functions that perform actions based on this data.  

### Goal Post 1 (25%):
Create a structure type called `address_t` that has four integers (A, B, C, and D respectively)  
and stores a hostname (string).  

Create a second structure called `dns_t` that will create an array of `25` `address_t` types. 

Below is a list of functions you will implement.  Your main function should allow a user to pick  
which function to perform - you can use a switch statement or if statements to implement the menu  
selection.  You program should continue asking the user for an action to perform unless a program  
termination condition is entered (such as `q` for quit).
```
Sample menu:
Welcome to the IPv4 lookup.  
s - scan a data file
h - find a hostname associated with an IP address
i - find an ip address associated with a hostname
p - print hostnames associated with a subnet
q - end program
```

### Goal Post 2 (25%):
`scan_file` - Read in from [`data.txt`](./data.txt), which contains a list of no more than 25 IP addresses and  
nicknames.  The ending / terminating line in `data.txt` wil be an address of `0.0.0.0` and a hostname  
of `none`.
```
Function protypes (recommendations):
void scan_file (dns_t *); //scan_file function that only populates a structure of type dns_t
OR
int scan_file (dns_t *); //scan_file function that populates a structure of type dns_t & returns an int
//Recommendation: return an int of how many valid lines you read so you don't search
//  through array elements that were not populated by valid data
```

### Goal Post 3 (25%):
`find_ip` - Print out the IP address based on a user given hostname.  If the hostname does not exist,  
it should print a message that states `Hostname not in data file`.  You may assume that no hostname  
will be repeated twice, so you do not need to continue searching one the first instance is found.

You may prompt the user for the hostname within the function OR within main and then pass the search  
value to the function.
```
Function protypes (recommendations) - you can pass a pointer if you want:
void find_ip (dns_t); //Only dns_t structure is input parameter - user is prompted for input in the function
OR
void find_ip (dns_t, char []); //User is prompted for input in main (or elsewhere)
OR 
void find_ip (dns_t, int); //dns_t structure is passed as well as valid data value to constrict search space
```

### Goal Post 4 (25%):
`find_hostname` - Print out the hostname based on a user given IP address.  If the IP does not exist,  
it should print a message that states `IP not in data file`.  You may assume that no IP will be repeated  
twice, so you do not need to continue searching one the first instance is found.

```
Function protypes (recommendations) - you can pass a pointer if you want:
void find_hostname (dns_t); //Only dns_t structure is input parameter - user is prompted for input in the function
OR
void find_hostname (dns_t, int, int, int, int); //User is prompted for input in main (or elsewhere)
OR 
void find_hostname (dns_t, int); //dns_t structure is passed as well as valid data value to constrict search space
```

### Sample execution:
```
Welcome to the IPv4 lookup.  
s - scan a data file
h - find a hostname associated with an IP address
i - find an ip address associated with a hostname
p - print hostnames associated with a subnet
q - end program
Pick something to do: s
Data scanned.
Pick something to do: i
Enter a hostname: bob
The hostname bob matches IP 130.108.14.1
Pick something to do: q
Goodbye!

```

## Extra Credit (10%):
`print_subnet_d_hosts` - Prints the hostnames that are on the same D subnet based on a given user  
subnet.  For the sample user input `110.115.25.0` this function should print all hostnames that start  
with `110.115.25`.  If none exist, prints a message that states `No hostnames on that subnet`.

## What to Submit
You should have a folder named Lab08-LastName.  
The folder should have at least the following:
* name_of_your_code.c  

Create a .zip file of your project folder (Lab08-LastName.zip)

Windows:
1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped). 
3. A new zipped folder will appear 
 
Mac & Linux:
1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress. 
3. A new zipped folder will appear 

Upload your .zip file to Pilot.