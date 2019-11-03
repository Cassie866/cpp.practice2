create database Mall;

create table goods(
goods_id int comment '商品编号',
goods_name varchar(100) comment '商品名称',
unitprice int comment '单价',
category varchar(100) comment '商品分类',
provider varchar(100) comment '供应商名称'
);

insert into goods(goods_id,goods_name,unitprice,category,provider)value
(1,'矿泉水',2,'饮品','农夫山泉'),
(2,'奶茶',5,'饮品','香飘飘'),
(3,'方便面',5,'食品','康师傅'),
(4,'饼干',8,'食品','乐天'),
(5,'面包',5,'食品','好丽友'),
(6,'纸巾',5,'生活用品','维达'),
(7,'袜子',10,'服饰','南极人');

create table customer(
customer_id int comment '客户号',
name varchar(100) comment '姓名',
address varchar(100) comment '住址',
email varchar(100) comment '电子邮箱',
sex enum('男','女') comment '性别',
card_id char(20) unique comment '身份证号'
);

insert into customer(customer_id,name,address,email,sex,card_id)value
(001,'小蘑菇','科大生活区','1344435413@qq.com','女','140222199708180082'),
(002,'小月月','科大生活区','1234566735@qq.com','女','621722200011230082'),
(003,'杨泽','西工苑','789936385@qq.com','男','621721199907220082'),
(004,'佳乐','西工苑','782942974@qq.com','男','621722199806170082');