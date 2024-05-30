create database S_J_1;
use S_J_1;
CREATE TABLE Employee (
    EmployeeID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Salary DECIMAL(15, 2),
    JoiningDate TIMESTAMP,
    Department VARCHAR(50)
);
INSERT INTO Employee (EmployeeID, FirstName, LastName, Salary, JoiningDate, Department) VALUES
(1, 'John', 'Abraham', 1000000, '2013-01-01 00:00:00', 'Banking'),
(2, 'Michael', 'Clarke', 800000, '2013-01-01 00:00:00', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '2013-01-01 00:00:00', 'Banking'),
(4, 'Tom', 'Jose', 600000, '2013-02-01 00:00:00', 'Insurance'),
(5, 'Jerry', 'Pinto', 650000, '2013-02-01 00:00:00', 'Services'),
(6, 'Philip', 'Mathew', 750000, '2013-02-01 00:00:00', 'Services'),
(7, 'TestName1', 'Lname1', 123, '2013-01-01 00:00:00', 'TestName2'),
(8, 'TestName2', 'Lname%', 600000, '2013-02-01 00:00:00', 'Insurance');

CREATE TABLE Incentive (
    EmployeeRefID INT,
    IncentiveDate DATE,
    IncentiveAmount DECIMAL(10, 2),
    FOREIGN KEY (EmployeeRefID) REFERENCES Employee(EmployeeID)
);
INSERT INTO Incentive (EmployeeRefID, IncentiveDate, IncentiveAmount) VALUES
(1, '2013-02-01', 5000),
(2, '2013-02-01', 3000),
(3, '2013-02-01', 4000),
(1, '2013-01-01', 4500),
(2, '2013-01-01', 3500);
SELECT e.FirstName, i.IncentiveAmount
FROM Employee e
JOIN Incentive i ON e.EmployeeID = i.EmployeeRefID
WHERE i.IncentiveAmount > 3000;

