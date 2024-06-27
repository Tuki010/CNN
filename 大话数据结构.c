第一章 绪论
  程序设计= 数据结构+算法
  数据：是描述客观事物的符号，是计算机可以操作的对象，是能被计算机识别，并输入给计算机处理的符号集合。
  数据元素：是组成数据的、有一定意义的基本单位，在计算机中通常作为整体处理。也被叫做记录。
  数据项：一个数据元素可以由若干个数据项组成。
  数据项是数据不可分割的最小单位。
  数据对象：是相同的数据元素的集合，是数据的子集。
  数据结构：是相互之间存在的一种或多种特定关系的集合。
  逻辑结构：是指数据对象中元素之间的相互关系。
  逻辑结构以下四种：
    集合结构：集合结构中的数据元素除了同属于一个集合外，他们之间没有其他关系
    线性结构：线性结构中的数据元素是一对一的关系。
    树形结构：树形结构中的数据元素之间存在一对多的层次关系。
    图形结构：图形结构中数据元素是多对多的关系。
  物理结构：是指数据结构的逻辑结构在计算机中的存储形式。
  物理结构以下两种：
    顺序存储和链式存储：
    顺序存储结构：是把数据元素放在地址连续的存储单元里，其数据间的逻辑关系和物理关系一致。
    链式存储结构：是把数据元素存放在任意存储单元里，这组存储单元可以是连续的，也可以不是连续的。
  数据类型：是指一组性质相同的值的集合及定义在此集合上的一些操作的总称。
  C语言，按取值不同，存在两类数据类型：
    原子类型：是不可以在分解的基本类型，整型，实型，字符型等
    结构类型：由若干个类型组成，可以再分解的。；例如，整型数组是由若干个整型数据组成。
  抽象数据类型（ADT）：一个数学模型及定义在该模型上的一组操作。“抽象”的意义在于数据类型的数学抽象特性。
  抽象数据类型的标准格式：
    /ADT 抽象数据类型名
     Data
         数据元素之间逻辑关系的定义
     Operation
         操作1
              初始条件
              操作结果描述
         操作2
              .....
         操作n
              .....
     EndADT/
第二章 算法
  数据结构和算法的关系
    相辅相成，互相可以更好的理解。
  两种算法的比较
  
    ****1+2+....+99+100的算法****
    
    第一种
      int i,sum = 0, n = 100 /*定义整型 i和sum = 0，n 为最大数 100*/ 
      for(i = 1 ; i < = n ; i++)/** for 循环体，循环条件：i 从第一个数字开始（计算机是从位置为0开始进行存储） ，i < = 100，每循环一次后 i 自增 1。*/ 
       {
        sum = sum + i;  /**循环体内部函数。*/
      }
      print(" %d " , sum); /** 循环体结束后，打印出最后结果。*/
      
      
      
    第二种
      int i , sum = 0 ,n = 100;/**整型 i 和 sum = 0， n = 100； ！！i 定义什么作用啊！！*/
      sum = (1 + n) * n / 2;/**等差数列求和公式； */
      printf( "%d" , sum );/**结束后，打印出最后结果；*/
      
      
      
  算法的普遍定义
    是解决特定问题求解步骤的描述，在计算机中表现为指令的有限序列，并且每条指令表示一个或多个操作。
  算法的特性
    算法具有零个或多个输入，算至少有一个或多个输出。
    有穷性：指的是在执行有限个步骤后，自动结束，不会出现无限循环，并且每一个步骤在可接受的时间内完成。
    确定性：算法的每一步骤都具有确定的含义，不会出现二义性。
    可行性：算法的每一步都必须是可行的，也就是，每一步都能够通过执行有限次数完成。
  算法效率的度量方法
    事后统计
      主要通过设计好的测试程序和数据，利用计算机的计时器对不同算法编制的程序的运行时间进行比较，从而确实算法效率的高低。
    事前统计
      在计算机程序编制前，依据统计方法对算法进行估算。
  两种算法的效率度量
    第一种
      int i , sum = 0 , n = 100 ;     /*执行一次*/
      for ( i = 1 ; i < = n ; i++);   /*执行 n + 1 次（算至101不符合循环条件）*/
      {
        sum = sum + i ;               /*执行 n 次 */
      }
      printf ( " %d " , sum  );       /*执行一次*/
      
    第二种
      int sum = 0 ， n = 100 ；/*执行一次*/
      sum = ( 1 + n )  * n / 2;/*执行一次*/
      printf(" %d " , sum );   /*执行一次*/
    
    针对前两种算法的延伸
      int i, j, x = 0, sum = 0, n = 100;/*执行一次*/
      for( i = 1; i < = n; i++)         /*for 循环 */
      {
        for(j = 1; j < = n; j++)        /*for循环嵌套 基于上层循环*/
        {
          x++;                          /*外层for每循环一次，该内层for循环n次。*/
          sum = sum + x;                /*外层for每循环一次，该内层for循环n次。*/
        }
      }
      printf(" %d ", sum )              /*执行一次*/
  算法的时间复杂度
    用大写O()来体现算法时间复杂度的记法。
    推导大O阶：
      1.用常数1取代运行时间中的所有加法常数。
      2.在修改后的运行次数函数中，只保留最高阶项目。
      3.如果最高阶项存在且不是1，则去除与这个项相乘的常数，得到的结果就是大O阶。
    常数阶
      int sum = o,n = 100;/*执行一次*/
      sum = (1 + n)*n/2;  /*执行一次*/
      printf( "%d"， sum);/*执行一次*/
        运行次数函数为f（n）=3。
        大O推导法：1.将常数项3改为1。在保留最高项时发现，没有最高阶项，因此无后两步，故此算法时间复杂度为O(1)。
    线性阶
      循环的时间复杂度为O（n）的代码：
        int i;
        for (i = 0 ; i < n ; i++)
        {
          /*时间复杂度为O（1）的程序步骤*/
        }
    对数阶
      int count = 1;
      while (count < n)
      {
        count = count * 2;
        /*时间复杂度为O(1)的程序步骤序列*/
      }
        代码的while循环: 当count < n的数值时，一直循环。当count循环 x 次时，count的数值为2的x次方 时 = n，跳出循，环则 x = log2（n）。故这个循环的时间复杂度为O(Log2（n）)。
    平方阶
      int i , j;
      for(i = o; i < n; i++)
      {
        for (j = 0 ;j < n ; J++)
        {
          /*时间复杂度为O(1)的程序步骤序列*/
        }
      }
        代码时间复杂度为O（n*n）。若外循环 n 改为 m ，时间复杂度为O（m * n）。
      延伸 1 ：
        int i, j;
        for(i = 0; i < n; i++)
        {
          for(j = i;  j < n; j++)
          {
            /*时间复杂度为O（1）的程序步骤序列*/
          }
        }
        此代码，外循环第0次开始，每循环一次，内循环总次数 减去 外循环已循环次数，总执行次数为 n+（n-1）+....+2+1为等差递减数列求和公式。
        大O表示法：1.没有加法常数，不考虑。
                   2.只保留高阶项 n*n/2
                   3.去除高阶项的相乘的常数，最终为O（n*n）
      延申 2 ：
        int i，j；
        for（i = 0; i < n; i++）
        {
          function（i）；
        }
        void function(int count)
        {
          int j;
          for(j = count; j < n; j++)
          {
            /*时间复杂度为O（1）的程序步骤序列*/
          }
        }     /*嵌套内循环，把内循环循环放入了函数中，所以最终时间复杂度为O（n*n）*/
      延伸 3 ：
        n++；                    /*执行次数为1*/
        function（n）;           /*执行次数为n*/
        int i,j;                 /**/
        for(i = 0; i < n; i++)   /*执行次数为n*n*/
        {
          function(i);
        }
        for (i = 0;i < n; i++)   /*执行次数为n(n+1)/2*/
        {
          for(i = 0; i < 0; j++)
          {
            /*时间复杂度为O（1）的程序步骤序列*/
          }
        }
          执行次数f(n)=1+n+n*n+n(n+1)/2,根据推导大O阶法，最终代码复杂度为O(n*n)。
  算法空间复杂度
    算法的空间复杂度通过计算算法所需的存储空间实现，算法空间复杂度的计算公式记作：S(n)=O(f(n)),其中，n为问题规模，f(n)为语句关于n所占存储空间的函数。
    
第三章 线性表
  线性表(List):零个或多个数据元素的有限序列。
  线性表的抽象数据类型
    ADT 线性表(List)
    Data 
      线性表的数据对象集合为{a1，a2....，an}，每一个元素的类型均为DataType。其中，除第一个元素a1外，每一个元素都有一个直接前驱，除去最后一个元素an外，每天一个元素都有一个直接后继。数据元素之间的关系是一对一的关系。
      Operation
        InitList(*L):初始化操作，建立一个空的线性表L。
        ListEmpty(L):若线性表为空，返回true，否则返回false。
        ClearList(*L):将线性表清空。
        GetElem(L,i,*e):将线性表L中的第i个位置元素返回给e。
        LocatElem(L,e):在线性表中查找与给定值e相等的元素，若查找成功，返回该元素在表中的序号表示成功，否则，返回0表示失败。
        ListInsert(*L,i,e):在线性表中的第i个位置插入新元素e。
        ListDelete(*L,i,*e):删除线性表L中第i个元素，并用e返回其值。
        ListLength(L):返回线性表的个数。
    endADT
  假设将La表示集合A，Lb表示i集合B，则实现思路如下：
    /*将所有线性表Lb中但不在La中的数据插入La中*/
    void union(List *La,List Lb)
    {
      int La_len,Lb_len,i;
      ElemType e;     /*声明与La和Lb相同数据元素e*/
      La_len = ListLength(La); /*求线性表的长度*/
      Lb_len = ListLength(Lb);
      for (i = 1;i < =Lb_len；i++ )
        {
          GetElem(Lb,i,e);  /*取Lb中第i个数据元素赋值给e*/
          if(!LocateElem(La ,++La_len,equal))  /*La中不存在和e相同数据元素*/
            ListInsert(La,++La_len,e)；/*插入*/
        }
    }
  线性表的顺序存储结构
    定义：指的是用一段地址连续的存储单元依次存储线性表的数据元素。
    顺序存储方式：
      顺序存储结构代码：
        #define MAXSIZE 20    /*存储空间初始分配量*/
        typedef int ElemType; /*ElemType 类型根据实际情况而定，这里假设为int*/
        typedef struct
        {
          ElemType data[MAXSIZE];  /*数组存储数据元素，最大值为MAXSIZE */
          int length;              /*线性表当前长度*/
        }sqList;
      数据长度与线性表长度的区别
        数组的长度是存放线性表的存储空间的长度，存储分配后这个量一般是不变的。
        线性表的长度是线性表中数据元素的个数，随着线性表插入和删除操作的进行，这个量是变化的。
      地址计算方法
        C语言中数组是从0开始第一个下标的，于是线性表的第i个元素是要存储在数组下标为 i-1 的位置，即数据元素的序号和存放它的数组下标之间存在对应关系。
        存储器中的每个存储单元都有自己的编号，这个编号称为地址。
  顺序存储结构的插入与删除
    获得元素的操作
      #define OK 1
      #define ERROR 0
      #define TRUE 1
      #define FALSE 0
      typedef int Status;
      /*Status 是函数的类型，其值是函数结果状态代码，如OK等*/
      /*初始条件：顺序线性表L已存在，1 <= i <= Listlength(L)*/
      /*操作结果：用e返回L中第i个数据元素的值*/
      Status GetElem(SqList L;int i,ElemTpye *e)
      {
        if(L.length == 0 || i < 1 || i > L.length)
          return ERROR;
        *e = L.data[ i-1 ];
        return OK;
      }
    插入操作
      思路 
        如果位置不合理，抛出异常；
        如果线性表长度大于等于数组长度，则抛出异常或动态增加容量；
        从最后一个元素开始向前遍历到第i个位置，分别将它们都向后移动一位；
        将插入元素填入位置i处
        表长加1。
      代码如下
        /*初始条件：顺序线性表L已存在。1 <= i <=listLength(L)*/
        /*操作结果：在L中第i个位置之前插入新的数据元素e，L的长度增加1*/
        Status ListInsert(Sqlist *L,int i ,ElemType e)
          {
            int k;
            if (L->length == MAXSIZE)       /*顺序线性表已满*/
              returen ERROR;
            if (i < 1 || i >L->length+1)    /*当i不在范围内*/
              for(k = L-> length ; k >= i-1; kp--)  /*将要插入位置后的数据元素向后移动一位*/
                L->data[k+1] = L->data[k]
            L->data[i-1]=e;   /*将新元素插入*/
            L->length++;
            return OK;    
          }
      删除操作
        思路
          删除位置不合理，抛出异常。
          取出删除元素。
          从删除元素位置开始遍历到最后一个元素位置，分别将它们都向前移一个位置。
          表长减一。
        代码
          /*初始条件：顺序线性表L已存在，1 <= i <= ListLength(L)*/
          /*操作结果：删除L的第i个元素，并用e返回其值，L的长度减一*/
          Status ListDelete(SqList *L,int i,ElemType *e)
          {
            int k ;
            if(L->length==0)  /*线性表为空*/
              return ERROR;
            if(i<1 || i>L->length)/*删除位置不正确*/
              return ERROR;
            *e = L->length[i-1]
            if(i<L->length)   /*如果删除不是最后位置*/
            {
              for( k=i; k<L->length;K++) /*将删除位置后继元素前移*/
                L->data[K-1]=L->data[k]
            }
            L->length--
            return OK;
          }
  线性表的链式存储结构
    链式存储结构定义
    头指针：是指链表指向第一个结点的指针，若链表有头结点，则是指向头结点的指针。具有标识作用，所以常用头指针冠以链表的名字。无论链表是否为空，头指针均不为空。头指针是链表的必要元素。
    头结点：是为了操作的统一和方便而设立的，放在第一元素的结点之前，其数据域一般无意义。有了头结点，对在第一元素结点前插入结点和删除第一结点，其操作与其它结点的操作就统一了。头结点不一定是链表必须要素。
    代码
      /*线性表的单链表存储结构*/
      typedef struct Node
      {
        ElemType data；
        struct Node *next
      }Node；
      typedef struct Node *LinkList；/*定义 LinkList*/
  单链表的读取
    算法思路
      1.声明一个结点p指向链表第一个结点，初始话j从1开始；
      2.当j<i时，就遍历链表，让p的指针向后移动，不断指向下一结点，j累加1；
      3.若到链表末尾p为空，则说明第i个元素不存在；
      4.否则查找成功，返回结点p的数据。
    代码：
      /*初始条件：顺序线性表L已存在，1<=i<=ListLength(L)*/
      /*操作结果：用e返回L中第i个数据元素的值*/
      Status GetElem(LinkList L,int i,Elemtype *e)
      {
        int j;
        LinkList p;/*声明一个节点p*/
        p = L->next;/*让p指向链表L的第一个节点*/
        j = 1;/*j为计数器*/
        while (p && j < i)/*当p不为空或者计数器j不等于i时，循环*/
          p = p ->next;/*p指向下一个节点*/
          ++j;
        if ( !p || j > 1)/*j大于1且p为空*/
          return  ERROR;/* 第i个不存在*/
        *e = p->data;/*取第i个元素的数据*/
        return OK;
      }
  单链表的插入
    实现代码
      /*初始条件：顺序线性表L已经存在，1 = < i = < ListLength(L)*/
      /*操作结果：在L中第i个位置之前插入新的元素e，L的长度加1*/
      Status ListInsert(LinkList *L, int i , ElemType e)
      {
        int j;
        LinkList p,s;
        p = *L;
        j = 1;
        while ( p && j < i)
          {
            p = p->next;
            ++j;
          }
        if (!p || j > i)
          return ERROR;
        s = (LinkList) malloc(sizeof(Node));
        s -> data = e;
        s -> next = p->next ;
        p -> next = s;
        return OK;
      }
  单链表的删除
    Status ListDelete(LinkList *L, int i ,  ElemType *e)
    {
      int j;
      LinkList p,q;
      p = *L;
      j = 1 ;
      while (p -> next && j = 1 )
      {
        p = p->next;
        ++j;
      }
      if (!(p -> next) || j > i)
        retutrn ERROR;
      q = p ->next;
      *e = q ->data;
      free(q);
      return OK;
    }
  双向列表
    存储结构
      typedef struct DulNode
      {
        Elemtype data;
        struct DulNode *prior;
        struct DulNode *next;
      } DulNode , *DuLinkList;
第四章 栈与队列
  栈是仅限于在表尾进行插入和删除操作的线性表
  栈是后进先出的线性表
  栈的抽象数据类型
    ADT 栈(stack)
    Data
      同线性表。元素具有相同的类型，相邻元素具有前驱和后继关系。
    Operation
      InitStack(*s)
      DestoryStack(*s)
      ClearStack(*s)
      StackEmpty(s)
      GetTOP(s , *e)
      Push(*s , e)
      Pop(*s, e )
      StackLength(s)
    endADT
  栈的定义结构
    typedef int SElemType;
    typedef struct
    {
      SElemType data[MAXSIZE]
      int top;
    }SqStack;
  进栈操作
    status push (SqStack *S, SElemtype e)
    {
      if( S -> top == MAXSIZE-1)
      {
        return ERROR;
      }
      S->top++;
      S->data[S->top] = e;
      return OK;
    }
  出栈操作
    Status Pop(SqStack *S, SElempty *e)
    {
      if(s->top == -1)
        return ERROR;
      *e = s->data[s->top];
      s->top--;
      return OK;
    }
  两栈共享空间
    储存结构
      typedef struct
      {
        SElemType data[MAXSIZE];
        int top1;
        int top2;
      }SqDoubleStack;
  栈的输入与输出
    Status Push(SqDoubleStack *s, SElempty e, int stackNumber)
    {
      if(S->top+1 == S->top2)
        return ERROR;
      if(stackNumber == 1)
        S->stack[++S->top] = e;
      else if(stackNumber == 2)
        S->data[--S->top2] = e;
      return OK;
    }
     Status Pop(SqDoubleStack *s, SElempty e, int stackNumber)
    {
      if(stackNumber == 1)
      {
        if(S->top1==1)
          return ERROR;
        *e = S->data[S->top1--];
      }
      else if(stackNumber == 2)
      {
        if(S->top2==MAXSIZE)
          return ERROR;
        *e = S->data[S->top2++]
      }
      return OK;
    }
  链式栈
    存储结构
      typedef struct StackNode
      {
        SElemType data;
        struct StackNode *next;
      }StackNode,*LinkStackPtr;
      typedef struct LinkStack
      {
        LinkStackPtr top;
        int count;
      }LinkStack;
  进栈
    Status Push(LinkStack *s ,SElempty e)
    {
      LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode));
      s->data = e;
      s->next =S->top;
      S->top = s;
      S->count++;
      return OK;
    }
  出栈
    Status Pop(LinkStack *s,SElemType *e)
    {
      LinkStackPtr p;
      if(StackEmpty(*S))
        return ERROR;
      *e = S->top->data;
      p = S->top;
      S->top = S->top->next;
      free(p);
      S->count--;
      return OK;
    }
  栈的递归
    斐波那契数列
      int Fbi(int)
      {
        if(i < 2)
          return i == 0 ? 0 :1;
        return Fbi( i - 1) + Fbi(i -2);
      }
      int main()
      {
        int i;
        for(int i =0;i < 40 ;i ++)
          printf("%d" , Fbi(i));
        return 0
      }
  栈的应用——四则运算表达式求值
    后缀
  队列的定义
      Queue 只允许在一端进行插入操作，而在另一端进行删除操作的线性表。特征为先进先出,FIFO。
  队列抽象数据类型
    ADT队列(Queue)
    Data
      同线性表。元素具有相同的类型，相邻的元素具有前驱和后继关系。
    Operation
      InitQueue(*Q)
      DestroyQueue(*Q)
      ClearQueue(*Q)
      QueueEmpty(Q)
      GetHead(Q,*e)
      EnQueue(*Q,e)
      DeQueue(*Q,*e)
       QueueLength(Q)
    endADT
  
第五章 串
第六章 树
第七章 图
第八章 查找
第九章 排序
