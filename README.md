# Library for driving Mars rover MAK-1

## Installing

Clone repository to Arduino libraries folder.

## Usage

```cpp
#include <MAK1.h>


MAK1 mak1;


void setup() {

  mak1.initialize();

  // Begin

  mak1.forward(72);
  mak1.left(90);
  mak1.forward(96);

  // End

  mak1.stop();
}


void loop() {

}
```
