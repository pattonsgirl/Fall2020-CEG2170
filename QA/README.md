1. Format for a function (whether it’s main, or a [side?] function ßwhat are those other functions besides main called, and are there any distinguishing characteristics that make main different from the other functions in the program, besides usually being the first listed function in the program?)

- main and any other functions are just functions. If main does not exist, there is no "driver" function to make actions happen. main defines actions to be done in the program. It can call other functions, statements, logic, to make that happen. Our main returns something - a success code. We could write a main that does not:

```
void main (void)
```

- By putting void, we are saying nothing is going here - in the case of parameters, main can't take a parameter ie. nothing like this can happen:
  - ./program 52 - where I run the program and send it something from the command line (not the same as getting text with scanf)
- In the case of return values, the program doesn't return anything - no status codes, no fancy red highlighting if we terminate due to an error. Things could still go wrong while our code is running, but not things dictated by error catching logic.

```
Return_type function_name (data_type)
```

2. Return_type -- is often marked as void in our examples, I think that means that the compiler should not expect a return, but what does this mean? To me, sounds like when a statement is marked with a void return type, it wouldn’t return a value at all, or void is so generic that it could return anything, if it’s the latter, then why is the global variable return types usually set to void and the main body return type usually set to “int” and then a slew of body statements that are not integers able to be returned in our program? Is it because of the very last “return 0” line? Is that the “int” in the return type that we write?

- void is not generic, she can't return something if we change our mind. We would have to provide a return type. Return types pass back a value (not to be confused with using an address to change the value at that address). Global variables shouldn't be used to store returned values. Rather in the function you would set the value of the global variable based on your logic - it would be stored globally for any function to use the value.

- In terms of main, int returns a success code (not visible to us, like we can't see the "parent" function that cares about the return value).

- Other functions can return integers, we could logically write code that could use those to pass back a result of a calculation, perhaps the result of some true / false logic (1 / 0), or if a function had an error - think of how we can detect if a file opened or not - we could put that logic to check in a function, and have it return 1 if the file opened successfully or 0 if it did not, then we could let main know a result and have logic in main to decide what to do about it.

- If we do return something (ie. something besides void is in front of the function name), we must have a return statement. That return can be used at any point in the function logic to pass control back to the function that called it (which has frequently been main). If the return type is an int, when we return, we will only pass back an int (if you accidently tried a double or float, the value would be truncated).

3. (daya_type) – So seems like this is based on the return type, but why sometimes do we have a return type of void and a data type of int or double and it checks out by the compiler? Why do we sometimes list parameter names here and sometimes not. This is used to pass parameters to a function when it’s written in the section where those parameters are defined right?

- Replace "data_type" with parameters, and the logic should start to click. Parameters have data types. We can send functions things. These things are defined by a parameter list.

- In the prototype we haven't given them names to use in the function - you could, but the names defined in the prototype would have to match the names used when you write out the function. Example:

```
void my_func (int, int); //names are flexible when I write my function
void my_func (int num1, int num2) {
//I got to name them anything, now I can use those names in my function
}

void my_func (int hippo, int dino); //because I named them here, I must use those names in my function
void my_func (int hippo, int dino) {
//because named in prototype, I must use hippo & dino as my names
}
```

4. Basically, I feel like I’m asking the same question multiple times in different way, hopefully your wisdom can decipher my confusing word abstract, but why do we sometimes list void as a return type and sometimes not, and why do we list parameter names in the data type and sometimes not? Does that depend on the area in which you’re listing these (global, main, function, etc?)

- If you create a global, you can access it anywhere - you don't need to send it as a parameter OR use a return type to change its value, you just change it. By being global, everything can use it by name.

```
void changing_global (void);
int my_global = 0;

int main (void){
my_global = 5;
//note that I'm not "sending" global via parameters or saving a returned value
changing_global();
 return 0;
}

void changing_global (void){
my_global = 10;
}
```
