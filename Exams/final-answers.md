## Written Response

1. Describe linear search. You may use code as a reference, but there must be a description accompanying the code.

   - In a linear search, each value is analyzed to see if it matches the search parameters. You could create a loop to go through each value. At each value, you would use an if statement to see if a match was found.

2. What is the advantage of dynamic memory over memory on the stack?

   - Dynamic memory can be resized and free'd during execution of the program. Memory created on the stack is only released once the program is over.

3. Describe the process to add a node to the end of a linked list. You may use code as a reference, but there must be a description accompanying the code.

   - Step 1: Loop through the list until you are at the last node (the one that has NULL stored in its `next` value)
   - Step 2: Create the new node. Store data in it (if needed).
   - Step 3: Have the last node in the list's `next` value point to the new node
   - Step 4: Have the new node's `next` value point to NULL

4. What is the difference between using \* and &? You may use code as a reference, but there must be a description accompanying the code.

   - \* is a data type specification that the variable will be used to store and address of the given type.
   - & is used to return the address of the variable.

5. What is difference between using && and || when comparing statements? You may use code as a reference, but there must be a description accompanying the code.

   - Using && means both statements must be true. Using || means both or either statements must be true.

## Code & Code Statements

1. Write code that will compare strings stored in planet_mars.name and user_input. If the values are equal, print out "Match!"

```
if(strcmp(planet_mars.name, user_input) == 0) {
   printf("Match!");
}
```

2. Create a structure called movie_t that stores a movie name, the duration of the movie, and a pointer to another movie_t structure.

```
typedef struct movie_s {
   char name [20];
   double duration;
   movie_s * next;
}movie_t;
```

3. Write a statement of code that will dynamically allocate memory for a movie_t structure.

   - `movie_t * my_movie = (movie_t *)malloc(sizeof(movie_t));`

4. A line in a file contains the following:
   3 bubbles 4.5
   Using a file pointer called input, create variables and craft an fscanf statement to store the data.

   - `fscanf(input, "%d %s %lf", &my_int, my_string, &my_double);`

5. Given:
   animal_t cat;
   Store the number 4 in the legs property of cat.

   - `cat.legs = 4;`

6. Given:
   animal_t \* cat;
   Store the number 4 in the legs property of cat.

   - `cat->legs = 4;` OR `(*cat).legs = 4;`

7. Write a function prototype that returns an integer and takes as parameters a pointer and a double.
   - `int foo(double *, double)`
   - Since type of pointer was not specified, any type is accepted.

## Fill in the Blank

1. \_\_\_\_ is a function that allows change in how much space is reserved when a structure is dynamically created.

   - realloc
   - Changed to bonus question

2. A \_\_\_\_ file can be used to store libraries and function prototypes to clean up the actual code files. The code file can then just reference it with a statement such as #include "def.h"

   - header

3. While strings can be created at a defined size, \_\_\_\_ is found at the end of the string to note the end of the string.

   - \0
   - Changed to bonus question

4. Structure \_\_\_\_ occurs when one structure is used as part of the definition for another structure. An example of this would be creating a structure for a book, then a structure for a library that includes an array of book structures.
   - hierarchy
   - Changed to bonus question

## True / False

1. The final node in a linked list points to void.

   - False. Final node points to NULL

2. (\*node).foo and node->foo perform the same action.

   - True. Both would access `foo` in s structure named `node`

3. The char_array.h library incldues special functions to use with strings.

   - False. `string.h` is the correct library

4. A structure is a valid return type for a function.
   - True. Functions can return a single type, and a structure meets that definition
