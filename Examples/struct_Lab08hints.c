//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

typedef struct {
  int pedals;
  int wheels;
  double wheel_size;
  char model [20];
} bike_t;
//create address_t

typedef struct {
  bike_t bikes[5];
} shop_t;
//create dns_t

void get_data (shop_t *);
void search_model(shop_t);

int main(void) {
  //print menu for user
  //create selection menu
  //  switch or if statments
  //    call corresponding function

  shop_t mikes;
  get_data (&mikes);
  search_model(mikes);
  return 0;
}

void search_model (shop_t shop){
  char mod_name [20] = "recumbant";
  for (int i = 0; i <= 5; i++){
    if (strcmp(shop.bikes[i].model, mod_name) == 0){
      printf("Match was found!\n");
      printf("Num pedals: %d\n Num wheels: %d\n", shop.bikes[i].pedals, shop.bikes[i].wheels);
    }
  }
}

void get_data (shop_t * shop){
  //create file pointer
  FILE * data = fopen("data.txt", "r");
  //create loop until 5 lines read OR data end found
  //fscanf (data,"%d,%d,%lf %s", &shop->bikes[0].pedals, &shop->bikes[0].wheels, &shop->bikes[0].wheel_size, shop->bikes[0].model);
  for (int i = 0; i <= 5; i++){
    fscanf (data,"%d,%d,%lf %s", &shop->bikes[i].pedals, &shop->bikes[i].wheels, &shop->bikes[i].wheel_size, shop->bikes[i].model);

    if (shop->bikes[i].pedals == 0 && shop->bikes[i].wheels == 0 && shop->bikes[i].wheel_size == 0 && strcmp(shop->bikes[i].model, "done") == 0){
      printf("Terminating line found\n");
      break;
    }

  }
}