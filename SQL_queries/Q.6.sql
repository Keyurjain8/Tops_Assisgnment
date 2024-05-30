use keyur_jain_22;
CREATE TABLE EMP (
    EMPID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Salary DECIMAL(15, 2),
    JoiningDate TIMESTAMP,
    Department VARCHAR(50)
);
drop table EMP
INSERT INTO EMP (EMPID, FirstName, LastName, Salary, JoiningDate, Department) VALUES
(1, 'John', 'Abraham', 1000000, '2013-01-01 00:00:00', 'Banking'),
(2, 'Michael', 'Clarke', 800000, '2013-01-01 00:00:00', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '2013-01-01 00:00:00', 'Banking'),
(4, 'Tom', 'Jose', 600000, '2013-02-01 00:00:00', 'Insurance'),
(5, 'Jerry', 'Pinto', 650000, '2013-02-01 00:00:00', 'Services'),	
(6, 'Philip', 'Mathew', 750000, '2013-02-01 00:00:00', 'Services'),
(7, 'TestName1', 'Lname1', 123, '2013-01-01 00:00:00', 'TestName2'),
(8, 'TestName2', 'Lname%', 600000, '2013-02-01 00:00:00', 'Insurance');
SELECT * FROM EMP
WHERE FirstName LIKE '%J%';


SELECT Department, MAX(Salary) AS MaxSalary
FROM Employee
GROUP BY Department
ORDER BY MaxSalary ASC;

