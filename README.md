# Personal-bank-account-management
# （个人银行账户管理程序）
C++入手项目（《C++语言程序设计》（第4版）课本项目）

### 2020/7/11  

完成项目类的设计，初步实现基本功能（开户、存钱、取钱、结算利息）

### 2020/7/13 第五章改进  

1.为SavingsAccount类增加一个静态数据成员total,用来记录各个账户的总金额，并为其增加相应的静态成员函数getTotal用来对其进行访问。  
2.将SavingsAccount类的诸如getBalance,accumulate这些不需要改变对象状态的成员函数声明为常成员函数。  
3.对程序结构进行调整：将SavingsAccount类从主函数所在的源文件中分开，建立两个新的文件account.h和account.cpp,分别存放SavingsAccount类的定义和实现。  
