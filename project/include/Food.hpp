#ifndef FOOD_HPP_
# define FOOD_HPP_

#include <iostream>
#include "ItemCrashable.hpp"
#include "Snake.hpp"

class Food : public ItemCrashable
{
private:
  Position *_itemPosition;
public:
  Food(int, int);
  virtual ~Food();
  virtual Position *getCurrentPosition();
  virtual void setPosition(int, int);
  virtual bool isCollide(Snake **);
};

#endif /* FOOD_HPP_ */