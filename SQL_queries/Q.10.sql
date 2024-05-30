
use S_J_1;
CREATE TABLE viewtable (
    EmployeeID INT,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Salary DECIMAL(15, 2),
    JoiningDate TIMESTAMP,
    Department VARCHAR(50)
);
CREATE OR REPLACE TRIGGER Insert Into ViewTable
AFTER INSERT ON Employee
FOR EACH ROW
BEGIN
    INSERT INTO ViewTable (EmployeeID, FirstName, LastName, Salary, JoiningDate, Department)
    VALUES (:NEW.EmployeeID, :NEW.FirstName, :NEW.LastName, :NEW.Salary, :NEW.JoiningDate, :NEW.Department);
END;



INSERT INTO Employee (EmployeeID, FirstName, LastName, Salary, JoiningDate, Department)
VALUES (9, 'John', 'Doe', 90000, '2024-05-28 12:00:00', 'IT');
