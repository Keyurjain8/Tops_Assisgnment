use keyur_jain_22;
CREATE TABLE employe (
    employeID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Salary DECIMAL(15, 2),
    JoiningDate TIMESTAMP,
    Department VARCHAR(50)
);
INSERT INTO employe (employeID, FirstName, LastName, Salary, JoiningDate, Department) VALUES
(1, 'John', 'Abraham', 1000000, '2013-01-01 00:00:00', 'Banking'),
(2, 'Michael', 'Clarke', 800000, '2013-01-01 00:00:00', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '2013-01-01 00:00:00', 'Banking'),
(4, 'Tom', 'Jose', 600000, '2013-02-01 00:00:00', 'Insurance'),
(5, 'Jerry', 'Pinto', 650000, '2013-02-01 00:00:00', 'Services'),	
(6, 'Philip', 'Mathew', 750000, '2013-02-01 00:00:00', 'Services'),
(7, 'TestName1', 'Lname1', 123, '2013-01-01 00:00:00', 'TestName2'),
(8, 'TestName2', 'Lname%', 600000, '2013-02-01 00:00:00', 'Insurance');
drop table employe;
  SELECT *
FROM employe
ORDER BY FirstName ASC, Salary DESC;

