# SHU-ZJQ-data-structure-1

上海大学数据结构（1）课程代码

# 适用课程

上海大学

2023冬季学期

数据结构（1）

08305009

授课老师 张景峤

## 项目介绍

本项目全程在macos系统上使用clion开发，对windows系统进行了一定的适配，理论在linux系统下也适用

使用了github的action功能 能自动编译出windows、macOS、linux下的可执行文件并上传到release

lab0-lab4分别对应实验零到实验四

lab-pre是小组研讨

lab-pre-2也就是研讨二是个半成品，并没有完全做完

tools文件夹下的那个脚本是把GBK编码的文件转成UTF-8用的

## 实验零 C++类与对象

一、目的和要求

1. 掌握类、对象的基本概念，理解类中成员的访问权限，正确理解类与结构体的异同；
2. 学习对象的说明和使用方法，掌握构造函数、析构函数的工作原理；
3. 了解I/O流类的层次结构，掌握C++标准输入输出流的用法，能够使用操纵算子格式化输入输出；
4. 了解、掌握文件流的用法。

二、实验环境

1. Windows操作系统；
2. DEV C++、Visual Studio等语言环境；

三、实验内容

  设计描述二维点的类Point2D和二维几何图形的类Shape2D。功能要求：

  1、重载输入输出流运算符，实现类对象的输入输出；

  2、Point2D类除了具有基本的构造、拷贝构造、析构和赋值函数之外，还应具有以下功能：

​    2.1获取当前点的坐标；

​    2.2设置当前点的坐标；

​    2.3计算模长；

​    2.4计算方向向量；

​    2.5 计算两点间的距离；

  3、以Shape2D类为基类派生5个子类，分别表示直线段、圆、三角形、矩形(只考虑两边与坐标轴平行的矩形)和一般多边形四种图形。基类中的数据成员为一组二维点和点的个数，子类没有新增的数据成员。各类均具有基本的构造、拷贝构造、析构和赋值函数。其他功能要求如下：

​    3.1当对象为直线段时，能够计算直线段长度和斜率；

​    3.2当对象是圆时，能够计算半径、周长和面积；

​    3.3当对象是三角形时，计算周长和面积；

​    3.4当对象是矩形时，计算长宽比和面积；

​    3.5当对象是一般多边形时，计算周长和面积；

​    3.6计算二维图形的重心坐标。

  4、编写测试函数，测试所有功能。 

  5、程序具有良好的可交互性。

## 实验一 线性表


一、目的和要求

1. 掌握线性表的逻辑结构定义和各种存储结构的实现。
2. 熟练运用线性表的各种存储结构以及各种基本操作。
3. 根据实际问题的需要，选择线性表的存储结构解决问题。

二、实验环境

1.Windows操作系统；

2.DEV C++、Visual Studio等集成开发环境；

三、实验内容

（每个同学完成，第1题必做，2-3选做一题）

（每个题目一个文件夹，包括源程序和编译好的可执行文件；所有题目文件夹打包成一个压缩文件，文件名格式：学号姓名实验一.zip。上传到www.elearning.shu.edu.cn）

1．顺序表的验证

（1）在顺序表类模板中增加成员函数DelSameItem(const T &e)删除顺序表中与e相同的所有元素。要求时间复杂度O(n)，空间复杂度O(1)。

（2）在顺序表类模板中增加成员函数Reverse()对顺序表原地逆置。

（3）使用实验零中的Point2D作为顺序表的数据元素类型，测试顺序表类中的所有功能。

注：Point2D类型的两个元素比较规则，比较x值，x大者为大；x相等时，比较y值，大者为大。

2．单链表的验证

（1）将教材中带头节点的单链表类模板修改为不带头节点的单链表类模板，并且修改类模板中的插入函数，要求插入元素时按元素值从小到大的顺序插入数据元素到链表的适当位置。

（2）使用实验零中的Point2D作为线性表的数据元素类型测试不带头结点的单链表。

3．双向循环链表的验证

（1）将教材中带头节点的双向循环链表类模板修改为不带头节点的双向循环链表类模板，并且修改类模板中的插入函数，要求插入元素时按元素值从小到大的顺序插入数据元素到链表的适当位置。

（2）使用实验零中的Point2D作为线性表的数据元素类型测试不带头结点的双向循环链表。

## 实验二 栈和队列

一、目的和要求

1. 掌握栈和队列的逻辑结构定义和各种存储结构的实现。
2. 熟练运用栈和队列的各种存储结构以及各种基本操作。
3. 根据实际问题的需要，选择栈和队列适合的存储结构解决问题。

二、实验环境

1.Windows操作系统；

2.DEV C++、Visual Studio语言环境等；

三、实验内容

(第1、4题为一组；第2、3题为另一组，每个同学选择一组完成。)

（每个题目一个文件夹，包括源程序和编译好的可执行程序；所有题目文件夹打包成一个压缩文件，文件名格式：学号姓名实验二.zip。上传到www.elearning.shu.edu.cn）

1．顺序栈的验证

（1）修改教材中顺序栈的入栈成员函数，要求当栈满时，执行私有成员函数StackFull( )进行栈满处理。其功能是：动态创建一个比原来的栈数组大一倍的新数组，代替原来的栈数组，原来栈数组中的元素占据新数组的前MaxSize位置。

（2）使用实验零中的Point2D作为栈的数据元素类型测试顺序栈的实现。

2．链式栈的验证

（1）修改教材中链式栈类模板，用带头结点的单链表作为栈的存储结构。

（2）使用实验零中的Point2D作为栈的数据元素类型测试上述链式栈的实现。

3．循环队列的验证

（1）修改教材中循环队列类模板，把成员数据rear改为length用来表示队列长度，完成修改后各成员函数的实现，并进行测试验证。

（2）使用实验零中的Point2D作为队列的数据元素类型测试循环队列的实现。

4．链队列的验证

（1）修改教材中的链队列类模板，用一个不带头结点的单循环链表来表示队列（也称为循环链队列），其中只设一个队尾指针rear，不设队头指针，队尾指针rear指向队尾元素结点。

（2）使用实验零中的Point2D作为队列的数据元素类型测试上述循环链队列的实现。

## 实验三 串、数组和广义表

一、目的和要求

1. 掌握串、数组和广义表的逻辑结构定义和各种存储结构的实现。
2. 熟练运用串、数组和广义表的的各种存储结构以及各种基本操作。
3. 根据实际问题的需要，选择串、数组和广义表适合的存储结构解决问题。

二、实验环境

1.Windows操作系统；

2.DEV C++、Visual Studio语言环境等；

三、实验内容

（每个题目一个文件夹，包括源程序和编译好的可执行程序；所有题目文件夹打包成一个压缩文件，文件名格式：学号姓名实验三.zip。上传到www.elearning.shu.edu.cn）

1．KMP算法的验证

（1）在示例代码中5.1节最后提到的增加改进的失效函数；

（2）在示例代码中增加功能：查找主串中所有匹配模式串的子串信息；

（3）自行设计验证程序，要求程序运行时可以由用户交互输入主串和模式串。

2. 三元组顺序表的验证

在三元组顺序表中，增加运算符重载函数，实现两个矩阵的加法运算。

3．广义表的验证

（1）在广义表类模板中增加成员函数，实现在指定位置插入原子元素或子表元素。

（2）在广义表类模板中增加成员函数，对非递归的广义表，实现广义表的逆置。例如，有一个广义表L=(a,(b,c,d),(e,f),g)，其逆置后的结果为(g,(f,e),(d,c,b),a)。

（3）设定输入H和T分别表示取广义表表头和表尾的操作。要求实现根据输入的一个由H和T组成的字符串，输出最终的操作结果。如对于广义表L=(a,(b,c,d),(e,f),g)，输入“THT”，则应该输出(c,d)。

## 实验四 二叉树

一、目的和要求

1.掌握二叉树的逻辑结构定义和各种存储结构的实现。

2.熟练运用二叉树的各种存储结构以及各种基本操作。

3.根据实际问题的需要，选择二叉树适合的存储结构解决问题。

二、实验环境

1.Windows操作系统；

2.DEV C++、Visual Studio语言环境等；

三、实验内容

**（每个题目一个文件夹，包括源程序和编译好的可执行程序；所有题目文件夹打包成一个压缩文件，文件名格式：学号姓名实验四.zip。上传到www.elearning.shu.edu.cn）**

 **1．二叉链表的验证**

（1）在二叉链表类模板中增加函数成员 LeafCount()，统计二叉树中叶子结点的数目。

（2）在二叉链表类模板中增加函数成员InOrderwithStack()，实现非递归的二叉树中序遍历算法。

（3）在二叉链表类模板中增加函数成员 IsCompleteBinaryTree()，判断二叉树是否为完全二叉树。

**2．堆的验证**

（1）修改最小堆中构造函数 MinHeap(ElemType a[],int maxSize,int n)，从空堆开始依次插入数组 a 中的元素构造堆。

（2）把最小堆的类模板改造成最大堆。



## **研讨一** 线性表

仿照教材中带头结点的单链表类模板，设计带头结点的静态单链表类模板。

## 研讨二 栈与队列

**航空订票系统**

**[问题描述]** 

随着计算机的普及，计算机的应用已经深入到人们生活的方方面面，航空订票系统就是其中之一。航空订票系统主要包括：航班查询、旅客订票、旅客退票、航班管理等功能。 

航班查询：根据旅客提供的出发时间、出发地点和目的地、舱位等要求，查询满足旅客要求的航班信息(航班号、起飞时间、起飞地点、抵达时间、抵达地点、座位数、空位数、票价等)。

旅客订票：旅客提交订票的相关信息（航班号、订票数量，相应人员的姓名、身份证和联系电话），系统将查询相应航班的已定票情况，若尚有余票，则为客户办理订票手续,为旅客安排座位等，否则询问旅客是否愿意等待退票，如果旅客愿意等待则记录相关信息，否则就退出订票。 

退票处理：旅客若需退票，可提出退票处理。输入退票信息（航班号、身份证号），系统将修改相应的座位安排情况，并判断该航班是否有等待退票的旅客，如果有则安排最早等待的旅客订票。 

航班管理：航空公司可以新增航班；显示某航班详细信息，航班号、起飞时间、起飞地点、抵达时间、抵达地点、票价、所有座位安排情况、等待退票的旅客信息（身份证号、姓名、性别、出生日期、联系电话等）；航空公司还可以修改航班信息，如起飞时间、票价等。

 **[基本要求]** 

系统能进行航班查询、旅客订票、旅客退票、航班管理。 

**[测试数据]** 

系统提供一个菜单，让操作员选择不同的功能，进行不同的操作，能显示各航班详细信息、已经完成订票的客户信息、等待退票的客户信息。 

**[实现提示]** 

航班信息、航班中已订票的旅客信息可以用线性表表示，各航班的等待退票旅客信息可以用队列实现，一个航班一个已订票的旅客信息表，另一个等待退票旅客信息队列。 

注意考虑若一名旅客与不同航班有关联，如何保证旅客信息在不同航班保持一致性。

**[挑战性内容]** 

1) 设置旅客等级。当有旅客退票时，则先安排优先级别高（优先级别一样，则安排等待时间长）的旅客订票。 
2) 设置航班中座位等级，分别设：头等舱(First class)、商务舱(Business class)和经济舱(Economy class)，完成相应的功能，允许旅客订票后能进行座位等级调换。

## 研讨四 二叉树

## 一、目的和要求

1.掌握二叉树的逻辑结构定义和各种存储结构的实现。

2.熟练运用二叉树的各种存储结构以及各种基本操作。

3.根据实际问题的需要，选择二叉树适合的存储结构解决问题。

## 二、实验环境

1.Windows操作系统；

2.DEV C++、Visual Studio语言环境等；

## 三、研讨内容

**1．使用堆结构求取中位数**

[问题描述]

中位数（Median）又称中值，是按顺序排列的一组数据中居于中间位置的数，其可将数据集合划分为相等的上下两部分。如果数据集合的个数N为奇数，那么第(N+1)/2个数据是中位数；如果N为偶数，通常取最中间的两个数据值的平均数作为中位数。

 [基本要求]

（1）对于数据元素个数动态变化的集合，设计并实现求取中位数的方法。动态变化指集合中的数据元素可以任意增加或删除。

（2）讨论算法的时间复杂度。

（3）不能使用STL提供的容器工具。

 [测试数据]

（1）自行设计少量数据用于算法调试。

（2）使用median.txt文件作为输入数据，文件中包含30w个整数数据。