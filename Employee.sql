--- Createing Our Table: ---
CREATE DATABASE QUIZ3;
USE QUIZ3;

CREATE TABLE Employee(
			Emp_no INT PRIMARY KEY,
			name VARCHAR(20) NOT NULL,
			Job VARCHAR(20),
			Mgr INT ,
			BD_DATE DATE,
			SALARY FLOAT,
			Comm FLOAT,
			Dep_no INT
		      );

INSERT INTO Employee VALUES(67018,'Aya','Sales',NULL,'1999-02-01',1750.00,300.00,3);
INSERT INTO Employee VALUES(67019,'Sara','Analyses',1010,'1998-12-10',1700.00,100.00,5);
INSERT INTO Employee VALUES(67020,'Ahmed','Accounting',1011,'1997-07-07',1200.00,NULL,1);
INSERT INTO Employee VALUES(67021,'Hamza','Sales',NULL,'1999-12-10',2400.00,150.00,3);
INSERT INTO Employee VALUES(67022,'Zenab','Analyses',1012,'2001-04-28',2000.00,NULL,5);

---  ---
SELECT name FROM Employee WHERE Job LIKE '__l%' AND Mgr IS NOT NULL;
---  ---
SELECT comm,comm+10 AS FULL_COMM FROM Employee;
---  ---
SELECT Emp_no,Job FROM Employee WHERE Job='Analyses' OR Job='Accounting' AND SALARY >= 1700;
---  ---
SELECT * FROM Employee WHERE Mgr IS NOT NULL;
---  ---
SELECT NAME + ' works in ' + Job FROM Employee WHERE Dep_no = 5;
---  ---
SELECT DISTINCT Job FROM Employee;
---  ---
SELECT Emp_no FROM Employee WHERE Dep_no <>5;
---  ---
SELECT Emp_no FROM Employee WHERE SALARY BETWEEN 1700.00 AND 1750.00;
---  ---
SELECT NAME FROM Employee WHERE Dep_no = 3 OR Comm IS NULL;
---  ---
SELECT * FROM Employee ORDER BY 7;
