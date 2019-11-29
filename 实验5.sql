CREATE DATABASE Student;

USE Student;

CREATE TABLE Message
(    
id INT  PRIMARY KEY,    
name VARCHAR(20) NOT NULL, 
age int,  
sex VARCHAR(20),
);

INSERT INTO Message VALUES    
(1,'小王', 18,'男'),    
(2,'小张', 19,'女'),    
(3,'小赵', 18,'女'),    
(4,'小白', 19,'男'),    
(5,'小红', 20,'女'),   
(6,'小李', 18,'男'),   
(7,'小杨', 20,'男'); 

CREATE TABLE Grade
(    
id INT  PRIMARY KEY,    
name VARCHAR(20) NOT NULL, 
chinese int,  
math int,
English int
);
 
INSERT INTO Grade VALUES    
(1,'小王', 67, 98, 56),    
(2,'小张', 87, 78, 77),    
(3,'小赵', 88, 98, 90),    
(4,'小白', 82, 84, 67),    
(5,'小红', 55, 85, 45),   
(6,'小李', 70, 73, 78),   
(7,'小杨', 75, 65, 30); 

--单表查询
--全列查询
SELECT * FROM Grade;
--指定列查询 
SELECT id, name, English FROM Grade; 
--查询字段为表达式 
SELECT id, name, math + 5 FROM Grade; 
SELECT id, name, chinese + math + English FROM Grade; 
--WHERE 条件查询 
SELECT name, English FROM Grade WHERE English < 60; 
SELECT name, chinese FROM Grade WHERE chinese >= 80 AND chinese <= 90; 
SELECT name, chinese FROM Grade WHERE chinese BETWEEN 80 AND 90; 
SELECT name, math FROM Grade WHERE math = 58 OR math = 98 OR math = 99; 
SELECT name, math FROM Grade WHERE math IN (58,98,99); 

SELECT name, chinese, English FROM Grade WHERE chinese > English;
SELECT name, chinese + math + English 总分 FROM Grade WHERE chinese + math + English < 200;

SELECT name, math FROM Grade ORDER BY math; 
SELECT name, chinese + math + English FROM Grade ORDER BY chinese + math + English DESC; 
SELECT name, math, English, chinese FROM Grade ORDER BY math DESC, English, chinese; 


--统计数学成绩分数个数 
SELECT COUNT(math) FROM Grade; 
--统计去重数学成绩数量 
SELECT COUNT(DISTINCT math) FROM Grade; 

--统计英语成绩总分
SELECT SUM(English) FROM Grade;
--统计英语60分以下的总分
SELECT SUM(English) FROM Grade WHERE English < 60; 

--统计平均总分
SELECT AVG(chinese + math + English) 平均总分 FROM Grade;

--语文最高分
SELECT MAX(Chinese) FROM Grade;

--数学70分以上的最低分
SELECT MIN(math) FROM Grade WHERE math > 70; 

--内外连接
--学号姓名表 
CREATE TABLE Id_Name (id int, name varchar(20));  
INSERT INTO Id_Name VALUES
(1,'张三'),(2,'李四'),(3,'王五'),(4,'赵六'),(5,'刘八'); 
--学号成绩表
CREATE TABLE Id_Grade (id int, grade int); 
INSERT INTO Id_Grade VALUES
(1, 96),(2,75),(11, 35),(5, 80),(6,62),(12, 58);




--当左边表和右边表没有匹配时，也会显示左边表的数据 
SELECT * FROM Id_Name LEFT JOIN Id_Grade ON Id_Name.id=Id_Grade.id; 

SELECT * FROM Id_Name RIGHT JOIN Id_Grade ON Id_Name.id=Id_Grade.id; 


SELECT name, chinese, math FROM Grade WHERE chinese>80 UNION      
SELECT name, chinese, math FROM Grade WHERE math>80;--去掉了重复记录 
 
SELECT name, chinese, math FROM Grade WHERE chinese>80 UNION ALL    
SELECT name, chinese, math FROM Grade WHERE math>80;


SELECT Id_Name.id,Id_Grade.id,Id_Name.name,Id_Grade.grade FROM Id_Grade, Id_Name where Id_Grade.id = Id_Name.id;










