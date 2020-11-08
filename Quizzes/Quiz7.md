# Quiz 7

1. strcpy is a function that returns how many characters are in a character array.

   - False. The correct answer is strlen

2. Libraries, prototypes, and structure definitions can be placed in a header file to clean up source code.

   - True

3. Initialize a string array called dogs that has the following values: great dane, corgi, shepard.  Use a max string size of your choice, but it should hold at minimum the dog breed name.

   - char dogs[3][15] = {"great dane", "corgi", "shepard"};

4. What special character notation goes at the end of a character array so that functions like printf know when to stop printing array characters?

   - `/0`

5. Write a structure called bike_t that would store the following: the model name of bicycle, the number of wheels, the number of pedals, and a double size of the wheels.

```
typdef struct {
    char model [20];
    int wheels, pedals;
    double wheel_size;
} bike_t;
```

6. I have a variable student of type student_t with the following variables: name, uid, and gpa. How do I put a gpa value of 3.4 in student?
   - student.gpa = 3.4;
