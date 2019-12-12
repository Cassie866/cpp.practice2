create clustered index index_Sno on Student(Sno);


insert into Student values
('23','小王','男',18,'信息171'),
('13','小李','女',20,'信息171'),
('06','小明','男',18,'信息171'),
('11','张三','女',19,'信息171'),
('02','李四','女',18,'信息171'),
('44','王五','男',19,'信息171'),
('62','赵六','女',18,'信息171'),
('53','小黑','男',18,'信息171');


insert into Student values
('25','猪八戒','男',20,'信息171'),
('18','孙悟空','男',18,'信息171'),
('45','沙和尚','男',18,'信息171');

create table 借阅表
(
num int, 
name char(20), 
the_date int
);

create table 图书表
( 
num int, 
name char(20),  
price int
);  

insert into 借阅表 values
(16,'红楼梦',20191205),
(05,'西游记','20191121'),
(108,'水浒传','20190205'),
(72,'三国演义','20190817');

insert into 图书表 values
(16,'红楼梦',88),
(17,'红楼梦',88),
(18,'红楼梦',88),
(05,'西游记',46),
(06,'西游记',46),
(04,'西游记',46),
(108,'水浒传',62),
(105,'水浒传',62),
(107,'水浒传',62),
(106,'水浒传',62),
(72,'三国演义',94),
(71,'三国演义',94),
(70,'三国演义',94),
(73,'三国演义',94);

select * from 借阅表;
select * from 图书表;
create nonclustered index IX_date on 借阅表(the_date asc);
create index IX_price on 图书表(price desc);
asc desc