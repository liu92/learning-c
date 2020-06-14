#define MAXSIZE 100

typedef struct{ //多项式非零项的定义

   float p;  //系数
   int e;    //指数
}Polynomial;



typedef struct{  
    
    Polynomial *elem;  //存储空间的基地址
    int lenght;        //多项式中当前项的个数
}SqList;               //多项式的顺序存储结构类型为SqList


typedef struct  
{
    int data;
}ElemType;


typedef struct Lnode{
  ElemType data;
  struct Londe *next;
}Lnode,*LinkList; 



 
