#ifndef __THREADED_H
#define __THREADED_H

#include <lib9.h>
#include <thread.h>

class Threaded {
public:
  Threaded();
  ~Threaded();
  static void Run(void*);

protected:
  void thread();
  int _thread;

private:
  virtual void run() = 0;
};

#endif // __THREADED_H
