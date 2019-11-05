CREATE TABLE T_student
(
    s_dept varchar(50) NULL,
	s_class varchar(50) NULL,
	s_no char(11) NOT NULL PRIMARY KEY,
	s_name varchar(8) NOT NULL,
	s_sex char(2) NULL,
	s_birth smalldatetime NULL,
	s_id char(18) NULL UNIQUE
)
GO

CREATE TABLE T_course
(
	c_id char(6) NOT NULL PRIMARY KEY,
	c_name varchar(50) NOT NULL,
	c_term tinyint NULL,
	c_hour tinyint NULL,
	c_score decimal(2,1) NULL,
	c_category varchar(10) NULL
)
GO

CREATE TABLE T_average
(
    s_no char(11) NOT NULL PRIMARY KEY,
	c_id char(6) NOT NULL UNIQUE,
	a_average decimal(4,1) NULL,
	c_score decimal(2,1) NULL
)
GO

CREATE TABLE T_user
(
    u_id varchar(10) NOT NULL PRIMARY KEY,
	u_name varchar(20) NOT NULL,
	u_type varchar(10) NOT NULL,
	u_password varchar(20) NULL
)
GO

INSERT INTO T_student 
VALUES('数学与应用数学','数学161','201611010116','杨乐','男','1998-06-23','621422199806230016')


INSERT INTO T_student 
VALUES('计算机科学与技术','计算机161','201611007121','蔡徐坤','男','1996-06-13','621422199606130016')


DELETE FROM T_student
WHERE s_name='杨乐'

UPDATE T_student
SET s_dept='计科系'
WHERE s_dept='计算机科学与技术'

SELECT * FROM T_student

DELETE FROM T_student
WHERE s_name='蔡徐坤'
