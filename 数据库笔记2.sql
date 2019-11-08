1.数据库的备份和恢复
#mysqldump -uroot -p -B 数据库名 > a.sql 命令行操作
source a.sql  数据库内操作

2.数据类型
varchar 的上限 65532，3个存长度。
GBK下，两字节一字符，32766
UTF8下，三字符一字符，21844

float[m,d]
double[m,d]  IEE754标准
decimal(m,d) 高精类型
m为有效数字位数，d为小数位数。

3.约束
null代表不存在，null参与大多数运算结果都为空，<=>
zerofill 用0补齐int前空的字符
auto_increment:一张表只能有一个
主键 primary key 唯一非空，复合主键，多列唯一性
唯一键，unique 只有唯一性
外键，foreign key 对自己的某一列进行限制，方法是指定另一张表的某一列

4.select 
where 行筛选 运算符 <=> ，is null ，is not null 
between 。。。and 。。。
in
like % _
and or not 

order by:
[asc]升序，默认
desc 降序

limit 只要前n行，或m行后的n行

聚合：
count sum avg max min
搭配group by
根据某个字段对行进行分组

having 针对分组后的结果执行筛选


多表查询/内联：
对两张表的所有内容进行排列组合后再筛选
子查询：
where后的子查询
通过某个查询结果的值对另一个查询语句进行筛选
多行： in all any 
from后的子查询
用某个查询结果生成的临时表与另一张表进行多表查询

试图：
查询结果保存成一个试图，一般用于查询，改视图很危险

外连：
左外，右外，保证左右表每一行至少输出一次

索引：
经常查，重复度低的字段
二叉排序树 B树，b tree

事务：
一致性：前后一致，操作前后处于稳定状态
隔离性：事务和事务之间是隔离的
原子性：原子操作
持久性：修改不会消失

五大区别
innoDB和MyISAM区别：
1.innoDB事务
2.innoDB支持外键
3.innoDB聚集索引
4.数行数，innoDB 不会数数，每次数数都要从头
5.innoDB不支持全文索引
一般选择innoDB,Mysql默认引擎



















