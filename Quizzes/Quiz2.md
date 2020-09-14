# Quiz 2
## Logical Operators & If Statements

1. Decide if this statement would be True (1) or False (0)
```
!(5 < 8)
```
* 0, False
    * 5 is less than 8, but the ! (or not) sign in front flips the logical to make the true statement false, or 0

2. Decide if this statement would be True (1) or False (0)
```
'Y' == 'y'
```
* 0, False
    * Characters get translated to their numeric equivalents, so uppercase 'Y' has a different numeric code than lowercase 'y' which means they are not equivalent.

3. When I try to run my program it shows a list of warnings (such as missing semicolon).  What type of error do I have?

* Compilation error. (Syntax error was also accepted)
    * A compilation error will show warnings when I try to compile.  A logical error will compile and run, but have unexpected behavior.  A run time error will cause the program to crash one it is running.

4. Enter the output of the code:
```
int num = 5;
if (num > 10) {
    printf("My name is Sue");
}
else if (num <= 5 || num > 7) {
    printf("My name is Bob");
}
else {
    printf("My name is Joe");
}
```
* My name is Bob
    * 5 is greater than 10, so the first if statement will be skipped.  5 does meet the logic in the else if statement: 5 is equal to 5, 5 is not greater than 7, but they are linked with an OR (||) which means that if either or both sides are true, then the whole statement is true.

5. Add logic to the else if statement so that "My name is Bob" will print if num is between 2 and 8
```
if (num > 10) {
    printf("My name is Sue");
}
else if (____________) {
    printf("My name is Bob");
}
else {
    printf("My name is Joe");
}
```
* Acceptable answers:
```
2 <= num && num <= 8 
2 < num && num < 8
```
* Since num needs to be between 2 AND 8 we need to tie the logical operators together with &&.
