# Quiz 8

1.  Write the following structures:

address_t that has four integers (A, B, C, and D respectively) and stores a hostname (string).

Create a second structure called dns_t that will create an array of 25 address_t types.

```
typedef struct{
    int A, B, C, D;
    char hostname [10];
} address_t;

typedef struct {
    address_t entry[25];
}dns_t;
```

2. Pointer notation for a structure can either use (\*foop).stuff OR foop.stuff

   - False. Can use (\*foop).stuff OR foop->stuff

3. The statements below, assuming proper initialization elsewhere, will both access pedals for the variable bike:

```
bikep = &bike;
(*bikep).pedals;
bike.pedals;
```

    - True.  Both methods can access the pedals property of the bike structure.

4. I have data formatted as follows:

3.5/8/43.9 Garden

Write a scan (such as with sscanf) statement that will assign the data to the doubles length, width, depth, and the string name. These are plain variables - no structures surrounding them.

```
sscanf("3.5/8/43.9 Garden", "%lf/%lf/%lf %s", &length, &width, &depth, name);
```

5. I have a variable student of type student_t with the following variables: name, uid, and gpa. Write statements that give student the name "Bob", a GPA of 4.2 and a UID of 50678.

```
student_t student;
strcpy(student.name, "Bob");
student.GPA = 4.2;
student.UID = 50678;
```
