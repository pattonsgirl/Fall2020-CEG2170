int my_int = 42;
  double num_cars = 78.7523849348;
  printf("The value of my_int is %d\n", my_int);
  //our first scan
  printf("Enter a number: ");
  scanf("%d %lf", &my_int, &num_cars);
  printf("The NEW value of my_int is %d and number of cars is %lf\n", my_int, num_cars);

  //arithmetic
  printf("%d\n", 5+7);
  int num1 = 5;
  int num2 = 7;
  printf("%d\n", num1+num2);
  int result = num1 + num2;
  printf("%d\n", result);
  //ignore this, bad idea
  //printf("%d\n", num1++);
  double pow_result;
  pow_result = pow(num1, num2);
  printf("pow result is %lf\n", pow_result);
  return 0;