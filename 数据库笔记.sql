连接服务器
mysql -h 127.0.0.1 -P 3306 -u root -p
mysql  -u root -p
如果没有写 -h 127.0.0.1 默认是连接本地
如果没有写 -P 3306 默认是连接3306端口号

创建数据库
create  database helloworld;
系统使用默认字符集：utf8，校验规则是：utf8_ general_ ci

create database db2 charset=utf8;

create database db3 charset=utf8 collate utf8_general_ci;

CREATE DATABASE [IF NOT EXISTS] db_name [create_specification [, create_specification] ...]

create_specification:    
[DEFAULT] CHARACTER SET charset_name    
[DEFAULT] COLLATE collation_name

CHARACTER SET: 指定数据库采用的字符集 
COLLATE: 指定数据库字符集的校验规则 


使用数据库
use helloworld;


修改数据库
对数据库的修改主要指的是修改数据库的字符集，校验规则
ALTER DATABASE db_name 
[alter_spacification [,alter_spacification]...]
 
alter_spacification: 
[DEFAULT] CHARACTER SET charset_name 
[DEFAULT] COLLATE collation_name

修改内容和创建命令都一样


数据库删除 
DROP DATABASE [IF EXISTS] db_ name;


备份
# mysqldump -P3306 -u root -p 密码 -B 数据库名 > 数据库备份存储的文件路径
# mysqldump -u root -p -B 数据库名 > 数据库备份存储的文件路径
# mysqldump -u root -p -B 数据库名 表名1 表名2  > 数据库备份存储的文件路径
# mysqldump -u root -p -B 数据库名1  数据库名2 ... > 数据库存放路径
如果备份一个数据库时，没有带上-B参数， 
在恢复数据库时，需要先创建空数据库，然后使用数据库，
再使 用source来还原。 

还原
mysql> source D:/mysql-5.7.22/mytest.sql;
 
查看连接情况
show processlist


创建数据库表
CREATE TABLE table_name (
    field1 datatype,    
	field2 datatype,    
	field3 datatype 
) character set 字符集 collate 校验规则 engine 存储引擎;
ﬁeld 表示列名 
datatype 表示列的类型 
character set 字符集，如果没有指定字符集，则以所在数据库的字符集为准 
collate 校验规则，如果没有指定校验规则，则以所在数据库的校验规则为准 

create table student(    
    id int,    
    name varchar(32),   
    gender varchar(2) 
);

查看表结构
desc 表名;

修改表
ALTER TABLE  tablename ADD (column datatype [DEFAULT expr][,column datatype]...);
ALTER TABLE  tablename MODIfy (column datatype [DEFAULT expr][,column datatype]...);
ALTER TABLE  tablename DROP (column);

删除表
DROP [TEMPORARY] TABLE [IF EXISTS] tbl_name [, tbl_name] ...

插入数据
insert into student (id, name, gender) values (1, '张三', '男'); 
insert into student (id, name, gender) values (2, '李四', '女'); 
insert into student (id, name, gender) values (3, '王五', '男');

查询表中的数据
select * from student;

查看数据库 
show databases;

显示创建语句
show create database 数据库名；

查看存储引擎
show engines;
两个：MyISAM，InnoDB 区别

查看系统默认字符集以及校验规则 
show variables like 'character_set_database'; 
show variables like 'collation_database';

查看数据库支持的字符集 
show charset;
查看数据库支持的字符集校验规则
show collation;

校验规则使用utf8_ general_ ci[不区分大小写]
校验规则使用utf8_ bin[区分大小写]


SQL分类 
DDL数据定义语言，用来维护存储数据的结构 
代表指令: create, drop, alter 
DML数据操纵语言，用来对数据进行操作 
代表指令： insert，delete，update 
DML中又单独分了一个DQL，数据查询语言，
代表指令： select 
DCL数据控制语言，主要负责权限管理和事务 
代表指令： grant，revoke，commit 

存储引擎是：数据库管理系统如何存储数据、如何为存储的数据建立索引和如何更新、查询数据等技术的实现方法。
MySQL的核心就是插件式存储引擎，支持多种存储引擎。