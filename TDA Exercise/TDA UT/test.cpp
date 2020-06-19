#include "pch.h"
#include "Process.h"
TEST(TestCaseName, TestName) {
	Process ObjPr;
	Operation ObjOp;
	ObjOp.setNumA(1);
	ObjOp.setDenB(1);
	ObjOp.setNumC(1);
	ObjOp.setDenD(1);
	ObjPr.calculate(ObjOp);

  EXPECT_EQ(ObjPr.getDen, float (1));
  EXPECT_TRUE(true);
}