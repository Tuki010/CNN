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
            /**/
          }
        }
          
第三章 线性表
第四章 栈与队列
第五章 串
第六章 树
第七章 图
第八章 查找
第九章 排序
