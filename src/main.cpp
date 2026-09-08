#include "solution.hpp"

int MinutesToFill(int level, int capacity, int rate) {
  int fill = capacity - level;
  
  if (fill == 0 || (level > capacity)) {
    return 0;
  } else if (fill != 0 && (fill % rate) > 0 ) {
    return (fill / rate) + 1;
  } else {
    int remaining = (fill / rate);
    return remaining;
  }
  return 0;
}

int GrowthOn(int day, int first, int second) {
 if (day == 0) {
   return first;
 } else if (day == 1) {
   return second;
 } else {
   int prev = first;
   int ahora = second;
   
   for (int i = 2; i<= day; i++) {
     int next = prev + ahora;
     
     prev = ahora;
     ahora = next;
   }
   return ahora;
 }
}

bool ReadingsAgree(int first_reading, int second_reading, int tolerance) {

  
  bool s_variable = (first_reading <= second_reading);
  
  if (s_variable) {
    int third = second_reading - first_reading;
    if (third <= tolerance) {
      return true;
    } else {
      return false;
  }
}
  if (s_variable != true) {
    int third = first_reading - second_reading;
    if (third <= tolerance) {
      return true;
  } else {
    return false;
    }
  }
  // TODO: Return whether the readings differ by at most tolerance, in
  // either direction, as one compound condition.
  return false;

}
