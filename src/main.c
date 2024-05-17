#include "header1.h"
#include "header2.h"
#include <stdio.h>

State currentState = IDLE;

void handleEvent(Event event) {
  switch (currentState) {
  case IDLE:
    if (event == EVENT_SELECT) {
      currentState = SELECTION;
      printf("Transition to SELECTION state\n");
    }
    break;
  case SELECTION:
    if (event == EVENT_PAY) {
      currentState = PAYMENT;
      printf("Transition to PAYMENT state\n");
    }
    break;
  case PAYMENT:
    if (event == EVENT_DISPENSE) {
      currentState = DISPENSE;
      printf("Transition to DISPENSE state\n");
    }
    break;
  case DISPENSE:
    if (event == EVENT_NONE) {
      currentState = IDLE;
      printf("Transition to IDLE state\n");
    }
    break;
  }
}

int main() {

  printf("Hello, world V.10!\n");
  printf("Addition result: %d\n", add(5, 3));
  handleEvent(EVENT_SELECT);   // IDLE -> SELECTION
  handleEvent(EVENT_PAY);      // SELECTION -> PAYMENT
  handleEvent(EVENT_DISPENSE); // PAYMENT -> DISPENSE
  handleEvent(EVENT_NONE);     // DISPENSE -> IDLE

  printf("Addition result: %d\n", add(5, 3));
  return 0;
}
