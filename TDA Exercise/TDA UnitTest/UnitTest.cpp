
#include "Process.h"
#include "gtest/gtest.h"

TEST(ProcessShould, ReturnProcess) {
  Process objProc;
  objProc.calculate(1,2,3,4);
  float num=10;
  float den=8;
  EXPECT_EQ(num, objProc.getNum);
  EXPECT_EQ(den, objProc.getDen);
}