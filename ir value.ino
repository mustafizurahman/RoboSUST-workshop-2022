int irvalue(int output, int mark) {
  if (output < mark) {
    return 0;  //white line
  } 
  else if (output > mark) {
    return 1;  //black line
  }
}