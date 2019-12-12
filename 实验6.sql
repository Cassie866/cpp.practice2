CREATE TABLE Student
(
Sno CHAR(9) PRIMARY KEY,  /*列级完整性约束条件，Sno 是主码*/
Sname CHAR(20) UNIQUE,  /* Sname取唯一-值*/
Ssex CHAR(2),
Sage SMALLINT,
Sdept CHAR(20)
);

CREATE TABLE Course
( 
Cno CHAR(4)PRIMARY KEY, 
Cname CHAR(40) UNIQUE NOT NULL,  /*列级完整性约束条件,Cname不能取空值*/
Cpno CHAR(4),/*Cpno的含义是先修课*/
Ccredit SMALLINT,
);  

CREATE TABLE SC 
(
Sno CHAR(9),
Cno CHAR(4),
Grade SMALLINT,
PRIMARY KEY (Sno,Cno), /* 主码由两个属性构成，必须作为表级完整性进行定义*/
FOREIGN KEY (Sno) REFERENCES Student(Sno),/*表级完整性约束条件，Sno 是外码，被参照表是Student */
FOREIGN KEY (Cno) REFERENCES Course(Cno)/*表级完整性约束条件，Cno 是外码，被参照表是Course*/
);

create table Student
(
Sno char(9) primary key, 
Sname char(20) unique, 
Ssex char(2),
Sage smallint,
Sdept char(20)
);
create table Course
( 
Cno char(4)primary key, 
Cname char(40) unique NOT NULL,  
Cpno char(4),
Ccredit smallint,
);  
create table SC 
(
Sno char(9),
Cno char(4),
Grade smallint,
primary key (Sno,Cno),
foreign KEY (Sno) references Student(Sno),
foreign KEY (Cno) references Course(Cno)
);
 


