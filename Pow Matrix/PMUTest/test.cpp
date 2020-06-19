/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
* AUTOR: Chicaiza Jaya Cristopher Jennsy                          *
* VERSION DEL PROGRAMA: 1.0                                       *
******************************************************************/

/* Se realizan pruebas con diferentes datos y tamaños de vector*/
#include "pch.h"
#include "Matrix.h"

TEST(Test1, TestMP) {
	Matrix objMatrix;
	int M1[2][], Mr[2][], Me[2];
	M1[0][0] = 2;
	M1[0][1] = 3;
	M1[1][0] = 4;
	M1[1][1] = 5;
	Mr[0][0] = 16;
	Mr[0][1] = 21;
	Mr[1][0] = 28;
	Mr[1][1] = 37;
	objMatrix.process(M1, Mr, 2, 2);
	EXPECT_EQ(M1, Mr);
	EXPECT_TRUE(true);
}
TEST(Test2, TestMP) {
	Matrix objMatrix;
	int M1[2][], Mr[2][], Me[2];
	M1[0][0] = 1;
	M1[0][1] = 1;
	M1[1][0] = 1;
	M1[1][1] = 1;
	Mr[0][0] = 2;
	Mr[0][1] = 2;
	Mr[1][0] = 2;
	Mr[1][1] = 2;
	objMatrix.process(M1, Mr, 2, 2);
	EXPECT_EQ(M1, Mr);
	EXPECT_TRUE(true);
}
TEST(Test3, TestMP) {
	Matrix objMatrix;
	int M1[2][], Mr[2][], Me[2];
	M1[0][0] = 0;
	M1[0][1] = 0;
	M1[1][0] = 0;
	M1[1][1] = 0;
	Mr[0][0] = 0;
	Mr[0][1] = 0;
	Mr[1][0] = 0;
	Mr[1][1] = 0;
	objMatrix.process(M1, Mr, 2, 2);
	EXPECT_EQ(M1, Mr);
	EXPECT_TRUE(true);
}
TEST(Test4, TestMP) {
	Matrix objMatrix;
	int M1[2][], Mr[2][], Me[2];
	M1[0][0] = -1;
	M1[0][1] = -1;
	M1[1][0] = -1;
	M1[1][1] = 10;
	Mr[0][0] = 2;
	Mr[0][1] = -9;
	Mr[1][0] = -9;
	Mr[1][1] = 101;
	objMatrix.process(M1, Mr, 2, 2);
	EXPECT_EQ(M1, Mr);
	EXPECT_TRUE(true);
}
TEST(Test5, TestMP) {
	Matrix objMatrix;
	int M1[2][], Mr[2][], Me[2];
	M1[0][0] = 0;
	M1[0][1] = 0;
	M1[1][0] = 0;
	M1[1][1] = 0;
	Mr[0][0] = 0;
	Mr[0][1] = 0;
	Mr[1][0] = 0;
	Mr[1][1] = 0;
	objMatrix.process(M1, Mr, 2, 45);
	EXPECT_EQ(M1, Mr);
	EXPECT_TRUE(true);
}
TEST(Test6, TestMP) {
	Matrix objMatrix;
	int M1[2][], Mr[2][], Me[2];
	M1[0][0] = -1;
	M1[0][1] = 1;
	M1[1][0] = -2;
	M1[1][1] = 2;
	Mr[0][0] = -1;
	Mr[0][1] = 1;
	Mr[1][0] = -2;
	Mr[1][1] = 2;
	objMatrix.process(M1, Mr, 2, 10);
	EXPECT_EQ(M1, Mr);
	EXPECT_TRUE(true);
}
TEST(Test7, TestMP) {
	Matrix objMatrix;
	int M1[2][], Mr[2][], Me[2];
	M1[0][0] = 100;
	M1[0][1] = 23;
	M1[1][0] = 53;
	M1[1][1] = 47;
	Mr[0][0] = 100;
	Mr[0][1] = 23;
	Mr[1][0] = 53;
	Mr[1][1] = 47;
	objMatrix.process(M1, Mr, 2, 1);
	EXPECT_EQ(M1, Mr);
	EXPECT_TRUE(true);
}
TEST(Test8, TestMP) {
	Matrix objMatrix;
	int M1[2][], Mr[2][], Me[2];
	M1[0][0] = 23;
	M1[0][1] = 34;
	M1[1][0] = 42;
	M1[1][1] = 51;
	Mr[0][0] = 0;
	Mr[0][1] = 0;
	Mr[1][0] = 0;
	Mr[1][1] = 0;
	objMatrix.process(M1, Mr, 2, 0);
	EXPECT_EQ(M1, Mr);
	EXPECT_TRUE(true);
}
TEST(Test9, TestMP) {
	Matrix objMatrix;
	int M1[2][], Mr[2][], Me[2];
	M1[0][0] = 2;
	Mr[0][0] = 32;
	objMatrix.process(M1, Mr, 2, 5);
	EXPECT_EQ(M1, Mr);
	EXPECT_TRUE(true);
}
TEST(Test10, TestMP) {
	Matrix objMatrix;
	int M1[2][], Mr[2][], Me[2];
	M1[0][0] = 5;
	Mr[0][0] = 25;
	
	objMatrix.process(M1, Mr, 1, 2);
	EXPECT_EQ(M1, Mr);
	EXPECT_TRUE(true);
}
