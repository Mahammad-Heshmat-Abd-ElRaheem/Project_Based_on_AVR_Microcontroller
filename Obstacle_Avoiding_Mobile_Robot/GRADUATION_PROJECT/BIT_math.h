/****************************************/
/*          Author: Khaled Mohsen       */        
/*          Date: 1-8-2022              */
/*          Version: 1.0                */
/*          Module: BIT_math            */
/****************************************/
#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(Var , BitNo)    Var = (Var | (1<<BitNo))
#define TOGGLE_BIT(Var , BitNo)    Var = (Var ^ (1<<BitNo))
#define CLEAR_BIT(Var , BitNo)    Var = (Var & ~(1<<BitNo))
#define GET_BIT(Var , BitNo)    (Var>>BitNo & 1)
#define CONC_BIT(A7,A6,A5,A4,A3,A2,A1,A0)  CONC_HELP(A7,A6,A5,A4,A3,A2,A1,A0)
#define CONC_HELP(A7,A6,A5,A4,A3,A2,A1,A0) 0b##A7##A6##A5##A4##A3##A2##A1##A0
#endif