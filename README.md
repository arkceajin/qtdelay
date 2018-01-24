# qtdelay
`qtdelay` provide a single marco function which is able to execute a part of the code after the specified delay. 
it won't block the thread beacuase it's based on `QTimer`.

## How to use

  1. Put `qtdelay.h` into your project, add it into `.pro `, and enable C++11 by adding `QMAKE_CXXFLAGS += -std=c++11`. 
  
  2. Use it like `QtDelay(1000, {qDebug()<<"Hello";});`.
     this code will output `hello` after 1 second.
