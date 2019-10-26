# C++中的指针

### 1. 指针与const

* 指向常量的指针：指针指向的对象是一个常量，可以防止使用指针来修改所指向的值

  ~~~  c++
  int value_1 = 12;
  int value_2 = 13;
  const int * pt = &value_1;    // pt指向常量value
  *pt = 13;    // invalid, 不能通过pt来更改value_1的值
  pt = &value_2    // valid, 可以更改指针指向的对象，但该对象依然是常量
  ~~~

* 常指针：指针本身是一个常量，指针指向的位置不可修改

  ~~~ c++
  int value_1 = 12;
  int value_2 = 13;
  int * const pt = &value_1;    // 常指针pt指向对象value_1
  *pt = 13;    // valid, 可以通过pt来更改value_1的值
  pt = &value_2    // invalid, 不可以更改指针指向的对象
  ~~~

### 2.指针与new和delete

#### 2.1 使用new分配内存

​		new分配的内存与常规变量声明分配的内存不同块不同，常规变量的值都被存储在栈（stack）的内存区域中，new分配的内存位于堆（heap）或自由存储区（free store）。

```c++
int * pt1 = new int;        // 申请一块存储一个int类型的值的内存
int * pt2 = new double;     // 申请一块存储一个double类型的值的内存
int * pt3 = new char;       // 申请一块存储一个char类型的值的内存
int * pt4 = new int [10];   // 创建一个包含10个int元素的动态数组
int * pt5 = new char [10];  // 创建一个包含10个char字符的动态数组
```

#### 2.2 使用delete释放内存

​		使用delete可以释放指针指向的内存，<font color=red>但不会删除指针本身</font>，即可以将指针重新指向另一个新分配的内存块。new和delete需要配对地使用，否则会发生内存泄露（memory leak）。

```c++
delete pt1;
delete pt2;
delete pt3;
delete [] pt4;
delete [] pt5;
```

​		相关注意事项：

		* 不要使用delete释放不是new申请的内存
		* 不要使用delete释放同一个内存块两次
		* 如果使用new []为数组分配内存，则应使用delete []来释放
		* 如果使用new为一个实体分配内存，则应使用delete来释放

#### 2.3 静态联编与动态联编

**静态联编：**普通声明变量，是静态联编，即在便宜阶段已经为变量分配好了内存

**动态联编：** 使用new时，则为动态联编，变量实在程序运行是创建的

**<font color=red>动态联编和静态联编是C++多态性的一种体现！</font>** 

### 3.指针与数组

​		通常情况下，C++将数组名解释为第一个元素的地址。但是数组名是常量；指针是变量，可以修改它的值。

#### 3.1 指针与一维数组

##### (1) 指针数组与数组指针

* 指针数组

  ~~~ c++
  int * pt[5];
  int a[5] = {1, 2, 3, 4, 5};
  pt[0] = &a[0];
  ~~~
  
  ​		[]的优先级比*高，所以这是一个数组。数组里的元素的数据类型是 int * ，即整型指针。因此pt是一个指针数组，该数组拥有5个元素，每个元素均为指向整型的指针。
  
* 数组的指针

  ~~~ c++
  int * pt1;
  int (*pt2)[5];
  int a[5] = {1, 2, 3, 4, 5};
  pt1 = a;	// valid, pt1为int *类型，指向数组第一个元素
  pt2 = a;    // invalid, pt2是int (*)[5]类型，a是数组首元素的地址，而非数组地址，虽然二者的值一样
              // error: can not convert 'int *' to 'int (*)[5]'
  pt2 = &a;   // valid, &a是数组地址，赋值符号两边类型相同
  ~~~

  ​		pt是一个指针，指向大小为5的数组，因此pt叫数组的指针，定义了一个指向5个元素的一维数组的指针。在上面的代码中，pt为int (\*)[5]类型，a为int (\*)类型，&a为int (\*)[5]类型。

##### （2）sizeof()

​		sizeof(T)返回存储一个类型T的对象所需要的字节数。对数组名应用sizeof()，返回的是数组的长度；而对指针进行sizeof()，得到的是指针的长度。

~~~ c++
// 计算数组长度
int a[5] = {1, 2, 3, 4, 5};
len = sizeof(a) / sizeof(a[0]);
cout << len << endl;
~~~

#### 3.2 指针与二维数组

##### (1) 指向元素的指针

```c++
int a[3][4] = {
    			{1, 2, 3, 4}, 
			    {5, 6, 7, 8}, 
			    {9, 10, 11, 12}
			  };
int * p = &a[0][0];

// 访问元素a[i][j]
p = &a[m][n];
a[i][j] = *(p + (i-m)*C + (j-n));
```

​		p为指向数组a的\[0, 0\]位置的元素的指针，为int \*类型。

##### （2）指向行的指针

```c++
int a[3][4] = {
    			{1, 2, 3, 4}, 
			    {5, 6, 7, 8}, 
			    {9, 10, 11, 12}
			  };
int * p[3];

// 访问元素a[i][j]
for(int i = 0; i < 3; ++i)
{
    p[i] = a[i];
}
a[i][j] = *(p[i] + j);
```

​		二维数组是一个特殊的一维数组，这个一维数组中的每一个元素都为一个一维数组。a为数组的第一个元素的地址，也即第一个一维数组的地址。

##### (3) 指向整个数组的指针

```c++
int a[3][4] = {
    			{1, 2, 3, 4}, 
			    {5, 6, 7, 8}, 
			    {9, 10, 11, 12}
			  };
int (*p)[4];

// 访问元素a[i][j]
p = a;
a[i][j] = *(*(p + i) + j);
```

​		p为一个数组指针，指向一个包含4个int类型的数值的数组，a为数组第一个元素的地址，即数组a的第一行。因此，\*(p+i)指向数组的第i行，放在表达式中会被转换为第 1 行数据的首地址，也就是第 1 行第 0 个元素的地址，因为使用整行数据没有实际的含义，编译器遇到这种情况都会转换为指向该行第 0 个元素的指针；就像一维数组的名字，在定义时或者和 sizeof、& 一起使用时才表示整个数组，出现在表达式中就会被转换为指向数组第 0 个元素的指针。

### 4.指针与结构

要获得结构的地址，必须使用地址运算符&。<font color=red>当使用指针访问结构成员时，应使用间接访问运算符-></font>

```c++
// declaration
struct rect
{
    double x;
    double y;
};

rect pxy = {12.4, 56.7};	// create a struct variable
rect * pt = & pxy;			// point to pxy

// 通过结构本身访问成员
cout << pxy.x << pxy.y << endl;
// 通过指针访问结构成员
cout << pxy->x << pxy->y << endl;
```

### 5.指针与函数

**函数的地址：**函数的地址是存储其机器语言代码的内存开始的地址。

**获取函数的地址：**函数名就是该函数的地址

##### （1）声明函数的指针

​		需要指定函数的返回类型，以及特征标（参数列表），要像函数原型一样指出有关函数的信息。

```c++
double pam(int);	// function prototype
double (*pf)(int);	// function pointer
pf = pam;
double * pf (int);	// function return a pointer
```

##### （2）使用指针调用函数

​		若pf是指向函数的指针，使用(*pf)即可调用该函数

```c++
double pam(int);
double (*pf)(int);
pf = pam;
double x = pam(4);		// call pam() using the function name
double y = (*pf)(5);	// call pam() using the pointer pf
```

